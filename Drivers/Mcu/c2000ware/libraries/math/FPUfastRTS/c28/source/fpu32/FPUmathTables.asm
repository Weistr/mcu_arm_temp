;;#############################################################################
;;! \file   FPUmathTables.asm
;;! \brief  Tables For FPU math Functions
;;! \author N/A 
;;! \date   N/A
;;! 
;;  Version:  2.0
;;  
;;  Contents: FPUsin and FPUcos Function Table,      Size Of Table = 1280x16
;;            FPUatan2 Function Table,               Size Of Table =  452x16
;;            FPUexp   Function Table,               Size of Table =   20x16
;;
;;  Revision History:
;;+----------+---------------+------------------------------------------------+
;;| DATE     | AUTHOR        | CHANGE                                         |
;;+----------+---------------+------------------------------------------------+
;;| 01/16/18 | Ritvik Sadana | Added FPU32 symbol names to keep naming        |
;;|          |               | consistent with FPU64 symbols.                 |
;;|          |               | NOTE: Old table symbols are supported for      |
;;|          |               | legacy reasons.                                |
;;+----------+---------------+------------------------------------------------+
;;
;;#############################################################################
;;!
;;! Copyright: Copyright (C) 2023 Texas Instruments Incorporated -
;;!	All rights reserved not granted herein.
;;!	Limited License.
;;!
;;! Texas Instruments Incorporated grants a world-wide, royalty-free,
;;! non-exclusive license under copyrights and patents it now or hereafter
;;! owns or controls to make, have made, use, import, offer to sell and sell
;;! ("Utilize") this software subject to the terms herein. With respect to the
;;! foregoing patent license, such license is granted solely to the extent that
;;! any such patent is necessary to Utilize the software alone. The patent
;;! license shall not apply to any combinations which include this software,
;;! other than combinations with devices manufactured by or for TI 
;;! ("TI Devices").
;;! No hardware patent is licensed hereunder.
;;!
;;! Redistributions must preserve existing copyright notices and reproduce this
;;! license (including the above copyright notice and the disclaimer and
;;! (if applicable) source code license limitations below) in the documentation
;;!  and/or other materials provided with the distribution.
;;!
;;! Redistribution and use in binary form, without modification, are permitted
;;! provided that the following conditions are met:
;;!
;;! * No reverse engineering, decompilation, or disassembly of this software is 
;;! permitted with respect to any software provided in binary form.
;;! * Any redistribution and use are licensed by TI for use only 
;;!   with TI Devices.
;;! * Nothing shall obligate TI to provide you with source code for the 
;;!   software licensed and provided to you in object code.
;;!
;;! If software source code is provided to you, modification and redistribution
;;! of the source code are permitted provided that the following conditions 
;;! are met:
;;!
;;! * any redistribution and use of the source code, including any resulting
;;!   derivative works, are licensed by TI for use only with TI Devices.
;;! * any redistribution and use of any object code compiled from the source
;;!   code and any resulting derivative works, are licensed by TI for use 
;;!   only with TI Devices.
;;!
;;! Neither the name of Texas Instruments Incorporated nor the names of its
;;! suppliers may be used to endorse or promote products derived from this 
;;! software without specific prior written permission.
;;#############################################################################

;;==========================================================================
;; FPUsin and FPUcos Function Table, Size Of Table = 1280x16
;;==========================================================================
    .if __TI_EABI__
    .asg    FPUsinTable, _FPUsinTable
    .asg    FPUcosTable, _FPUcosTable
    .asg    FPUsinTableEnd, _FPUsinTableEnd
    .asg    FPUcosTableEnd, _FPUcosTableEnd
    
    .asg    FPU32sinTable, _FPU32sinTable
    .asg    FPU32cosTable, _FPU32cosTable
    .asg    FPU32sinTableEnd, _FPU32sinTableEnd
    .asg    FPU32cosTableEnd, _FPU32cosTableEnd
    .endif
    
    .def    _FPUsinTable
    .def    _FPUcosTable
    .def    _FPUsinTableEnd
    .def    _FPUcosTableEnd
    
    .def    _FPU32sinTable
    .def    _FPU32cosTable
    .def    _FPU32sinTableEnd
    .def    _FPU32cosTableEnd

    .sect    "FPUmathTables"

_FPUsinTable:
_FPU32sinTable:
    .float    0.000000000000    ; sin( 2*pi*   0/512 )
    .float    0.012271538286    ; sin( 2*pi*   1/512 )
    .float    0.024541228523    ; sin( 2*pi*   2/512 )
    .float    0.036807222941    ; sin( 2*pi*   3/512 )
    .float    0.049067674327    ; sin( 2*pi*   4/512 )
    .float    0.061320736302    ; sin( 2*pi*   5/512 )
    .float    0.073564563600    ; sin( 2*pi*   6/512 )
    .float    0.085797312344    ; sin( 2*pi*   7/512 )
    .float    0.098017140330    ; sin( 2*pi*   8/512 )
    .float    0.110222207294    ; sin( 2*pi*   9/512 )
    .float    0.122410675199    ; sin( 2*pi*  10/512 )
    .float    0.134580708507    ; sin( 2*pi*  11/512 )
    .float    0.146730474455    ; sin( 2*pi*  12/512 )
    .float    0.158858143334    ; sin( 2*pi*  13/512 )
    .float    0.170961888760    ; sin( 2*pi*  14/512 )
    .float    0.183039887955    ; sin( 2*pi*  15/512 )
    .float    0.195090322016    ; sin( 2*pi*  16/512 )
    .float    0.207111376192    ; sin( 2*pi*  17/512 )
    .float    0.219101240157    ; sin( 2*pi*  18/512 )
    .float    0.231058108281    ; sin( 2*pi*  19/512 )
    .float    0.242980179903    ; sin( 2*pi*  20/512 )
    .float    0.254865659605    ; sin( 2*pi*  21/512 )
    .float    0.266712757475    ; sin( 2*pi*  22/512 )
    .float    0.278519689385    ; sin( 2*pi*  23/512 )
    .float    0.290284677254    ; sin( 2*pi*  24/512 )
    .float    0.302005949319    ; sin( 2*pi*  25/512 )
    .float    0.313681740399    ; sin( 2*pi*  26/512 )
    .float    0.325310292162    ; sin( 2*pi*  27/512 )
    .float    0.336889853392    ; sin( 2*pi*  28/512 )
    .float    0.348418680249    ; sin( 2*pi*  29/512 )
    .float    0.359895036535    ; sin( 2*pi*  30/512 )
    .float    0.371317193952    ; sin( 2*pi*  31/512 )
    .float    0.382683432365    ; sin( 2*pi*  32/512 )
    .float    0.393992040061    ; sin( 2*pi*  33/512 )
    .float    0.405241314005    ; sin( 2*pi*  34/512 )
    .float    0.416429560098    ; sin( 2*pi*  35/512 )
    .float    0.427555093430    ; sin( 2*pi*  36/512 )
    .float    0.438616238539    ; sin( 2*pi*  37/512 )
    .float    0.449611329655    ; sin( 2*pi*  38/512 )
    .float    0.460538710958    ; sin( 2*pi*  39/512 )
    .float    0.471396736826    ; sin( 2*pi*  40/512 )
    .float    0.482183772079    ; sin( 2*pi*  41/512 )
    .float    0.492898192230    ; sin( 2*pi*  42/512 )
    .float    0.503538383726    ; sin( 2*pi*  43/512 )
    .float    0.514102744193    ; sin( 2*pi*  44/512 )
    .float    0.524589682678    ; sin( 2*pi*  45/512 )
    .float    0.534997619887    ; sin( 2*pi*  46/512 )
    .float    0.545324988422    ; sin( 2*pi*  47/512 )
    .float    0.555570233020    ; sin( 2*pi*  48/512 )
    .float    0.565731810784    ; sin( 2*pi*  49/512 )
    .float    0.575808191418    ; sin( 2*pi*  50/512 )
    .float    0.585797857456    ; sin( 2*pi*  51/512 )
    .float    0.595699304492    ; sin( 2*pi*  52/512 )
    .float    0.605511041404    ; sin( 2*pi*  53/512 )
    .float    0.615231590581    ; sin( 2*pi*  54/512 )
    .float    0.624859488142    ; sin( 2*pi*  55/512 )
    .float    0.634393284164    ; sin( 2*pi*  56/512 )
    .float    0.643831542890    ; sin( 2*pi*  57/512 )
    .float    0.653172842954    ; sin( 2*pi*  58/512 )
    .float    0.662415777590    ; sin( 2*pi*  59/512 )
    .float    0.671558954847    ; sin( 2*pi*  60/512 )
    .float    0.680600997795    ; sin( 2*pi*  61/512 )
    .float    0.689540544737    ; sin( 2*pi*  62/512 )
    .float    0.698376249409    ; sin( 2*pi*  63/512 )
    .float    0.707106781187    ; sin( 2*pi*  64/512 )
    .float    0.715730825284    ; sin( 2*pi*  65/512 )
    .float    0.724247082952    ; sin( 2*pi*  66/512 )
    .float    0.732654271672    ; sin( 2*pi*  67/512 )
    .float    0.740951125355    ; sin( 2*pi*  68/512 )
    .float    0.749136394523    ; sin( 2*pi*  69/512 )
    .float    0.757208846507    ; sin( 2*pi*  70/512 )
    .float    0.765167265622    ; sin( 2*pi*  71/512 )
    .float    0.773010453363    ; sin( 2*pi*  72/512 )
    .float    0.780737228572    ; sin( 2*pi*  73/512 )
    .float    0.788346427627    ; sin( 2*pi*  74/512 )
    .float    0.795836904609    ; sin( 2*pi*  75/512 )
    .float    0.803207531481    ; sin( 2*pi*  76/512 )
    .float    0.810457198253    ; sin( 2*pi*  77/512 )
    .float    0.817584813152    ; sin( 2*pi*  78/512 )
    .float    0.824589302785    ; sin( 2*pi*  79/512 )
    .float    0.831469612303    ; sin( 2*pi*  80/512 )
    .float    0.838224705555    ; sin( 2*pi*  81/512 )
    .float    0.844853565250    ; sin( 2*pi*  82/512 )
    .float    0.851355193105    ; sin( 2*pi*  83/512 )
    .float    0.857728610000    ; sin( 2*pi*  84/512 )
    .float    0.863972856122    ; sin( 2*pi*  85/512 )
    .float    0.870086991109    ; sin( 2*pi*  86/512 )
    .float    0.876070094195    ; sin( 2*pi*  87/512 )
    .float    0.881921264348    ; sin( 2*pi*  88/512 )
    .float    0.887639620403    ; sin( 2*pi*  89/512 )
    .float    0.893224301196    ; sin( 2*pi*  90/512 )
    .float    0.898674465694    ; sin( 2*pi*  91/512 )
    .float    0.903989293123    ; sin( 2*pi*  92/512 )
    .float    0.909167983091    ; sin( 2*pi*  93/512 )
    .float    0.914209755704    ; sin( 2*pi*  94/512 )
    .float    0.919113851690    ; sin( 2*pi*  95/512 )
    .float    0.923879532511    ; sin( 2*pi*  96/512 )
    .float    0.928506080473    ; sin( 2*pi*  97/512 )
    .float    0.932992798835    ; sin( 2*pi*  98/512 )
    .float    0.937339011913    ; sin( 2*pi*  99/512 )
    .float    0.941544065183    ; sin( 2*pi* 100/512 )
    .float    0.945607325381    ; sin( 2*pi* 101/512 )
    .float    0.949528180593    ; sin( 2*pi* 102/512 )
    .float    0.953306040354    ; sin( 2*pi* 103/512 )
    .float    0.956940335732    ; sin( 2*pi* 104/512 )
    .float    0.960430519416    ; sin( 2*pi* 105/512 )
    .float    0.963776065795    ; sin( 2*pi* 106/512 )
    .float    0.966976471045    ; sin( 2*pi* 107/512 )
    .float    0.970031253195    ; sin( 2*pi* 108/512 )
    .float    0.972939952206    ; sin( 2*pi* 109/512 )
    .float    0.975702130039    ; sin( 2*pi* 110/512 )
    .float    0.978317370720    ; sin( 2*pi* 111/512 )
    .float    0.980785280403    ; sin( 2*pi* 112/512 )
    .float    0.983105487431    ; sin( 2*pi* 113/512 )
    .float    0.985277642389    ; sin( 2*pi* 114/512 )
    .float    0.987301418158    ; sin( 2*pi* 115/512 )
    .float    0.989176509965    ; sin( 2*pi* 116/512 )
    .float    0.990902635428    ; sin( 2*pi* 117/512 )
    .float    0.992479534599    ; sin( 2*pi* 118/512 )
    .float    0.993906970002    ; sin( 2*pi* 119/512 )
    .float    0.995184726672    ; sin( 2*pi* 120/512 )
    .float    0.996312612183    ; sin( 2*pi* 121/512 )
    .float    0.997290456679    ; sin( 2*pi* 122/512 )
    .float    0.998118112900    ; sin( 2*pi* 123/512 )
    .float    0.998795456205    ; sin( 2*pi* 124/512 )
    .float    0.999322384588    ; sin( 2*pi* 125/512 )
    .float    0.999698818696    ; sin( 2*pi* 126/512 )
    .float    0.999924701839    ; sin( 2*pi* 127/512 )
