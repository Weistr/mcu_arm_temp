//#############################################################################
//! \file   golden.c
//! \brief  Cosine Ouput Vector (512) 
//! \author Vishal Coelho 
//! \date   16-Dec-2016
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

const float64_t test_golden[512] = {
    -1.000000000000L, -0.999924701839L, -0.999698818696L, -0.999322384588L, 
    -0.998795456205L, -0.998118112900L, -0.997290456679L, -0.996312612183L, 
    -0.995184726672L, -0.993906970002L, -0.992479534599L, -0.990902635428L, 
    -0.989176509965L, -0.987301418158L, -0.985277642389L, -0.983105487431L, 
    -0.980785280403L, -0.978317370720L, -0.975702130039L, -0.972939952206L, 
    -0.970031253195L, -0.966976471045L, -0.963776065795L, -0.960430519416L, 
    -0.956940335732L, -0.953306040354L, -0.949528180593L, -0.945607325381L, 
    -0.941544065183L, -0.937339011913L, -0.932992798835L, -0.928506080473L, 
    -0.923879532511L, -0.919113851690L, -0.914209755704L, -0.909167983091L, 
    -0.903989293123L, -0.898674465694L, -0.893224301196L, -0.887639620403L, 
    -0.881921264348L, -0.876070094195L, -0.870086991109L, -0.863972856122L, 
    -0.857728610000L, -0.851355193105L, -0.844853565250L, -0.838224705555L, 
    -0.831469612303L, -0.824589302785L, -0.817584813152L, -0.810457198253L, 
    -0.803207531481L, -0.795836904609L, -0.788346427627L, -0.780737228572L, 
    -0.773010453363L, -0.765167265622L, -0.757208846506L, -0.749136394523L, 
    -0.740951125355L, -0.732654271672L, -0.724247082951L, -0.715730825284L, 
    -0.707106781187L, -0.698376249409L, -0.689540544737L, -0.680600997795L, 
    -0.671558954847L, -0.662415777590L, -0.653172842954L, -0.643831542890L, 
    -0.634393284164L, -0.624859488142L, -0.615231590581L, -0.605511041404L, 
    -0.595699304492L, -0.585797857456L, -0.575808191418L, -0.565731810784L, 
    -0.555570233020L, -0.545324988422L, -0.534997619887L, -0.524589682678L, 
    -0.514102744193L, -0.503538383726L, -0.492898192230L, -0.482183772079L, 
    -0.471396736826L, -0.460538710958L, -0.449611329655L, -0.438616238539L, 
    -0.427555093430L, -0.416429560098L, -0.405241314005L, -0.393992040061L, 
    -0.382683432365L, -0.371317193952L, -0.359895036535L, -0.348418680249L, 
    -0.336889853392L, -0.325310292162L, -0.313681740399L, -0.302005949319L, 
    -0.290284677254L, -0.278519689385L, -0.266712757475L, -0.254865659605L, 
    -0.242980179903L, -0.231058108281L, -0.219101240157L, -0.207111376192L, 
    -0.195090322016L, -0.183039887955L, -0.170961888760L, -0.158858143334L, 
    -0.146730474455L, -0.134580708507L, -0.122410675199L, -0.110222207294L, 
    -0.098017140330L, -0.085797312344L, -0.073564563600L, -0.061320736302L, 
    -0.049067674327L, -0.036807222941L, -0.024541228523L, -0.012271538286L, 
    -0.000000000000L,  0.012271538286L,  0.024541228523L,  0.036807222941L, 
     0.049067674327L,  0.061320736302L,  0.073564563600L,  0.085797312344L, 
     0.098017140330L,  0.110222207294L,  0.122410675199L,  0.134580708507L, 
     0.146730474455L,  0.158858143334L,  0.170961888760L,  0.183039887955L, 
     0.195090322016L,  0.207111376192L,  0.219101240157L,  0.231058108281L, 
     0.242980179903L,  0.254865659605L,  0.266712757475L,  0.278519689385L, 
     0.290284677254L,  0.302005949319L,  0.313681740399L,  0.325310292162L, 
     0.336889853392L,  0.348418680249L,  0.359895036535L,  0.371317193952L, 
     0.382683432365L,  0.393992040061L,  0.405241314005L,  0.416429560098L, 
     0.427555093430L,  0.438616238539L,  0.449611329655L,  0.460538710958L, 
     0.471396736826L,  0.482183772079L,  0.492898192230L,  0.503538383726L, 
     0.514102744193L,  0.524589682678L,  0.534997619887L,  0.545324988422L, 
     0.555570233020L,  0.565731810784L,  0.575808191418L,  0.585797857456L, 
     0.595699304492L,  0.605511041404L,  0.615231590581L,  0.624859488142L, 
     0.634393284164L,  0.643831542890L,  0.653172842954L,  0.662415777590L, 
     0.671558954847L,  0.680600997795L,  0.689540544737L,  0.698376249409L, 
     0.707106781187L,  0.715730825284L,  0.724247082951L,  0.732654271672L, 
     0.740951125355L,  0.749136394523L,  0.757208846506L,  0.765167265622L, 
     0.773010453363L,  0.780737228572L,  0.788346427627L,  0.795836904609L, 
     0.803207531481L,  0.810457198253L,  0.817584813152L,  0.824589302785L, 
     0.831469612303L,  0.838224705555L,  0.844853565250L,  0.851355193105L, 
     0.857728610000L,  0.863972856122L,  0.870086991109L,  0.876070094195L, 
     0.881921264348L,  0.887639620403L,  0.893224301196L,  0.898674465694L, 
     0.903989293123L,  0.909167983091L,  0.914209755704L,  0.919113851690L, 
     0.923879532511L,  0.928506080473L,  0.932992798835L,  0.937339011913L, 
     0.941544065183L,  0.945607325381L,  0.949528180593L,  0.953306040354L, 
     0.956940335732L,  0.960430519416L,  0.963776065795L,  0.966976471045L, 
     0.970031253195L,  0.972939952206L,  0.975702130039L,  0.978317370720L, 
     0.980785280403L,  0.983105487431L,  0.985277642389L,  0.987301418158L, 
     0.989176509965L,  0.990902635428L,  0.992479534599L,  0.993906970002L, 
     0.995184726672L,  0.996312612183L,  0.997290456679L,  0.998118112900L, 
     0.998795456205L,  0.999322384588L,  0.999698818696L,  0.999924701839L, 
     1.000000000000L,  0.999924701839L,  0.999698818696L,  0.999322384588L, 
     0.998795456205L,  0.998118112900L,  0.997290456679L,  0.996312612183L, 
     0.995184726672L,  0.993906970002L,  0.992479534599L,  0.990902635428L, 
     0.989176509965L,  0.987301418158L,  0.985277642389L,  0.983105487431L, 
     0.980785280403L,  0.978317370720L,  0.975702130039L,  0.972939952206L, 
     0.970031253195L,  0.966976471045L,  0.963776065795L,  0.960430519416L, 
     0.956940335732L,  0.953306040354L,  0.949528180593L,  0.945607325381L, 
     0.941544065183L,  0.937339011913L,  0.932992798835L,  0.928506080473L, 
     0.923879532511L,  0.919113851690L,  0.914209755704L,  0.909167983091L, 
     0.903989293123L,  0.898674465694L,  0.893224301196L,  0.887639620403L, 
     0.881921264348L,  0.876070094195L,  0.870086991109L,  0.863972856122L, 
     0.857728610000L,  0.851355193105L,  0.844853565250L,  0.838224705555L, 
     0.831469612303L,  0.824589302785L,  0.817584813152L,  0.810457198253L, 
     0.803207531481L,  0.795836904609L,  0.788346427627L,  0.780737228572L, 
     0.773010453363L,  0.765167265622L,  0.757208846506L,  0.749136394523L, 
     0.740951125355L,  0.732654271672L,  0.724247082951L,  0.715730825284L, 
     0.707106781187L,  0.698376249409L,  0.689540544737L,  0.680600997795L, 
     0.671558954847L,  0.662415777590L,  0.653172842954L,  0.643831542890L, 
     0.634393284164L,  0.624859488142L,  0.615231590581L,  0.605511041404L, 
     0.595699304492L,  0.585797857456L,  0.575808191418L,  0.565731810784L, 
     0.555570233020L,  0.545324988422L,  0.534997619887L,  0.524589682678L, 
     0.514102744193L,  0.503538383726L,  0.492898192230L,  0.482183772079L, 
     0.471396736826L,  0.460538710958L,  0.449611329655L,  0.438616238539L, 
     0.427555093430L,  0.416429560098L,  0.405241314005L,  0.393992040061L, 
     0.382683432365L,  0.371317193952L,  0.359895036535L,  0.348418680249L, 
     0.336889853392L,  0.325310292162L,  0.313681740399L,  0.302005949319L, 
     0.290284677254L,  0.278519689385L,  0.266712757475L,  0.254865659605L, 
     0.242980179903L,  0.231058108281L,  0.219101240157L,  0.207111376192L, 
     0.195090322016L,  0.183039887955L,  0.170961888760L,  0.158858143334L, 
     0.146730474455L,  0.134580708507L,  0.122410675199L,  0.110222207294L, 
     0.098017140330L,  0.085797312344L,  0.073564563600L,  0.061320736302L, 
     0.049067674327L,  0.036807222941L,  0.024541228523L,  0.012271538286L, 
     0.000000000000L, -0.012271538286L, -0.024541228523L, -0.036807222941L, 
    -0.049067674327L, -0.061320736302L, -0.073564563600L, -0.085797312344L, 
    -0.098017140330L, -0.110222207294L, -0.122410675199L, -0.134580708507L, 
    -0.146730474455L, -0.158858143334L, -0.170961888760L, -0.183039887955L, 
    -0.195090322016L, -0.207111376192L, -0.219101240157L, -0.231058108281L, 
    -0.242980179903L, -0.254865659605L, -0.266712757475L, -0.278519689385L, 
    -0.290284677254L, -0.302005949319L, -0.313681740399L, -0.325310292162L, 
    -0.336889853392L, -0.348418680249L, -0.359895036535L, -0.371317193952L, 
    -0.382683432365L, -0.393992040061L, -0.405241314005L, -0.416429560098L, 
    -0.427555093430L, -0.438616238539L, -0.449611329655L, -0.460538710958L, 
    -0.471396736826L, -0.482183772079L, -0.492898192230L, -0.503538383726L, 
    -0.514102744193L, -0.524589682678L, -0.534997619887L, -0.545324988422L, 
    -0.555570233020L, -0.565731810784L, -0.575808191418L, -0.585797857456L, 
    -0.595699304492L, -0.605511041404L, -0.615231590581L, -0.624859488142L, 
    -0.634393284164L, -0.643831542890L, -0.653172842954L, -0.662415777590L, 
    -0.671558954847L, -0.680600997795L, -0.689540544737L, -0.698376249409L, 
    -0.707106781187L, -0.715730825284L, -0.724247082951L, -0.732654271672L, 
    -0.740951125355L, -0.749136394523L, -0.757208846506L, -0.765167265622L, 
    -0.773010453363L, -0.780737228572L, -0.788346427627L, -0.795836904609L, 
    -0.803207531481L, -0.810457198253L, -0.817584813152L, -0.824589302785L, 
    -0.831469612303L, -0.838224705555L, -0.844853565250L, -0.851355193105L, 
    -0.857728610000L, -0.863972856122L, -0.870086991109L, -0.876070094195L, 
    -0.881921264348L, -0.887639620403L, -0.893224301196L, -0.898674465694L, 
    -0.903989293123L, -0.909167983091L, -0.914209755704L, -0.919113851690L, 
    -0.923879532511L, -0.928506080473L, -0.932992798835L, -0.937339011913L, 
    -0.941544065183L, -0.945607325381L, -0.949528180593L, -0.953306040354L, 
    -0.956940335732L, -0.960430519416L, -0.963776065795L, -0.966976471045L, 
    -0.970031253195L, -0.972939952206L, -0.975702130039L, -0.978317370720L, 
    -0.980785280403L, -0.983105487431L, -0.985277642389L, -0.987301418158L, 
    -0.989176509965L, -0.990902635428L, -0.992479534599L, -0.993906970002L, 
    -0.995184726672L, -0.996312612183L, -0.997290456679L, -0.998118112900L, 
    -0.998795456205L, -0.999322384588L, -0.999698818696L, -0.999924701839L, 
}; 


// End of File
