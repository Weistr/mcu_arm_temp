;;###########################################################################
;;
;; FILE:    IQNsin.asm
;;
;; TITLE:   C Callable IQ Sin Math Function
;;
;;###########################################################################
;;
;; Ver  |     Date    |  Who  | Description of changes
;; =====|=============|=======|==============================================
;; 1.2  | 11 Oct 2001 | A. T. | Original Release.
;; -----|-------------|-------|----------------------------------------------
;; 1.3  | 19 Nov 2001 | A. T. | No changes.
;; -----|-------------|-------|----------------------------------------------
;; 1.4  | 17 May 2002 | A. T. | Improved accuracy from 16 to about 29 bits
;;      |             |       | (thanks to Settu for writing original code).
;;      |             |       | Modified code so that calculation constants
;;      |             |       | are embedded in code and not in table.
;; -----|-------------|-------|----------------------------------------------
;;      |             |       |
;;
;;###########################################################################

;;===========================================================================
;; Function:   _IQNsin
;;===========================================================================
;;
;; C Usage:    extern long _IQNsin(long Rad);
;;
;;---------------------------------------------------------------------------
;;
;; On Entry:   ACC = Radian in IQ format
;;
;; Regs Used:  XAR7, XAR6, XAR5, XAR4, XAR0
;;             XT, P
;;
;; On Exit:    ACC = sin(Radian) result in IQ format
;;
;; Q range:    30 to 1
;;
;;---------------------------------------------------------------------------
;; Algorithm:  The "sin" value is calculated as follows:
;;
;;             1) The offset into a 512 word sin/cos table is calculated:
;;
;;                 k = 0x1FF & (int(Radian*512/(2*pi)))
;;                 
;;
;;             2) The fractional component between table samples is
;;                calculated:
;;
;;                 x = fract(Radian*512/2*pi) * (2*pi)/512
;;
;;             3) The output sine value is calculated as follows:
;;
;;                 sin(Radian) = S(k) + x*(C(k) + x*(-0.5*S(k) - 0.166*x*C(k)))
;;
;;                 where  S(k) = Sin table value at offset "k"
;;                        C(k) = Cos table value at offset "k"
;;
;;             Using the above method, with a 512x32 full wave sin/cos table,
;;             will give an accuracy of approximately 29 bits.
;;
;;---------------------------------------------------------------------------
;; Benchmark:
;; 
;; Assumptions:  * Code executes from 0-wait SARAM block.
;;               * _IQsin/cos Table located in seperate SARAM or ROM block.
;;
;; Cycles = 45  (      Q == 30, tables in 0-wait SARAM, includes LCR/LRETR)
;;        = 46  (29 >= Q >= 25, tables in 0-wait SARAM, includes LCR/LRETR)
;;        = 45  (24 >= Q >= 14, tables in 0-wait SARAM, includes LCR/LRETR)
;;        = 46  (13 >= Q >= 0,  tables in 0-wait SARAM, includes LCR/LRETR)
;;
;; Cycles = 47  (      Q == 30, tables in 1-wait ROM,   includes LCR/LRETR)
;;        = 48  (29 >= Q >= 25, tables in 1-wait ROM,   includes LCR/LRETR)
;;        = 47  (24 >= Q >= 14, tables in 1-wait ROM,   includes LCR/LRETR)
;;        = 48  (13 >= Q >= 0,  tables in 1-wait ROM,   includes LCR/LRETR)
;;
;;===========================================================================

K1      .set    02AAAh                  ; 1/6 in Q16