_FPUcosTable:
_FPU32cosTable:
    .float    1.000000000000    ; sin( 2*pi* 128/512 )
    .float    0.999924701839    ; sin( 2*pi* 129/512 )
    .float    0.999698818696    ; sin( 2*pi* 130/512 )
    .float    0.999322384588    ; sin( 2*pi* 131/512 )
    .float    0.998795456205    ; sin( 2*pi* 132/512 )
    .float    0.998118112900    ; sin( 2*pi* 133/512 )
    .float    0.997290456679    ; sin( 2*pi* 134/512 )
    .float    0.996312612183    ; sin( 2*pi* 135/512 )
    .float    0.995184726672    ; sin( 2*pi* 136/512 )
    .float    0.993906970002    ; sin( 2*pi* 137/512 )
    .float    0.992479534599    ; sin( 2*pi* 138/512 )
    .float    0.990902635428    ; sin( 2*pi* 139/512 )
    .float    0.989176509965    ; sin( 2*pi* 140/512 )
    .float    0.987301418158    ; sin( 2*pi* 141/512 )
    .float    0.985277642389    ; sin( 2*pi* 142/512 )
    .float    0.983105487431    ; sin( 2*pi* 143/512 )
    .float    0.980785280403    ; sin( 2*pi* 144/512 )
    .float    0.978317370720    ; sin( 2*pi* 145/512 )
    .float    0.975702130039    ; sin( 2*pi* 146/512 )
    .float    0.972939952206    ; sin( 2*pi* 147/512 )
    .float    0.970031253195    ; sin( 2*pi* 148/512 )
    .float    0.966976471045    ; sin( 2*pi* 149/512 )
    .float    0.963776065795    ; sin( 2*pi* 150/512 )
    .float    0.960430519416    ; sin( 2*pi* 151/512 )
    .float    0.956940335732    ; sin( 2*pi* 152/512 )
    .float    0.953306040354    ; sin( 2*pi* 153/512 )
    .float    0.949528180593    ; sin( 2*pi* 154/512 )
    .float    0.945607325380    ; sin( 2*pi* 155/512 )
    .float    0.941544065183    ; sin( 2*pi* 156/512 )
    .float    0.937339011913    ; sin( 2*pi* 157/512 )
    .float    0.932992798835    ; sin( 2*pi* 158/512 )
    .float    0.928506080473    ; sin( 2*pi* 159/512 )
    .float    0.923879532511    ; sin( 2*pi* 160/512 )
    .float    0.919113851690    ; sin( 2*pi* 161/512 )
    .float    0.914209755703    ; sin( 2*pi* 162/512 )
    .float    0.909167983090    ; sin( 2*pi* 163/512 )
    .float    0.903989293123    ; sin( 2*pi* 164/512 )
    .float    0.898674465694    ; sin( 2*pi* 165/512 )
    .float    0.893224301195    ; sin( 2*pi* 166/512 )
    .float    0.887639620403    ; sin( 2*pi* 167/512 )
    .float    0.881921264348    ; sin( 2*pi* 168/512 )
    .float    0.876070094195    ; sin( 2*pi* 169/512 )
    .float    0.870086991109    ; sin( 2*pi* 170/512 )
    .float    0.863972856122    ; sin( 2*pi* 171/512 )
    .float    0.857728610000    ; sin( 2*pi* 172/512 )
    .float    0.851355193105    ; sin( 2*pi* 173/512 )
    .float    0.844853565250    ; sin( 2*pi* 174/512 )
    .float    0.838224705555    ; sin( 2*pi* 175/512 )
    .float    0.831469612302    ; sin( 2*pi* 176/512 )
    .float    0.824589302785    ; sin( 2*pi* 177/512 )
    .float    0.817584813152    ; sin( 2*pi* 178/512 )
    .float    0.810457198253    ; sin( 2*pi* 179/512 )
    .float    0.803207531481    ; sin( 2*pi* 180/512 )
    .float    0.795836904609    ; sin( 2*pi* 181/512 )
    .float    0.788346427627    ; sin( 2*pi* 182/512 )
    .float    0.780737228572    ; sin( 2*pi* 183/512 )
    .float    0.773010453363    ; sin( 2*pi* 184/512 )
    .float    0.765167265622    ; sin( 2*pi* 185/512 )
    .float    0.757208846506    ; sin( 2*pi* 186/512 )
    .float    0.749136394523    ; sin( 2*pi* 187/512 )
    .float    0.740951125355    ; sin( 2*pi* 188/512 )
    .float    0.732654271672    ; sin( 2*pi* 189/512 )
    .float    0.724247082951    ; sin( 2*pi* 190/512 )
    .float    0.715730825284    ; sin( 2*pi* 191/512 )
    .float    0.707106781186    ; sin( 2*pi* 192/512 )
    .float    0.698376249409    ; sin( 2*pi* 193/512 )
    .float    0.689540544737    ; sin( 2*pi* 194/512 )
    .float    0.680600997795    ; sin( 2*pi* 195/512 )
    .float    0.671558954847    ; sin( 2*pi* 196/512 )
    .float    0.662415777590    ; sin( 2*pi* 197/512 )
    .float    0.653172842954    ; sin( 2*pi* 198/512 )
    .float    0.643831542890    ; sin( 2*pi* 199/512 )
    .float    0.634393284164    ; sin( 2*pi* 200/512 )
    .float    0.624859488142    ; sin( 2*pi* 201/512 )
    .float    0.615231590580    ; sin( 2*pi* 202/512 )
    .float    0.605511041404    ; sin( 2*pi* 203/512 )
    .float    0.595699304492    ; sin( 2*pi* 204/512 )
    .float    0.585797857456    ; sin( 2*pi* 205/512 )
    .float    0.575808191418    ; sin( 2*pi* 206/512 )
    .float    0.565731810783    ; sin( 2*pi* 207/512 )
    .float    0.555570233019    ; sin( 2*pi* 208/512 )
    .float    0.545324988422    ; sin( 2*pi* 209/512 )
    .float    0.534997619887    ; sin( 2*pi* 210/512 )
    .float    0.524589682678    ; sin( 2*pi* 211/512 )
    .float    0.514102744193    ; sin( 2*pi* 212/512 )
    .float    0.503538383726    ; sin( 2*pi* 213/512 )
    .float    0.492898192230    ; sin( 2*pi* 214/512 )
    .float    0.482183772079    ; sin( 2*pi* 215/512 )
    .float    0.471396736826    ; sin( 2*pi* 216/512 )
    .float    0.460538710958    ; sin( 2*pi* 217/512 )
    .float    0.449611329654    ; sin( 2*pi* 218/512 )
    .float    0.438616238538    ; sin( 2*pi* 219/512 )
    .float    0.427555093430    ; sin( 2*pi* 220/512 )
    .float    0.416429560097    ; sin( 2*pi* 221/512 )
    .float    0.405241314005    ; sin( 2*pi* 222/512 )
    .float    0.393992040061    ; sin( 2*pi* 223/512 )
    .float    0.382683432365    ; sin( 2*pi* 224/512 )
    .float    0.371317193952    ; sin( 2*pi* 225/512 )
    .float    0.359895036535    ; sin( 2*pi* 226/512 )
    .float    0.348418680249    ; sin( 2*pi* 227/512 )
    .float    0.336889853392    ; sin( 2*pi* 228/512 )
    .float    0.325310292162    ; sin( 2*pi* 229/512 )
    .float    0.313681740399    ; sin( 2*pi* 230/512 )
    .float    0.302005949319    ; sin( 2*pi* 231/512 )
    .float    0.290284677254    ; sin( 2*pi* 232/512 )
    .float    0.278519689385    ; sin( 2*pi* 233/512 )
    .float    0.266712757475    ; sin( 2*pi* 234/512 )
    .float    0.254865659604    ; sin( 2*pi* 235/512 )
    .float    0.242980179903    ; sin( 2*pi* 236/512 )
    .float    0.231058108280    ; sin( 2*pi* 237/512 )
    .float    0.219101240157    ; sin( 2*pi* 238/512 )
    .float    0.207111376192    ; sin( 2*pi* 239/512 )
    .float    0.195090322016    ; sin( 2*pi* 240/512 )
    .float    0.183039887955    ; sin( 2*pi* 241/512 )
    .float    0.170961888760    ; sin( 2*pi* 242/512 )
    .float    0.158858143334    ; sin( 2*pi* 243/512 )
    .float    0.146730474455    ; sin( 2*pi* 244/512 )
    .float    0.134580708507    ; sin( 2*pi* 245/512 )
    .float    0.122410675199    ; sin( 2*pi* 246/512 )
    .float    0.110222207294    ; sin( 2*pi* 247/512 )
    .float    0.098017140329    ; sin( 2*pi* 248/512 )
    .float    0.085797312344    ; sin( 2*pi* 249/512 )
    .float    0.073564563599    ; sin( 2*pi* 250/512 )
    .float    0.061320736302    ; sin( 2*pi* 251/512 )
    .float    0.049067674327    ; sin( 2*pi* 252/512 )
    .float    0.036807222941    ; sin( 2*pi* 253/512 )
    .float    0.024541228523    ; sin( 2*pi* 254/512 )
    .float    0.012271538286    ; sin( 2*pi* 255/512 )
    .float   -0.000000000000    ; sin( 2*pi* 256/512 )
    .float   -0.012271538286    ; sin( 2*pi* 257/512 )
    .float   -0.024541228523    ; sin( 2*pi* 258/512 )
    .float   -0.036807222942    ; sin( 2*pi* 259/512 )
    .float   -0.049067674328    ; sin( 2*pi* 260/512 )
    .float   -0.061320736302    ; sin( 2*pi* 261/512 )
    .float   -0.073564563600    ; sin( 2*pi* 262/512 )
    .float   -0.085797312345    ; sin( 2*pi* 263/512 )
    .float   -0.098017140330    ; sin( 2*pi* 264/512 )
    .float   -0.110222207294    ; sin( 2*pi* 265/512 )
    .float   -0.122410675199    ; sin( 2*pi* 266/512 )
    .float   -0.134580708507    ; sin( 2*pi* 267/512 )
    .float   -0.146730474456    ; sin( 2*pi* 268/512 )
    .float   -0.158858143334    ; sin( 2*pi* 269/512 )
    .float   -0.170961888761    ; sin( 2*pi* 270/512 )
    .float   -0.183039887955    ; sin( 2*pi* 271/512 )
    .float   -0.195090322016    ; sin( 2*pi* 272/512 )
    .float   -0.207111376192    ; sin( 2*pi* 273/512 )
    .float   -0.219101240157    ; sin( 2*pi* 274/512 )
    .float   -0.231058108281    ; sin( 2*pi* 275/512 )
    .float   -0.242980179903    ; sin( 2*pi* 276/512 )
    .float   -0.254865659605    ; sin( 2*pi* 277/512 )
    .float   -0.266712757475    ; sin( 2*pi* 278/512 )
    .float   -0.278519689385    ; sin( 2*pi* 279/512 )
    .float   -0.290284677255    ; sin( 2*pi* 280/512 )
    .float   -0.302005949319    ; sin( 2*pi* 281/512 )
    .float   -0.313681740399    ; sin( 2*pi* 282/512 )
    .float   -0.325310292162    ; sin( 2*pi* 283/512 )
    .float   -0.336889853392    ; sin( 2*pi* 284/512 )
    .float   -0.348418680250    ; sin( 2*pi* 285/512 )
    .float   -0.359895036535    ; sin( 2*pi* 286/512 )
    .float   -0.371317193952    ; sin( 2*pi* 287/512 )
    .float   -0.382683432365    ; sin( 2*pi* 288/512 )
    .float   -0.393992040061    ; sin( 2*pi* 289/512 )
    .float   -0.405241314005    ; sin( 2*pi* 290/512 )
    .float   -0.416429560098    ; sin( 2*pi* 291/512 )
    .float   -0.427555093430    ; sin( 2*pi* 292/512 )
    .float   -0.438616238539    ; sin( 2*pi* 293/512 )
    .float   -0.449611329655    ; sin( 2*pi* 294/512 )
    .float   -0.460538710958    ; sin( 2*pi* 295/512 )
    .float   -0.471396736826    ; sin( 2*pi* 296/512 )
    .float   -0.482183772079    ; sin( 2*pi* 297/512 )
    .float   -0.492898192230    ; sin( 2*pi* 298/512 )
    .float   -0.503538383726    ; sin( 2*pi* 299/512 )
    .float   -0.514102744193    ; sin( 2*pi* 300/512 )
    .float   -0.524589682679    ; sin( 2*pi* 301/512 )
    .float   -0.534997619887    ; sin( 2*pi* 302/512 )
    .float   -0.545324988422    ; sin( 2*pi* 303/512 )
    .float   -0.555570233020    ; sin( 2*pi* 304/512 )
    .float   -0.565731810784    ; sin( 2*pi* 305/512 )
    .float   -0.575808191418    ; sin( 2*pi* 306/512 )
    .float   -0.585797857457    ; sin( 2*pi* 307/512 )
    .float   -0.595699304493    ; sin( 2*pi* 308/512 )
    .float   -0.605511041405    ; sin( 2*pi* 309/512 )
    .float   -0.615231590581    ; sin( 2*pi* 310/512 )
    .float   -0.624859488143    ; sin( 2*pi* 311/512 )
    .float   -0.634393284164    ; sin( 2*pi* 312/512 )
    .float   -0.643831542890    ; sin( 2*pi* 313/512 )
    .float   -0.653172842954    ; sin( 2*pi* 314/512 )
    .float   -0.662415777590    ; sin( 2*pi* 315/512 )
    .float   -0.671558954847    ; sin( 2*pi* 316/512 )
    .float   -0.680600997796    ; sin( 2*pi* 317/512 )
    .float   -0.689540544737    ; sin( 2*pi* 318/512 )
    .float   -0.698376249409    ; sin( 2*pi* 319/512 )
    .float   -0.707106781187    ; sin( 2*pi* 320/512 )
    .float   -0.715730825284    ; sin( 2*pi* 321/512 )
    .float   -0.724247082952    ; sin( 2*pi* 322/512 )
    .float   -0.732654271673    ; sin( 2*pi* 323/512 )
    .float   -0.740951125355    ; sin( 2*pi* 324/512 )
    .float   -0.749136394524    ; sin( 2*pi* 325/512 )
    .float   -0.757208846507    ; sin( 2*pi* 326/512 )
    .float   -0.765167265623    ; sin( 2*pi* 327/512 )
    .float   -0.773010453363    ; sin( 2*pi* 328/512 )
    .float   -0.780737228572    ; sin( 2*pi* 329/512 )
    .float   -0.788346427627    ; sin( 2*pi* 330/512 )
    .float   -0.795836904609    ; sin( 2*pi* 331/512 )
    .float   -0.803207531481    ; sin( 2*pi* 332/512 )
    .float   -0.810457198253    ; sin( 2*pi* 333/512 )
    .float   -0.817584813152    ; sin( 2*pi* 334/512 )
    .float   -0.824589302785    ; sin( 2*pi* 335/512 )
    .float   -0.831469612303    ; sin( 2*pi* 336/512 )
    .float   -0.838224705555    ; sin( 2*pi* 337/512 )
    .float   -0.844853565250    ; sin( 2*pi* 338/512 )
    .float   -0.851355193105    ; sin( 2*pi* 339/512 )
    .float   -0.857728610000    ; sin( 2*pi* 340/512 )
    .float   -0.863972856122    ; sin( 2*pi* 341/512 )
    .float   -0.870086991109    ; sin( 2*pi* 342/512 )
    .float   -0.876070094196    ; sin( 2*pi* 343/512 )
    .float   -0.881921264348    ; sin( 2*pi* 344/512 )
    .float   -0.887639620403    ; sin( 2*pi* 345/512 )
    .float   -0.893224301196    ; sin( 2*pi* 346/512 )
    .float   -0.898674465694    ; sin( 2*pi* 347/512 )
    .float   -0.903989293124    ; sin( 2*pi* 348/512 )
    .float   -0.909167983091    ; sin( 2*pi* 349/512 )
    .float   -0.914209755704    ; sin( 2*pi* 350/512 )
    .float   -0.919113851690    ; sin( 2*pi* 351/512 )
    .float   -0.923879532511    ; sin( 2*pi* 352/512 )
    .float   -0.928506080473    ; sin( 2*pi* 353/512 )
    .float   -0.932992798835    ; sin( 2*pi* 354/512 )
    .float   -0.937339011913    ; sin( 2*pi* 355/512 )
    .float   -0.941544065183    ; sin( 2*pi* 356/512 )
    .float   -0.945607325381    ; sin( 2*pi* 357/512 )
    .float   -0.949528180593    ; sin( 2*pi* 358/512 )
    .float   -0.953306040354    ; sin( 2*pi* 359/512 )
    .float   -0.956940335732    ; sin( 2*pi* 360/512 )
    .float   -0.960430519416    ; sin( 2*pi* 361/512 )
    .float   -0.963776065796    ; sin( 2*pi* 362/512 )
    .float   -0.966976471045    ; sin( 2*pi* 363/512 )
    .float   -0.970031253195    ; sin( 2*pi* 364/512 )
    .float   -0.972939952206    ; sin( 2*pi* 365/512 )
    .float   -0.975702130039    ; sin( 2*pi* 366/512 )
    .float   -0.978317370720    ; sin( 2*pi* 367/512 )
    .float   -0.980785280403    ; sin( 2*pi* 368/512 )
    .float   -0.983105487431    ; sin( 2*pi* 369/512 )
    .float   -0.985277642389    ; sin( 2*pi* 370/512 )
    .float   -0.987301418158    ; sin( 2*pi* 371/512 )
    .float   -0.989176509965    ; sin( 2*pi* 372/512 )
    .float   -0.990902635428    ; sin( 2*pi* 373/512 )
    .float   -0.992479534599    ; sin( 2*pi* 374/512 )
    .float   -0.993906970002    ; sin( 2*pi* 375/512 )
    .float   -0.995184726672    ; sin( 2*pi* 376/512 )
    .float   -0.996312612183    ; sin( 2*pi* 377/512 )
    .float   -0.997290456679    ; sin( 2*pi* 378/512 )
    .float   -0.998118112900    ; sin( 2*pi* 379/512 )
    .float   -0.998795456205    ; sin( 2*pi* 380/512 )
    .float   -0.999322384588    ; sin( 2*pi* 381/512 )
    .float   -0.999698818696    ; sin( 2*pi* 382/512 )
    .float   -0.999924701839    ; sin( 2*pi* 383/512 )
    .float   -1.000000000000    ; sin( 2*pi* 384/512 )
    .float   -0.999924701839    ; sin( 2*pi* 385/512 )
    .float   -0.999698818696    ; sin( 2*pi* 386/512 )
    .float   -0.999322384588    ; sin( 2*pi* 387/512 )
    .float   -0.998795456205    ; sin( 2*pi* 388/512 )
    .float   -0.998118112900    ; sin( 2*pi* 389/512 )
    .float   -0.997290456679    ; sin( 2*pi* 390/512 )
    .float   -0.996312612183    ; sin( 2*pi* 391/512 )
    .float   -0.995184726672    ; sin( 2*pi* 392/512 )
    .float   -0.993906970002    ; sin( 2*pi* 393/512 )
    .float   -0.992479534599    ; sin( 2*pi* 394/512 )
    .float   -0.990902635428    ; sin( 2*pi* 395/512 )
    .float   -0.989176509965    ; sin( 2*pi* 396/512 )
    .float   -0.987301418158    ; sin( 2*pi* 397/512 )
    .float   -0.985277642389    ; sin( 2*pi* 398/512 )
    .float   -0.983105487431    ; sin( 2*pi* 399/512 )
    .float   -0.980785280403    ; sin( 2*pi* 400/512 )
    .float   -0.978317370720    ; sin( 2*pi* 401/512 )
    .float   -0.975702130038    ; sin( 2*pi* 402/512 )
    .float   -0.972939952205    ; sin( 2*pi* 403/512 )
    .float   -0.970031253194    ; sin( 2*pi* 404/512 )
    .float   -0.966976471045    ; sin( 2*pi* 405/512 )
    .float   -0.963776065795    ; sin( 2*pi* 406/512 )
    .float   -0.960430519415    ; sin( 2*pi* 407/512 )
    .float   -0.956940335732    ; sin( 2*pi* 408/512 )
    .float   -0.953306040354    ; sin( 2*pi* 409/512 )
    .float   -0.949528180593    ; sin( 2*pi* 410/512 )
    .float   -0.945607325380    ; sin( 2*pi* 411/512 )
    .float   -0.941544065183    ; sin( 2*pi* 412/512 )
    .float   -0.937339011912    ; sin( 2*pi* 413/512 )
    .float   -0.932992798835    ; sin( 2*pi* 414/512 )
    .float   -0.928506080473    ; sin( 2*pi* 415/512 )
    .float   -0.923879532511    ; sin( 2*pi* 416/512 )
    .float   -0.919113851690    ; sin( 2*pi* 417/512 )
    .float   -0.914209755703    ; sin( 2*pi* 418/512 )
    .float   -0.909167983090    ; sin( 2*pi* 419/512 )
    .float   -0.903989293123    ; sin( 2*pi* 420/512 )
    .float   -0.898674465694    ; sin( 2*pi* 421/512 )
    .float   -0.893224301195    ; sin( 2*pi* 422/512 )
    .float   -0.887639620403    ; sin( 2*pi* 423/512 )
    .float   -0.881921264348    ; sin( 2*pi* 424/512 )
    .float   -0.876070094195    ; sin( 2*pi* 425/512 )
    .float   -0.870086991109    ; sin( 2*pi* 426/512 )
    .float   -0.863972856121    ; sin( 2*pi* 427/512 )
    .float   -0.857728610000    ; sin( 2*pi* 428/512 )
    .float   -0.851355193105    ; sin( 2*pi* 429/512 )
    .float   -0.844853565250    ; sin( 2*pi* 430/512 )
    .float   -0.838224705555    ; sin( 2*pi* 431/512 )
    .float   -0.831469612302    ; sin( 2*pi* 432/512 )
    .float   -0.824589302785    ; sin( 2*pi* 433/512 )
    .float   -0.817584813151    ; sin( 2*pi* 434/512 )
    .float   -0.810457198252    ; sin( 2*pi* 435/512 )
    .float   -0.803207531480    ; sin( 2*pi* 436/512 )
    .float   -0.795836904609    ; sin( 2*pi* 437/512 )
    .float   -0.788346427626    ; sin( 2*pi* 438/512 )
    .float   -0.780737228572    ; sin( 2*pi* 439/512 )
    .float   -0.773010453363    ; sin( 2*pi* 440/512 )
    .float   -0.765167265622    ; sin( 2*pi* 441/512 )
    .float   -0.757208846506    ; sin( 2*pi* 442/512 )
    .float   -0.749136394523    ; sin( 2*pi* 443/512 )
    .float   -0.740951125355    ; sin( 2*pi* 444/512 )
    .float   -0.732654271672    ; sin( 2*pi* 445/512 )
    .float   -0.724247082951    ; sin( 2*pi* 446/512 )
    .float   -0.715730825284    ; sin( 2*pi* 447/512 )
    .float   -0.707106781186    ; sin( 2*pi* 448/512 )
    .float   -0.698376249409    ; sin( 2*pi* 449/512 )
    .float   -0.689540544737    ; sin( 2*pi* 450/512 )
    .float   -0.680600997795    ; sin( 2*pi* 451/512 )
    .float   -0.671558954847    ; sin( 2*pi* 452/512 )
    .float   -0.662415777590    ; sin( 2*pi* 453/512 )
    .float   -0.653172842953    ; sin( 2*pi* 454/512 )
    .float   -0.643831542890    ; sin( 2*pi* 455/512 )
    .float   -0.634393284163    ; sin( 2*pi* 456/512 )
    .float   -0.624859488142    ; sin( 2*pi* 457/512 )
    .float   -0.615231590580    ; sin( 2*pi* 458/512 )
    .float   -0.605511041404    ; sin( 2*pi* 459/512 )
    .float   -0.595699304492    ; sin( 2*pi* 460/512 )
    .float   -0.585797857456    ; sin( 2*pi* 461/512 )
    .float   -0.575808191418    ; sin( 2*pi* 462/512 )
    .float   -0.565731810783    ; sin( 2*pi* 463/512 )
    .float   -0.555570233019    ; sin( 2*pi* 464/512 )
    .float   -0.545324988422    ; sin( 2*pi* 465/512 )
    .float   -0.534997619887    ; sin( 2*pi* 466/512 )
    .float   -0.524589682678    ; sin( 2*pi* 467/512 )
    .float   -0.514102744193    ; sin( 2*pi* 468/512 )
    .float   -0.503538383725    ; sin( 2*pi* 469/512 )
    .float   -0.492898192229    ; sin( 2*pi* 470/512 )
    .float   -0.482183772079    ; sin( 2*pi* 471/512 )
    .float   -0.471396736826    ; sin( 2*pi* 472/512 )
    .float   -0.460538710958    ; sin( 2*pi* 473/512 )
    .float   -0.449611329654    ; sin( 2*pi* 474/512 )
    .float   -0.438616238538    ; sin( 2*pi* 475/512 )
    .float   -0.427555093430    ; sin( 2*pi* 476/512 )
    .float   -0.416429560097    ; sin( 2*pi* 477/512 )
    .float   -0.405241314005    ; sin( 2*pi* 478/512 )
    .float   -0.393992040061    ; sin( 2*pi* 479/512 )
    .float   -0.382683432365    ; sin( 2*pi* 480/512 )
    .float   -0.371317193951    ; sin( 2*pi* 481/512 )
    .float   -0.359895036535    ; sin( 2*pi* 482/512 )
    .float   -0.348418680249    ; sin( 2*pi* 483/512 )
    .float   -0.336889853392    ; sin( 2*pi* 484/512 )
    .float   -0.325310292162    ; sin( 2*pi* 485/512 )
    .float   -0.313681740399    ; sin( 2*pi* 486/512 )
    .float   -0.302005949319    ; sin( 2*pi* 487/512 )
    .float   -0.290284677254    ; sin( 2*pi* 488/512 )
    .float   -0.278519689385    ; sin( 2*pi* 489/512 )
    .float   -0.266712757475    ; sin( 2*pi* 490/512 )
    .float   -0.254865659604    ; sin( 2*pi* 491/512 )
    .float   -0.242980179903    ; sin( 2*pi* 492/512 )
    .float   -0.231058108280    ; sin( 2*pi* 493/512 )
    .float   -0.219101240156    ; sin( 2*pi* 494/512 )
    .float   -0.207111376192    ; sin( 2*pi* 495/512 )
    .float   -0.195090322016    ; sin( 2*pi* 496/512 )
    .float   -0.183039887955    ; sin( 2*pi* 497/512 )
    .float   -0.170961888760    ; sin( 2*pi* 498/512 )
    .float   -0.158858143333    ; sin( 2*pi* 499/512 )
    .float   -0.146730474455    ; sin( 2*pi* 500/512 )
    .float   -0.134580708507    ; sin( 2*pi* 501/512 )
    .float   -0.122410675199    ; sin( 2*pi* 502/512 )
    .float   -0.110222207293    ; sin( 2*pi* 503/512 )
    .float   -0.098017140329    ; sin( 2*pi* 504/512 )
    .float   -0.085797312344    ; sin( 2*pi* 505/512 )
    .float   -0.073564563599    ; sin( 2*pi* 506/512 )
    .float   -0.061320736302    ; sin( 2*pi* 507/512 )
    .float   -0.049067674327    ; sin( 2*pi* 508/512 )
    .float   -0.036807222941    ; sin( 2*pi* 509/512 )
    .float   -0.024541228523    ; sin( 2*pi* 510/512 )
    .float   -0.012271538285    ; sin( 2*pi* 511/512 )
