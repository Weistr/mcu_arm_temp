//#############################################################################
//! \file   input.c
//! \brief  Arctangent Input Vector (256) 
//! \author Vishal Coelho 
//! \date   03-Mar-2016
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
//
//#############################################################################
//
//
// $Copyright: Copyright (C) 2024 Texas Instruments Incorporated -
//             http://www.ti.com/ ALL RIGHTS RESERVED $
//#############################################################################


#include "fastrts.h"

const float64_t test_input[256] = {
    -1.000000000000L, -0.992187500000L, -0.984375000000L, -0.976562500000L, 
    -0.968750000000L, -0.960937500000L, -0.953125000000L, -0.945312500000L, 
    -0.937500000000L, -0.929687500000L, -0.921875000000L, -0.914062500000L, 
    -0.906250000000L, -0.898437500000L, -0.890625000000L, -0.882812500000L, 
    -0.875000000000L, -0.867187500000L, -0.859375000000L, -0.851562500000L, 
    -0.843750000000L, -0.835937500000L, -0.828125000000L, -0.820312500000L, 
    -0.812500000000L, -0.804687500000L, -0.796875000000L, -0.789062500000L, 
    -0.781250000000L, -0.773437500000L, -0.765625000000L, -0.757812500000L, 
    -0.750000000000L, -0.742187500000L, -0.734375000000L, -0.726562500000L, 
    -0.718750000000L, -0.710937500000L, -0.703125000000L, -0.695312500000L, 
    -0.687500000000L, -0.679687500000L, -0.671875000000L, -0.664062500000L, 
    -0.656250000000L, -0.648437500000L, -0.640625000000L, -0.632812500000L, 
    -0.625000000000L, -0.617187500000L, -0.609375000000L, -0.601562500000L, 
    -0.593750000000L, -0.585937500000L, -0.578125000000L, -0.570312500000L, 
    -0.562500000000L, -0.554687500000L, -0.546875000000L, -0.539062500000L, 
    -0.531250000000L, -0.523437500000L, -0.515625000000L, -0.507812500000L, 
    -0.500000000000L, -0.492187500000L, -0.484375000000L, -0.476562500000L, 
    -0.468750000000L, -0.460937500000L, -0.453125000000L, -0.445312500000L, 
    -0.437500000000L, -0.429687500000L, -0.421875000000L, -0.414062500000L, 
    -0.406250000000L, -0.398437500000L, -0.390625000000L, -0.382812500000L, 
    -0.375000000000L, -0.367187500000L, -0.359375000000L, -0.351562500000L, 
    -0.343750000000L, -0.335937500000L, -0.328125000000L, -0.320312500000L, 
    -0.312500000000L, -0.304687500000L, -0.296875000000L, -0.289062500000L, 
    -0.281250000000L, -0.273437500000L, -0.265625000000L, -0.257812500000L, 
    -0.250000000000L, -0.242187500000L, -0.234375000000L, -0.226562500000L, 
    -0.218750000000L, -0.210937500000L, -0.203125000000L, -0.195312500000L, 
    -0.187500000000L, -0.179687500000L, -0.171875000000L, -0.164062500000L, 
    -0.156250000000L, -0.148437500000L, -0.140625000000L, -0.132812500000L, 
    -0.125000000000L, -0.117187500000L, -0.109375000000L, -0.101562500000L, 
    -0.093750000000L, -0.085937500000L, -0.078125000000L, -0.070312500000L, 
    -0.062500000000L, -0.054687500000L, -0.046875000000L, -0.039062500000L, 
    -0.031250000000L, -0.023437500000L, -0.015625000000L, -0.007812500000L, 
     0.000000000000L,  0.007812500000L,  0.015625000000L,  0.023437500000L, 
     0.031250000000L,  0.039062500000L,  0.046875000000L,  0.054687500000L, 
     0.062500000000L,  0.070312500000L,  0.078125000000L,  0.085937500000L, 
     0.093750000000L,  0.101562500000L,  0.109375000000L,  0.117187500000L, 
     0.125000000000L,  0.132812500000L,  0.140625000000L,  0.148437500000L, 
     0.156250000000L,  0.164062500000L,  0.171875000000L,  0.179687500000L, 
     0.187500000000L,  0.195312500000L,  0.203125000000L,  0.210937500000L, 
     0.218750000000L,  0.226562500000L,  0.234375000000L,  0.242187500000L, 
     0.250000000000L,  0.257812500000L,  0.265625000000L,  0.273437500000L, 
     0.281250000000L,  0.289062500000L,  0.296875000000L,  0.304687500000L, 
     0.312500000000L,  0.320312500000L,  0.328125000000L,  0.335937500000L, 
     0.343750000000L,  0.351562500000L,  0.359375000000L,  0.367187500000L, 
     0.375000000000L,  0.382812500000L,  0.390625000000L,  0.398437500000L, 
     0.406250000000L,  0.414062500000L,  0.421875000000L,  0.429687500000L, 
     0.437500000000L,  0.445312500000L,  0.453125000000L,  0.460937500000L, 
     0.468750000000L,  0.476562500000L,  0.484375000000L,  0.492187500000L, 
     0.500000000000L,  0.507812500000L,  0.515625000000L,  0.523437500000L, 
     0.531250000000L,  0.539062500000L,  0.546875000000L,  0.554687500000L, 
     0.562500000000L,  0.570312500000L,  0.578125000000L,  0.585937500000L, 
     0.593750000000L,  0.601562500000L,  0.609375000000L,  0.617187500000L, 
     0.625000000000L,  0.632812500000L,  0.640625000000L,  0.648437500000L, 
     0.656250000000L,  0.664062500000L,  0.671875000000L,  0.679687500000L, 
     0.687500000000L,  0.695312500000L,  0.703125000000L,  0.710937500000L, 
     0.718750000000L,  0.726562500000L,  0.734375000000L,  0.742187500000L, 
     0.750000000000L,  0.757812500000L,  0.765625000000L,  0.773437500000L, 
     0.781250000000L,  0.789062500000L,  0.796875000000L,  0.804687500000L, 
     0.812500000000L,  0.820312500000L,  0.828125000000L,  0.835937500000L, 
     0.843750000000L,  0.851562500000L,  0.859375000000L,  0.867187500000L, 
     0.875000000000L,  0.882812500000L,  0.890625000000L,  0.898437500000L, 
     0.906250000000L,  0.914062500000L,  0.921875000000L,  0.929687500000L, 
     0.937500000000L,  0.945312500000L,  0.953125000000L,  0.960937500000L, 
     0.968750000000L,  0.976562500000L,  0.984375000000L,  0.992187500000L, 
}; 


// End of File
