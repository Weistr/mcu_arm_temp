//#############################################################################
//! \file sinOutput.c
//! \brief  Sine Ouput Vector (512) 
//! \author Vishal Coelho 
//! \date   13-Feb-2017
//! 
//
//  Group:          C2000
//  Target Family:  $DEVICE$
//
//#############################################################################
//
//
// 
// C2000Ware v5.03.00.00
//
// Copyright (C) 2024 Texas Instruments Incorporated - http://www.ti.com
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//#############################################################################


const double test_golden[512] = {
    -0.000000000000, -0.012271538286, -0.024541228523, -0.036807222941, 
    -0.049067674327, -0.061320736302, -0.073564563600, -0.085797312344, 
    -0.098017140330, -0.110222207294, -0.122410675199, -0.134580708507, 
    -0.146730474455, -0.158858143334, -0.170961888760, -0.183039887955, 
    -0.195090322016, -0.207111376192, -0.219101240157, -0.231058108281, 
    -0.242980179903, -0.254865659605, -0.266712757475, -0.278519689385, 
    -0.290284677254, -0.302005949319, -0.313681740399, -0.325310292162, 
    -0.336889853392, -0.348418680249, -0.359895036535, -0.371317193952, 
    -0.382683432365, -0.393992040061, -0.405241314005, -0.416429560098, 
    -0.427555093430, -0.438616238539, -0.449611329655, -0.460538710958, 
    -0.471396736826, -0.482183772079, -0.492898192230, -0.503538383726, 
    -0.514102744193, -0.524589682678, -0.534997619887, -0.545324988422, 
    -0.555570233020, -0.565731810784, -0.575808191418, -0.585797857456, 
    -0.595699304492, -0.605511041404, -0.615231590581, -0.624859488142, 
    -0.634393284164, -0.643831542890, -0.653172842954, -0.662415777590, 
    -0.671558954847, -0.680600997795, -0.689540544737, -0.698376249409, 
    -0.707106781187, -0.715730825284, -0.724247082951, -0.732654271672, 
    -0.740951125355, -0.749136394523, -0.757208846506, -0.765167265622, 
    -0.773010453363, -0.780737228572, -0.788346427627, -0.795836904609, 
    -0.803207531481, -0.810457198253, -0.817584813152, -0.824589302785, 
    -0.831469612303, -0.838224705555, -0.844853565250, -0.851355193105, 
    -0.857728610000, -0.863972856122, -0.870086991109, -0.876070094195, 
    -0.881921264348, -0.887639620403, -0.893224301196, -0.898674465694, 
    -0.903989293123, -0.909167983091, -0.914209755704, -0.919113851690, 
    -0.923879532511, -0.928506080473, -0.932992798835, -0.937339011913, 
    -0.941544065183, -0.945607325381, -0.949528180593, -0.953306040354, 
    -0.956940335732, -0.960430519416, -0.963776065795, -0.966976471045, 
    -0.970031253195, -0.972939952206, -0.975702130039, -0.978317370720, 
    -0.980785280403, -0.983105487431, -0.985277642389, -0.987301418158, 
    -0.989176509965, -0.990902635428, -0.992479534599, -0.993906970002, 
    -0.995184726672, -0.996312612183, -0.997290456679, -0.998118112900, 
    -0.998795456205, -0.999322384588, -0.999698818696, -0.999924701839, 
    -1.000000000000, -0.999924701839, -0.999698818696, -0.999322384588, 
    -0.998795456205, -0.998118112900, -0.997290456679, -0.996312612183, 
    -0.995184726672, -0.993906970002, -0.992479534599, -0.990902635428, 
    -0.989176509965, -0.987301418158, -0.985277642389, -0.983105487431, 
    -0.980785280403, -0.978317370720, -0.975702130039, -0.972939952206, 
    -0.970031253195, -0.966976471045, -0.963776065795, -0.960430519416, 
    -0.956940335732, -0.953306040354, -0.949528180593, -0.945607325381, 
    -0.941544065183, -0.937339011913, -0.932992798835, -0.928506080473, 
    -0.923879532511, -0.919113851690, -0.914209755704, -0.909167983091, 
    -0.903989293123, -0.898674465694, -0.893224301196, -0.887639620403, 
    -0.881921264348, -0.876070094195, -0.870086991109, -0.863972856122, 
    -0.857728610000, -0.851355193105, -0.844853565250, -0.838224705555, 
    -0.831469612303, -0.824589302785, -0.817584813152, -0.810457198253, 
    -0.803207531481, -0.795836904609, -0.788346427627, -0.780737228572, 
    -0.773010453363, -0.765167265622, -0.757208846506, -0.749136394523, 
    -0.740951125355, -0.732654271672, -0.724247082951, -0.715730825284, 
    -0.707106781187, -0.698376249409, -0.689540544737, -0.680600997795, 
    -0.671558954847, -0.662415777590, -0.653172842954, -0.643831542890, 
    -0.634393284164, -0.624859488142, -0.615231590581, -0.605511041404, 
    -0.595699304492, -0.585797857456, -0.575808191418, -0.565731810784, 
    -0.555570233020, -0.545324988422, -0.534997619887, -0.524589682678, 
    -0.514102744193, -0.503538383726, -0.492898192230, -0.482183772079, 
    -0.471396736826, -0.460538710958, -0.449611329655, -0.438616238539, 
    -0.427555093430, -0.416429560098, -0.405241314005, -0.393992040061, 
    -0.382683432365, -0.371317193952, -0.359895036535, -0.348418680249, 
    -0.336889853392, -0.325310292162, -0.313681740399, -0.302005949319, 
    -0.290284677254, -0.278519689385, -0.266712757475, -0.254865659605, 
    -0.242980179903, -0.231058108281, -0.219101240157, -0.207111376192, 
    -0.195090322016, -0.183039887955, -0.170961888760, -0.158858143334, 
    -0.146730474455, -0.134580708507, -0.122410675199, -0.110222207294, 
    -0.098017140330, -0.085797312344, -0.073564563600, -0.061320736302, 
    -0.049067674327, -0.036807222941, -0.024541228523, -0.012271538286, 
    -0.000000000000,  0.012271538286,  0.024541228523,  0.036807222941, 
     0.049067674327,  0.061320736302,  0.073564563600,  0.085797312344, 
     0.098017140330,  0.110222207294,  0.122410675199,  0.134580708507, 
     0.146730474455,  0.158858143334,  0.170961888760,  0.183039887955, 
     0.195090322016,  0.207111376192,  0.219101240157,  0.231058108281, 
     0.242980179903,  0.254865659605,  0.266712757475,  0.278519689385, 
     0.290284677254,  0.302005949319,  0.313681740399,  0.325310292162, 
     0.336889853392,  0.348418680249,  0.359895036535,  0.371317193952, 
     0.382683432365,  0.393992040061,  0.405241314005,  0.416429560098, 
     0.427555093430,  0.438616238539,  0.449611329655,  0.460538710958, 
     0.471396736826,  0.482183772079,  0.492898192230,  0.503538383726, 
     0.514102744193,  0.524589682678,  0.534997619887,  0.545324988422, 
     0.555570233020,  0.565731810784,  0.575808191418,  0.585797857456, 
     0.595699304492,  0.605511041404,  0.615231590581,  0.624859488142, 
     0.634393284164,  0.643831542890,  0.653172842954,  0.662415777590, 
     0.671558954847,  0.680600997795,  0.689540544737,  0.698376249409, 
     0.707106781187,  0.715730825284,  0.724247082951,  0.732654271672, 
     0.740951125355,  0.749136394523,  0.757208846506,  0.765167265622, 
     0.773010453363,  0.780737228572,  0.788346427627,  0.795836904609, 
     0.803207531481,  0.810457198253,  0.817584813152,  0.824589302785, 
     0.831469612303,  0.838224705555,  0.844853565250,  0.851355193105, 
     0.857728610000,  0.863972856122,  0.870086991109,  0.876070094195, 
     0.881921264348,  0.887639620403,  0.893224301196,  0.898674465694, 
     0.903989293123,  0.909167983091,  0.914209755704,  0.919113851690, 
     0.923879532511,  0.928506080473,  0.932992798835,  0.937339011913, 
     0.941544065183,  0.945607325381,  0.949528180593,  0.953306040354, 
     0.956940335732,  0.960430519416,  0.963776065795,  0.966976471045, 
     0.970031253195,  0.972939952206,  0.975702130039,  0.978317370720, 
     0.980785280403,  0.983105487431,  0.985277642389,  0.987301418158, 
     0.989176509965,  0.990902635428,  0.992479534599,  0.993906970002, 
     0.995184726672,  0.996312612183,  0.997290456679,  0.998118112900, 
     0.998795456205,  0.999322384588,  0.999698818696,  0.999924701839, 
     1.000000000000,  0.999924701839,  0.999698818696,  0.999322384588, 
     0.998795456205,  0.998118112900,  0.997290456679,  0.996312612183, 
     0.995184726672,  0.993906970002,  0.992479534599,  0.990902635428, 
     0.989176509965,  0.987301418158,  0.985277642389,  0.983105487431, 
     0.980785280403,  0.978317370720,  0.975702130039,  0.972939952206, 
     0.970031253195,  0.966976471045,  0.963776065795,  0.960430519416, 
     0.956940335732,  0.953306040354,  0.949528180593,  0.945607325381, 
     0.941544065183,  0.937339011913,  0.932992798835,  0.928506080473, 
     0.923879532511,  0.919113851690,  0.914209755704,  0.909167983091, 
     0.903989293123,  0.898674465694,  0.893224301196,  0.887639620403, 
     0.881921264348,  0.876070094195,  0.870086991109,  0.863972856122, 
     0.857728610000,  0.851355193105,  0.844853565250,  0.838224705555, 
     0.831469612303,  0.824589302785,  0.817584813152,  0.810457198253, 
     0.803207531481,  0.795836904609,  0.788346427627,  0.780737228572, 
     0.773010453363,  0.765167265622,  0.757208846506,  0.749136394523, 
     0.740951125355,  0.732654271672,  0.724247082951,  0.715730825284, 
     0.707106781187,  0.698376249409,  0.689540544737,  0.680600997795, 
     0.671558954847,  0.662415777590,  0.653172842954,  0.643831542890, 
     0.634393284164,  0.624859488142,  0.615231590581,  0.605511041404, 
     0.595699304492,  0.585797857456,  0.575808191418,  0.565731810784, 
     0.555570233020,  0.545324988422,  0.534997619887,  0.524589682678, 
     0.514102744193,  0.503538383726,  0.492898192230,  0.482183772079, 
     0.471396736826,  0.460538710958,  0.449611329655,  0.438616238539, 
     0.427555093430,  0.416429560098,  0.405241314005,  0.393992040061, 
     0.382683432365,  0.371317193952,  0.359895036535,  0.348418680249, 
     0.336889853392,  0.325310292162,  0.313681740399,  0.302005949319, 
     0.290284677254,  0.278519689385,  0.266712757475,  0.254865659605, 
     0.242980179903,  0.231058108281,  0.219101240157,  0.207111376192, 
     0.195090322016,  0.183039887955,  0.170961888760,  0.158858143334, 
     0.146730474455,  0.134580708507,  0.122410675199,  0.110222207294, 
     0.098017140330,  0.085797312344,  0.073564563600,  0.061320736302, 
     0.049067674327,  0.036807222941,  0.024541228523,  0.012271538286, 
}; 


// End of File