_FPU32sinTableEnd:
_FPUsinTableEnd:
    .float    0.000000000000    ; sin( 2*pi* 512/512 )
    .float    0.012271538286    ; sin( 2*pi* 513/512 )
    .float    0.024541228523    ; sin( 2*pi* 514/512 )
    .float    0.036807222942    ; sin( 2*pi* 515/512 )
    .float    0.049067674328    ; sin( 2*pi* 516/512 )
    .float    0.061320736303    ; sin( 2*pi* 517/512 )
    .float    0.073564563600    ; sin( 2*pi* 518/512 )
    .float    0.085797312345    ; sin( 2*pi* 519/512 )
    .float    0.098017140330    ; sin( 2*pi* 520/512 )
    .float    0.110222207294    ; sin( 2*pi* 521/512 )
    .float    0.122410675200    ; sin( 2*pi* 522/512 )
    .float    0.134580708508    ; sin( 2*pi* 523/512 )
    .float    0.146730474456    ; sin( 2*pi* 524/512 )
    .float    0.158858143334    ; sin( 2*pi* 525/512 )
    .float    0.170961888761    ; sin( 2*pi* 526/512 )
    .float    0.183039887956    ; sin( 2*pi* 527/512 )
    .float    0.195090322017    ; sin( 2*pi* 528/512 )
    .float    0.207111376193    ; sin( 2*pi* 529/512 )
    .float    0.219101240157    ; sin( 2*pi* 530/512 )
    .float    0.231058108281    ; sin( 2*pi* 531/512 )
    .float    0.242980179904    ; sin( 2*pi* 532/512 )
    .float    0.254865659605    ; sin( 2*pi* 533/512 )
    .float    0.266712757475    ; sin( 2*pi* 534/512 )
    .float    0.278519689385    ; sin( 2*pi* 535/512 )
    .float    0.290284677255    ; sin( 2*pi* 536/512 )
    .float    0.302005949320    ; sin( 2*pi* 537/512 )
    .float    0.313681740399    ; sin( 2*pi* 538/512 )
    .float    0.325310292163    ; sin( 2*pi* 539/512 )
    .float    0.336889853393    ; sin( 2*pi* 540/512 )
    .float    0.348418680250    ; sin( 2*pi* 541/512 )
    .float    0.359895036535    ; sin( 2*pi* 542/512 )
    .float    0.371317193952    ; sin( 2*pi* 543/512 )
    .float    0.382683432365    ; sin( 2*pi* 544/512 )
    .float    0.393992040061    ; sin( 2*pi* 545/512 )
    .float    0.405241314005    ; sin( 2*pi* 546/512 )
    .float    0.416429560098    ; sin( 2*pi* 547/512 )
    .float    0.427555093431    ; sin( 2*pi* 548/512 )
    .float    0.438616238539    ; sin( 2*pi* 549/512 )
    .float    0.449611329655    ; sin( 2*pi* 550/512 )
    .float    0.460538710959    ; sin( 2*pi* 551/512 )
    .float    0.471396736826    ; sin( 2*pi* 552/512 )
    .float    0.482183772080    ; sin( 2*pi* 553/512 )
    .float    0.492898192230    ; sin( 2*pi* 554/512 )
    .float    0.503538383726    ; sin( 2*pi* 555/512 )
    .float    0.514102744194    ; sin( 2*pi* 556/512 )
    .float    0.524589682679    ; sin( 2*pi* 557/512 )
    .float    0.534997619887    ; sin( 2*pi* 558/512 )
    .float    0.545324988422    ; sin( 2*pi* 559/512 )
    .float    0.555570233020    ; sin( 2*pi* 560/512 )
    .float    0.565731810784    ; sin( 2*pi* 561/512 )
    .float    0.575808191418    ; sin( 2*pi* 562/512 )
    .float    0.585797857457    ; sin( 2*pi* 563/512 )
    .float    0.595699304493    ; sin( 2*pi* 564/512 )
    .float    0.605511041405    ; sin( 2*pi* 565/512 )
    .float    0.615231590581    ; sin( 2*pi* 566/512 )
    .float    0.624859488143    ; sin( 2*pi* 567/512 )
    .float    0.634393284164    ; sin( 2*pi* 568/512 )
    .float    0.643831542890    ; sin( 2*pi* 569/512 )
    .float    0.653172842954    ; sin( 2*pi* 570/512 )
    .float    0.662415777591    ; sin( 2*pi* 571/512 )
    .float    0.671558954847    ; sin( 2*pi* 572/512 )
    .float    0.680600997796    ; sin( 2*pi* 573/512 )
    .float    0.689540544737    ; sin( 2*pi* 574/512 )
    .float    0.698376249409    ; sin( 2*pi* 575/512 )
    .float    0.707106781187    ; sin( 2*pi* 576/512 )
    .float    0.715730825284    ; sin( 2*pi* 577/512 )
    .float    0.724247082952    ; sin( 2*pi* 578/512 )
    .float    0.732654271673    ; sin( 2*pi* 579/512 )
    .float    0.740951125355    ; sin( 2*pi* 580/512 )
    .float    0.749136394524    ; sin( 2*pi* 581/512 )
    .float    0.757208846507    ; sin( 2*pi* 582/512 )
    .float    0.765167265623    ; sin( 2*pi* 583/512 )
    .float    0.773010453363    ; sin( 2*pi* 584/512 )
    .float    0.780737228572    ; sin( 2*pi* 585/512 )
    .float    0.788346427627    ; sin( 2*pi* 586/512 )
    .float    0.795836904609    ; sin( 2*pi* 587/512 )
    .float    0.803207531481    ; sin( 2*pi* 588/512 )
    .float    0.810457198253    ; sin( 2*pi* 589/512 )
    .float    0.817584813152    ; sin( 2*pi* 590/512 )
    .float    0.824589302785    ; sin( 2*pi* 591/512 )
    .float    0.831469612303    ; sin( 2*pi* 592/512 )
    .float    0.838224705555    ; sin( 2*pi* 593/512 )
    .float    0.844853565250    ; sin( 2*pi* 594/512 )
    .float    0.851355193106    ; sin( 2*pi* 595/512 )
    .float    0.857728610001    ; sin( 2*pi* 596/512 )
    .float    0.863972856122    ; sin( 2*pi* 597/512 )
    .float    0.870086991109    ; sin( 2*pi* 598/512 )
    .float    0.876070094196    ; sin( 2*pi* 599/512 )
    .float    0.881921264349    ; sin( 2*pi* 600/512 )
    .float    0.887639620403    ; sin( 2*pi* 601/512 )
    .float    0.893224301196    ; sin( 2*pi* 602/512 )
    .float    0.898674465694    ; sin( 2*pi* 603/512 )
    .float    0.903989293124    ; sin( 2*pi* 604/512 )
    .float    0.909167983091    ; sin( 2*pi* 605/512 )
    .float    0.914209755704    ; sin( 2*pi* 606/512 )
    .float    0.919113851690    ; sin( 2*pi* 607/512 )
    .float    0.923879532511    ; sin( 2*pi* 608/512 )
    .float    0.928506080473    ; sin( 2*pi* 609/512 )
    .float    0.932992798835    ; sin( 2*pi* 610/512 )
    .float    0.937339011913    ; sin( 2*pi* 611/512 )
    .float    0.941544065183    ; sin( 2*pi* 612/512 )
    .float    0.945607325381    ; sin( 2*pi* 613/512 )
    .float    0.949528180593    ; sin( 2*pi* 614/512 )
    .float    0.953306040354    ; sin( 2*pi* 615/512 )
    .float    0.956940335732    ; sin( 2*pi* 616/512 )
    .float    0.960430519416    ; sin( 2*pi* 617/512 )
    .float    0.963776065796    ; sin( 2*pi* 618/512 )
    .float    0.966976471045    ; sin( 2*pi* 619/512 )
    .float    0.970031253195    ; sin( 2*pi* 620/512 )
    .float    0.972939952206    ; sin( 2*pi* 621/512 )
    .float    0.975702130039    ; sin( 2*pi* 622/512 )
    .float    0.978317370720    ; sin( 2*pi* 623/512 )
    .float    0.980785280403    ; sin( 2*pi* 624/512 )
    .float    0.983105487431    ; sin( 2*pi* 625/512 )
    .float    0.985277642389    ; sin( 2*pi* 626/512 )
    .float    0.987301418158    ; sin( 2*pi* 627/512 )
    .float    0.989176509965    ; sin( 2*pi* 628/512 )
    .float    0.990902635428    ; sin( 2*pi* 629/512 )
    .float    0.992479534599    ; sin( 2*pi* 630/512 )
    .float    0.993906970002    ; sin( 2*pi* 631/512 )
    .float    0.995184726672    ; sin( 2*pi* 632/512 )
    .float    0.996312612183    ; sin( 2*pi* 633/512 )
    .float    0.997290456679    ; sin( 2*pi* 634/512 )
    .float    0.998118112900    ; sin( 2*pi* 635/512 )
    .float    0.998795456205    ; sin( 2*pi* 636/512 )
    .float    0.999322384588    ; sin( 2*pi* 637/512 )
    .float    0.999698818696    ; sin( 2*pi* 638/512 )
    .float    0.999924701839    ; sin( 2*pi* 639/512 )
    .float    1.000000000000    ; sin( 2*pi* 640/512 )