IQNsin  .macro  q_value
		MOV     *SP++,#0x3F6B			; (2*pi)/512 = 0x03243F6B (Q32)
		MOV		*SP++,#0x0324
		MOV		*SP++,#0xC1B7			; 512/(2*pi) = 0x517CC1B7 (I8Q24)
		MOV		*SP++,#0x517C
        MOVL    XAR6,#_IQcosTable           
        MOVL    XAR7,#_IQsinTable           

        CLRC    TC
        SETC	OVM						; turn overflow mode on
        ABSTC   ACC                     ; abs(Rad), TC = sign
        
        MOVL    XT,*--SP                ; XT = 512/(2*pi) (I8Q24)
        IMPYL   P,XT,@ACC
        QMPYL   ACC,XT,@ACC             ; ACC:P = Rad * 512 / (2pi)
        
        .if q_value >= 25
        ASR64   ACC:P,#16
        ASR64   ACC:P,#(q_value - 24)   ; ACC = Integer, P = fract
        .endif       
        .if (q_value <= 24) & (q_value >= 9)
        ASR64   ACC:P,#(q_value - 8)    ; ACC = Integer, P = fract
        .endif
        .if q_value <= 7
        LSL64   ACC:P,#(8 - q_value)    ; ACC = Integer, P = fract
        .endif

        AND     @AL,#0x1FF
        LSL     AL,#1
        MOVZ    AR0,@AL                 ; AR0 = Index into "sin/cos" table = k
        
        MOVL    XT,*--SP                ; XT = (2*pi)/512                (Q32)
        QMPYUL  P,XT,@P                 ; P  = x                         (Q32) 
        MOVB    ACC,#0
        MOVL    XT,@P                   ; XT = x                         (Q32)
        
        MOVL    XAR4,*+XAR6[AR0]        ; XAR4 = C(k)                    (Q30)
        MOVL    XAR5,*+XAR7[AR0]        ; XAR5 = S(k)                    (Q30)
        
        SUBL    ACC,@XAR5               ; ACC = -S(k)                    (Q30)
        ASR64   ACC:P,#1                ; ACC = -0.5*S(k)                (Q30)
        QMPYL   P,XT,@XAR4              ; P   = x*C(k)                   (Q30)
        CLRC	OVM						; Turn overflow mode off
        MPY     P,@PH,#K1               ; P   = 0.166*x*C(k)             (Q30)
        SUBL    ACC,@P                  ; ACC = -0.5*S(k) - 0.166*x*C(k) (Q30)
        
        QMPYL   ACC,XT,@ACC             ; ACC = x*(-0.5*S(k) - 0.166*x*C(k))                   (Q30)
        ADDL    ACC,@XAR4               ; ACC = C(k) + x*(-0.5*S(k) - 0.166*x*C(k))            (Q30)
        QMPYL   ACC,XT,@ACC             ; ACC = x*(C(k) + x*(-0.5*S(k) - 0.166*x*C(k)))        (Q30)
        ADDL    ACC,@XAR5               ; ACC = S(k) + x*(C(k) + x*(-0.5*S(k) - 0.166*x*C(k))) (Q30)            
        
        NEGTC   ACC                     ; Negate result if necessary
        .if  (q_value <= 29) & (q_value >= 14)
        ASR64   ACC:P,#(30 - q_value)   ; Scale back to required IQ value
        .endif
        .if  q_value <= 13
        ASR64   ACC:P,#16
        ASR64   ACC:P,#(14 - q_value)   ; Scale back to required IQ value
        .endif

        LRETR
        .endm
        
        ;; The value "GLOBAL_Q" needs to be supplied by the assembler
        ;; using the "-dGLOBAL_Q=q_value" directive:
        .sect   "IQmath"
        .ref    _IQsinTable
        .ref    _IQcosTable
        .if GLOBAL_Q == 30
        .def    _IQ30sin
_IQ30sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 29
        .def    _IQ29sin
_IQ29sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 28      
        .def    _IQ28sin
_IQ28sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 27      
        .def    _IQ27sin
_IQ27sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 26
        .def    _IQ26sin
_IQ26sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 25
        .def    _IQ25sin
_IQ25sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 24      
        .def    _IQ24sin
_IQ24sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 23
        .def    _IQ23sin
_IQ23sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 22
        .def    _IQ22sin
_IQ22sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 21
        .def    _IQ21sin
_IQ21sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 20      
        .def    _IQ20sin
_IQ20sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 19
        .def    _IQ19sin
_IQ19sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 18
        .def    _IQ18sin
_IQ18sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 17
        .def    _IQ17sin
_IQ17sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 16
        .def    _IQ16sin
_IQ16sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 15
        .def    _IQ15sin
_IQ15sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 14
        .def    _IQ14sin
_IQ14sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 13
        .def    _IQ13sin
_IQ13sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 12
        .def    _IQ12sin
_IQ12sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 11
        .def    _IQ11sin
_IQ11sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 10
        .def    _IQ10sin
_IQ10sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 9
        .def    _IQ9sin
_IQ9sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 8
        .def    _IQ8sin
_IQ8sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 7       
        .def    _IQ7sin
_IQ7sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 6
        .def    _IQ6sin
_IQ6sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 5
        .def    _IQ5sin
_IQ5sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 4
        .def    _IQ4sin
_IQ4sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 3
        .def    _IQ3sin
_IQ3sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 2
        .def    _IQ2sin
_IQ2sin:
        IQNsin  GLOBAL_Q
        .endif

        .if GLOBAL_Q == 1
        .def    _IQ1sin
_IQ1sin:
        IQNsin  GLOBAL_Q
        .endif
                    
;;###########################################################################
;; No More.
;;###########################################################################