_FPU32cosTableEnd:
_FPUcosTableEnd:

;;==========================================================================
;;FPUatan2 Function Table, Size Of Table = 388x16
;;==========================================================================
    .if __TI_EABI__
    .asg    FPUatan2HalfPITable, _FPUatan2HalfPITable
    .asg    FPUatan2Table, _FPUatan2Table
    .asg    FPUatan2TableEnd, _FPUatan2TableEnd
    
    .asg    FPU32atan2HalfPITable, _FPU32atan2HalfPITable
    .asg    FPU32atan2Table, _FPU32atan2Table
    .asg    FPU32atan2TableEnd, _FPU32atan2TableEnd
    
    .endif
    .def    _FPUatan2HalfPITable
    .def    _FPUatan2Table
    .def    _FPUatan2TableEnd
    
    .def    _FPU32atan2HalfPITable
    .def    _FPU32atan2Table
    .def    _FPU32atan2TableEnd

    .sect    "FPUmathTables"

_FPUatan2HalfPITable:
_FPU32atan2HalfPITable:
    .float   2.0    ; 2.0
    .float   1.570796327    ; PI/2

_FPUatan2Table:
_FPU32atan2Table:
    .float    0.000000000000    ;   0 x0 =   0.000000000000 -> a0 =   0.000000000000
    .float    1.000040679675    ;   0 x1 =   0.007812500000 -> a1 =   1.000040679675
    .float   -0.007811069750    ;   0 x2 =   0.015625000000 -> a2 =  -0.007811069750
    .float   -0.000003807022    ;   1 x0 =   0.015625000000 -> a0 =  -0.000003807022
    .float    1.000528067772    ;   1 x1 =   0.023437500000 -> a1 =   1.000528067772
    .float   -0.023410345493    ;   1 x2 =   0.031250000000 -> a2 =  -0.023410345493
    .float   -0.000018968310    ;   2 x0 =   0.031250000000 -> a0 =  -0.000018968310
    .float    1.001498568106    ;   2 x1 =   0.039062500000 -> a1 =   1.001498568106
    .float   -0.038941197075    ;   2 x2 =   0.046875000000 -> a2 =  -0.038941197075
    .float   -0.000052831927    ;   3 x0 =   0.046875000000 -> a0 =  -0.000052831927
    .float    1.002943680965    ;   3 x1 =   0.054687500000 -> a1 =   1.002943680965
    .float   -0.054358563160    ;   3 x2 =   0.062500000000 -> a2 =  -0.054358563160
    .float   -0.000112417996    ;   4 x0 =   0.062500000000 -> a0 =  -0.000112417996
    .float    1.004850785788    ;   4 x1 =   0.070312500000 -> a1 =   1.004850785788
    .float   -0.069618206649    ;   4 x2 =   0.078125000000 -> a2 =  -0.069618206649
    .float   -0.000204295885    ;   5 x0 =   0.078125000000 -> a0 =  -0.000204295885
    .float    1.007203293243    ;   5 x1 =   0.085937500000 -> a1 =   1.007203293243
    .float   -0.084677028723    ;   5 x2 =   0.093750000000 -> a2 =  -0.084677028723
    .float   -0.000334469493    ;   6 x0 =   0.093750000000 -> a0 =  -0.000334469493
    .float    1.009980843501    ;   6 x1 =   0.101562500000 -> a1 =   1.009980843501
    .float   -0.099493367628    ;   6 x2 =   0.109375000000 -> a2 =  -0.099493367628
    .float   -0.000508272606    ;   7 x0 =   0.109375000000 -> a0 =  -0.000508272606
    .float    1.013159547023    ;   7 x1 =   0.117187500000 -> a1 =   1.013159547023
    .float   -0.114027278430    ;   7 x2 =   0.125000000000 -> a2 =  -0.114027278430
    .float   -0.000730276035    ;   8 x0 =   0.125000000000 -> a0 =  -0.000730276035
    .float    1.016712263449    ;   8 x1 =   0.132812500000 -> a1 =   1.016712263449
    .float   -0.128240790343    ;   8 x2 =   0.140625000000 -> a2 =  -0.128240790343
    .float   -0.001004207980    ;   9 x0 =   0.140625000000 -> a0 =  -0.001004207980
    .float    1.020608913557    ;   9 x1 =   0.148437500000 -> a1 =   1.020608913557
    .float   -0.142098138715    ;   9 x2 =   0.156250000000 -> a2 =  -0.142098138715
    .float   -0.001332888717    ;  10 x0 =   0.156250000000 -> a0 =  -0.001332888717
    .float    1.024816818801    ;  10 x1 =   0.164062500000 -> a1 =   1.024816818801
    .float   -0.155565969259    ;  10 x2 =   0.171875000000 -> a2 =  -0.155565969259
    .float   -0.001718180431    ;  11 x0 =   0.171875000000 -> a0 =  -0.001718180431
    .float    1.029301062569    ;  11 x1 =   0.179687500000 -> a1 =   1.029301062569
    .float   -0.168613512667    ;  11 x2 =   0.187500000000 -> a2 =  -0.168613512667
    .float   -0.002160952612    ;  12 x0 =   0.187500000000 -> a0 =  -0.002160952612
    .float    1.034024867135    ;  12 x1 =   0.195312500000 -> a1 =   1.034024867135
    .float   -0.181212728329    ;  12 x2 =   0.203125000000 -> a2 =  -0.181212728329
    .float   -0.002661063159    ;  13 x0 =   0.203125000000 -> a0 =  -0.002661063159
    .float    1.038949980222    ;  13 x1 =   0.210937500000 -> a1 =   1.038949980222
    .float   -0.193338416410    ;  13 x2 =   0.218750000000 -> a2 =  -0.193338416410
    .float   -0.003217354977    ;  14 x0 =   0.218750000000 -> a0 =  -0.003217354977
    .float    1.044037065160    ;  14 x1 =   0.226562500000 -> a1 =   1.044037065160
    .float   -0.204968298146    ;  14 x2 =   0.234375000000 -> a2 =  -0.204968298146
    .float   -0.003827667546    ;  15 x0 =   0.234375000000 -> a0 =  -0.003827667546
    .float    1.049246088868    ;  15 x1 =   0.242187500000 -> a1 =   1.049246088868
    .float   -0.216083064706    ;  15 x2 =   0.250000000000 -> a2 =  -0.216083064706
    .float   -0.004488862702    ;  16 x0 =   0.250000000000 -> a0 =  -0.004488862702
    .float    1.054536702192    ;  16 x1 =   0.257812500000 -> a1 =   1.054536702192
    .float   -0.226666395507    ;  16 x2 =   0.265625000000 -> a2 =  -0.226666395507
    .float   -0.005196863579    ;  17 x0 =   0.265625000000 -> a0 =  -0.005196863579
    .float    1.059868607573    ;  17 x1 =   0.273437500000 -> a1 =   1.059868607573
    .float   -0.236704947279    ;  17 x2 =   0.281250000000 -> a2 =  -0.236704947279
    .float   -0.005946705500    ;  18 x0 =   0.281250000000 -> a0 =  -0.005946705500
    .float    1.065201909527    ;  18 x1 =   0.289062500000 -> a1 =   1.065201909527
    .float   -0.246188315613    ;  18 x2 =   0.296875000000 -> a2 =  -0.246188315613
    .float   -0.006732597422    ;  19 x0 =   0.296875000000 -> a0 =  -0.006732597422
    .float    1.070497443994    ;  19 x1 =   0.304687500000 -> a1 =   1.070497443994
    .float   -0.255108971022    ;  19 x2 =   0.312500000000 -> a2 =  -0.255108971022
    .float   -0.007547992413    ;  20 x0 =   0.312500000000 -> a0 =  -0.007547992413
    .float    1.075717083222    ;  20 x1 =   0.320312500000 -> a1 =   1.075717083222
    .float   -0.263462171840    ;  20 x2 =   0.328125000000 -> a2 =  -0.263462171840
    .float   -0.008385665599    ;  21 x0 =   0.328125000000 -> a0 =  -0.008385665599
    .float    1.080824013499    ;  21 x1 =   0.335937500000 -> a1 =   1.080824013499
    .float   -0.271245856476    ;  21 x2 =   0.343750000000 -> a2 =  -0.271245856476
    .float   -0.009237797924    ;  22 x0 =   0.343750000000 -> a0 =  -0.009237797924
    .float    1.085782983693    ;  22 x1 =   0.351562500000 -> a1 =   1.085782983693
    .float   -0.278460517693    ;  22 x2 =   0.359375000000 -> a2 =  -0.278460517693
    .float   -0.010096064139    ;  23 x0 =   0.359375000000 -> a0 =  -0.010096064139
    .float    1.090560523211    ;  23 x1 =   0.367187500000 -> a1 =   1.090560523211
    .float   -0.285109061650    ;  23 x2 =   0.375000000000 -> a2 =  -0.285109061650
    .float   -0.010951723407    ;  24 x0 =   0.375000000000 -> a0 =  -0.010951723407
    .float    1.095125128557    ;  24 x1 =   0.382812500000 -> a1 =   1.095125128557
    .float   -0.291196654447    ;  24 x2 =   0.390625000000 -> a2 =  -0.291196654447
    .float   -0.011795711029    ;  25 x0 =   0.390625000000 -> a0 =  -0.011795711029
    .float    1.099447418304    ;  25 x1 =   0.398437500000 -> a1 =   1.099447418304
    .float   -0.296730558920    ;  25 x2 =   0.406250000000 -> a2 =  -0.296730558920
    .float   -0.012618729873    ;  26 x0 =   0.406250000000 -> a0 =  -0.012618729873
    .float    1.103500256784    ;  26 x1 =   0.414062500000 -> a1 =   1.103500256784
    .float   -0.301719964310    ;  26 x2 =   0.421875000000 -> a2 =  -0.301719964310
    .float   -0.013411340199    ;  27 x0 =   0.421875000000 -> a0 =  -0.013411340199
    .float    1.107258847274    ;  27 x1 =   0.429687500000 -> a1 =   1.107258847274
    .float   -0.306175811325    ;  27 x2 =   0.437500000000 -> a2 =  -0.306175811325
    .float   -0.014164046711    ;  28 x0 =   0.437500000000 -> a0 =  -0.014164046711
    .float    1.110700795887    ;  28 x1 =   0.445312500000 -> a1 =   1.110700795887
    .float   -0.310110614947    ;  28 x2 =   0.453125000000 -> a2 =  -0.310110614947
    .float   -0.014867381831    ;  29 x0 =   0.453125000000 -> a0 =  -0.014867381831
    .float    1.113806147717    ;  29 x1 =   0.460937500000 -> a1 =   1.113806147717
    .float   -0.313538287176    ;  29 x2 =   0.468750000000 -> a2 =  -0.313538287176
    .float   -0.015511984298    ;  30 x0 =   0.468750000000 -> a0 =  -0.015511984298
    .float    1.116557397059    ;  30 x1 =   0.476562500000 -> a1 =   1.116557397059
    .float   -0.316473961655    ;  30 x2 =   0.484375000000 -> a2 =  -0.316473961655
    .float   -0.016088672395    ;  31 x0 =   0.484375000000 -> a0 =  -0.016088672395
    .float    1.118939473766    ;  31 x1 =   0.492187500000 -> a1 =   1.118939473766
    .float   -0.318933821948    ;  31 x2 =   0.500000000000 -> a2 =  -0.318933821948
    .float   -0.016588511229    ;  32 x0 =   0.500000000000 -> a0 =  -0.016588511229
    .float    1.120939707956    ;  32 x1 =   0.507812500000 -> a1 =   1.120939707956
    .float   -0.320934934991    ;  32 x2 =   0.515625000000 -> a2 =  -0.320934934991
    .float   -0.017002873645    ;  33 x0 =   0.515625000000 -> a0 =  -0.017002873645
    .float    1.122547775367    ;  33 x1 =   0.523437500000 -> a1 =   1.122547775367
    .float   -0.322495091022    ;  33 x2 =   0.531250000000 -> a2 =  -0.322495091022
    .float   -0.017323494499    ;  34 x0 =   0.531250000000 -> a0 =  -0.017323494499
    .float    1.123755625749    ;  34 x1 =   0.539062500000 -> a1 =   1.123755625749
    .float   -0.323632651068    ;  34 x2 =   0.546875000000 -> a2 =  -0.323632651068
    .float   -0.017542518140    ;  35 x0 =   0.546875000000 -> a0 =  -0.017542518140
    .float    1.124557396633    ;  35 x1 =   0.554687500000 -> a1 =   1.124557396633
    .float   -0.324366402860    ;  35 x2 =   0.562500000000 -> a2 =  -0.324366402860
    .float   -0.017652539065    ;  36 x0 =   0.562500000000 -> a0 =  -0.017652539065
    .float    1.124949314810    ;  36 x1 =   0.570312500000 -> a1 =   1.124949314810
    .float   -0.324715425833    ;  36 x2 =   0.578125000000 -> a2 =  -0.324715425833
    .float   -0.017646635823    ;  37 x0 =   0.578125000000 -> a0 =  -0.017646635823
    .float    1.124929587773    ;  37 x1 =   0.585937500000 -> a1 =   1.124929587773
    .float   -0.324698965683    ;  37 x2 =   0.593750000000 -> a2 =  -0.324698965683
    .float   -0.017518398344    ;  38 x0 =   0.593750000000 -> a0 =  -0.017518398344
    .float    1.124498287266    ;  38 x1 =   0.601562500000 -> a1 =   1.124498287266
    .float   -0.324336318787    ;  38 x2 =   0.609375000000 -> a2 =  -0.324336318787
    .float   -0.017261948920    ;  39 x0 =   0.609375000000 -> a0 =  -0.017261948920
    .float    1.123657226955    ;  39 x1 =   0.617187500000 -> a1 =   1.123657226955
    .float   -0.323646726613    ;  39 x2 =   0.625000000000 -> a2 =  -0.323646726613
    .float   -0.016871957164    ;  40 x0 =   0.625000000000 -> a0 =  -0.016871957164
    .float    1.122409836098    ;  40 x1 =   0.632812500000 -> a1 =   1.122409836098
    .float   -0.322649280139    ;  40 x2 =   0.640625000000 -> a2 =  -0.322649280139
    .float   -0.016343649294    ;  41 x0 =   0.640625000000 -> a0 =  -0.016343649294
    .float    1.120761030918    ;  41 x1 =   0.648437500000 -> a1 =   1.120761030918
    .float   -0.321362834119    ;  41 x2 =   0.656250000000 -> a2 =  -0.321362834119
    .float   -0.015672812166    ;  42 x0 =   0.656250000000 -> a0 =  -0.015672812166
    .float    1.118717085258    ;  42 x1 =   0.664062500000 -> a1 =   1.118717085258
    .float   -0.319805931024    ;  42 x2 =   0.671875000000 -> a2 =  -0.319805931024
    .float   -0.014855792451    ;  43 x0 =   0.671875000000 -> a0 =  -0.014855792451
    .float    1.116285501852    ;  43 x1 =   0.679687500000 -> a1 =   1.116285501852
    .float   -0.317996734279    ;  43 x2 =   0.687500000000 -> a2 =  -0.317996734279
    .float   -0.013889491441    ;  44 x0 =   0.687500000000 -> a0 =  -0.013889491441
    .float    1.113474885484    ;  44 x1 =   0.695312500000 -> a1 =   1.113474885484
    .float   -0.315952970460    ;  44 x2 =   0.703125000000 -> a2 =  -0.315952970460
    .float   -0.012771355912    ;  45 x0 =   0.703125000000 -> a0 =  -0.012771355912
    .float    1.110294819035    ;  45 x1 =   0.710937500000 -> a1 =   1.110294819035
    .float   -0.313691879968    ;  45 x2 =   0.718750000000 -> a2 =  -0.313691879968
    .float   -0.011499365513    ;  46 x0 =   0.718750000000 -> a0 =  -0.011499365513
    .float    1.106755743329    ;  46 x1 =   0.726562500000 -> a1 =   1.106755743329
    .float   -0.311230175714    ;  46 x2 =   0.734375000000 -> a2 =  -0.311230175714
    .float   -0.010072017131    ;  47 x0 =   0.734375000000 -> a0 =  -0.010072017131
    .float    1.102868841531    ;  47 x1 =   0.742187500000 -> a1 =   1.102868841531
    .float   -0.308584009287    ;  47 x2 =   0.750000000000 -> a2 =  -0.308584009287
    .float   -0.008488306656    ;  48 x0 =   0.750000000000 -> a0 =  -0.008488306656
    .float    1.098645928648    ;  48 x1 =   0.757812500000 -> a1 =   1.098645928648
    .float   -0.305768944066    ;  48 x2 =   0.765625000000 -> a2 =  -0.305768944066
    .float   -0.006747708579    ;  49 x0 =   0.765625000000 -> a0 =  -0.006747708579
    .float    1.094099346648    ;  49 x1 =   0.773437500000 -> a1 =   1.094099346648
    .float   -0.302799934724    ;  49 x2 =   0.781250000000 -> a2 =  -0.302799934724
    .float   -0.004850153815    ;  50 x0 =   0.781250000000 -> a0 =  -0.004850153815
    .float    1.089241865523    ;  50 x1 =   0.789062500000 -> a1 =   1.089241865523
    .float   -0.299691312610    ;  50 x2 =   0.796875000000 -> a2 =  -0.299691312610
    .float   -0.002796006119    ;  51 x0 =   0.796875000000 -> a0 =  -0.002796006119
    .float    1.084086590517    ;  51 x1 =   0.804687500000 -> a1 =   1.084086590517
    .float   -0.296456776409    ;  51 x2 =   0.812500000000 -> a2 =  -0.296456776409
    .float   -0.000586037441    ;  52 x0 =   0.812500000000 -> a0 =  -0.000586037441
    .float    1.078646875666    ;  52 x1 =   0.820312500000 -> a1 =   1.078646875666
    .float   -0.293109387609    ;  52 x2 =   0.828125000000 -> a2 =  -0.293109387609
    .float    0.001778597452    ;  53 x0 =   0.828125000000 -> a0 =   0.001778597452
    .float    1.072936243727    ;  53 x1 =   0.835937500000 -> a1 =   1.072936243727
    .float   -0.289661570229    ;  53 x2 =   0.843750000000 -> a2 =  -0.289661570229
    .float    0.004296386804    ;  54 x0 =   0.843750000000 -> a0 =   0.004296386804
    .float    1.066968312440    ;  54 x1 =   0.851562500000 -> a1 =   1.066968312440
    .float   -0.286125114351    ;  54 x2 =   0.859375000000 -> a2 =  -0.286125114351
    .float    0.006965487894    ;  55 x0 =   0.859375000000 -> a0 =   0.006965487894
    .float    1.060756727064    ;  55 x1 =   0.867187500000 -> a1 =   1.060756727064
    .float   -0.282511182960    ;  55 x2 =   0.875000000000 -> a2 =  -0.282511182960
    .float    0.009783753017    ;  56 x0 =   0.875000000000 -> a0 =   0.009783753017
    .float    1.054315099009    ;  56 x1 =   0.882812500000 -> a1 =   1.054315099009
    .float   -0.278830321668    ;  56 x2 =   0.890625000000 -> a2 =  -0.278830321668
    .float    0.012748755207    ;  57 x0 =   0.890625000000 -> a0 =   0.012748755207
    .float    1.047656950440    ;  57 x1 =   0.898437500000 -> a1 =   1.047656950440
    .float   -0.275092470943    ;  57 x2 =   0.906250000000 -> a2 =  -0.275092470943
    .float    0.015857813546    ;  58 x0 =   0.906250000000 -> a0 =   0.015857813546
    .float    1.040795664582    ;  58 x1 =   0.914062500000 -> a1 =   1.040795664582
    .float   -0.271306980411    ;  58 x2 =   0.921875000000 -> a2 =  -0.271306980411
    .float    0.019108017893    ;  59 x0 =   0.921875000000 -> a0 =   0.019108017893
    .float    1.033744441476    ;  59 x1 =   0.929687500000 -> a1 =   1.033744441476
    .float   -0.267482624928    ;  59 x2 =   0.937500000000 -> a2 =  -0.267482624928
    .float    0.022496252887    ;  60 x0 =   0.937500000000 -> a0 =   0.022496252887
    .float    1.026516258989    ;  60 x1 =   0.945312500000 -> a1 =   1.026516258989
    .float   -0.263627622089    ;  60 x2 =   0.953125000000 -> a2 =  -0.263627622089
    .float    0.026019221162    ;  61 x0 =   0.953125000000 -> a0 =   0.026019221162
    .float    1.019123838651    ;  61 x1 =   0.960937500000 -> a1 =   1.019123838651
    .float   -0.259749650860    ;  61 x2 =   0.968750000000 -> a2 =  -0.259749650860
    .float    0.029673465636    ;  62 x0 =   0.968750000000 -> a0 =   0.029673465636
    .float    1.011579616186    ;  62 x1 =   0.976562500000 -> a1 =   1.011579616186
    .float   -0.255855871106    ;  62 x2 =   0.984375000000 -> a2 =  -0.255855871106
    .float    0.033455390838    ;  63 x0 =   0.984375000000 -> a0 =   0.033455390838
    .float    1.003895716322    ;  63 x1 =   0.992187500000 -> a1 =   1.003895716322
    .float   -0.251952943763    ;  63 x2 =   1.000000000000 -> a2 =  -0.251952943763
    .float    0.037361283212    ;  64 x0 =   1.000000000000 -> a0 =   0.037361283212
    .float    0.996083931611    ;  64 x1 =   1.007812500000 -> a1 =   0.996083931611
    .float   -0.248047051426    ;  64 x2 =   1.015625000000 -> a2 =  -0.248047051426
_FPU32atan2TableEnd:
_FPUatan2TableEnd:

;; End of File
