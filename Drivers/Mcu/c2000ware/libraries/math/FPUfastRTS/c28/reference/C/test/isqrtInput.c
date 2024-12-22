//#############################################################################
//! \file isqrtInput.c
//! \brief Inverse Square Root Input Vector (512) 
//! \author Vishal Coelho 
//! \date   03-Sep-2015
//! 
//
//  Group:			C2000
//  Target Family:	$DEVICE$
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


const float test_input[512] = {
	2.71828182846e+00F, 2.71910860741e+00F, 2.71993538637e+00F, 
	2.72076216533e+00F, 2.72158894428e+00F, 2.72241572324e+00F, 
	2.72324250219e+00F, 2.72406928115e+00F, 2.72489606010e+00F, 
	2.72572283906e+00F, 2.72654961801e+00F, 2.72737639697e+00F, 
	2.72820317592e+00F, 2.72902995488e+00F, 2.72985673383e+00F, 
	2.73068351279e+00F, 2.73151029174e+00F, 2.73233707070e+00F, 
	2.73316384966e+00F, 2.73399062861e+00F, 2.73481740757e+00F, 
	2.73564418652e+00F, 2.73647096548e+00F, 2.73729774443e+00F, 
	2.73812452339e+00F, 2.73895130234e+00F, 2.73977808130e+00F, 
	2.74060486025e+00F, 2.74143163921e+00F, 2.74225841816e+00F, 
	2.74308519712e+00F, 2.74391197607e+00F, 2.74473875503e+00F, 
	2.74556553399e+00F, 2.74639231294e+00F, 2.74721909190e+00F, 
	2.74804587085e+00F, 2.74887264981e+00F, 2.74969942876e+00F, 
	2.75052620772e+00F, 2.75135298667e+00F, 2.75217976563e+00F, 
	2.75300654458e+00F, 2.75383332354e+00F, 2.75466010249e+00F, 
	2.75548688145e+00F, 2.75631366040e+00F, 2.75714043936e+00F, 
	2.75796721832e+00F, 2.75879399727e+00F, 2.75962077623e+00F, 
	2.76044755518e+00F, 2.76127433414e+00F, 2.76210111309e+00F, 
	2.76292789205e+00F, 2.76375467100e+00F, 2.76458144996e+00F, 
	2.76540822891e+00F, 2.76623500787e+00F, 2.76706178682e+00F, 
	2.76788856578e+00F, 2.76871534473e+00F, 2.76954212369e+00F, 
	2.77036890265e+00F, 2.77119568160e+00F, 2.77202246056e+00F, 
	2.77284923951e+00F, 2.77367601847e+00F, 2.77450279742e+00F, 
	2.77532957638e+00F, 2.77615635533e+00F, 2.77698313429e+00F, 
	2.77780991324e+00F, 2.77863669220e+00F, 2.77946347115e+00F, 
	2.78029025011e+00F, 2.78111702906e+00F, 2.78194380802e+00F, 
	2.78277058698e+00F, 2.78359736593e+00F, 2.78442414489e+00F, 
	2.78525092384e+00F, 2.78607770280e+00F, 2.78690448175e+00F, 
	2.78773126071e+00F, 2.78855803966e+00F, 2.78938481862e+00F, 
	2.79021159757e+00F, 2.79103837653e+00F, 2.79186515548e+00F, 
	2.79269193444e+00F, 2.79351871339e+00F, 2.79434549235e+00F, 
	2.79517227131e+00F, 2.79599905026e+00F, 2.79682582922e+00F, 
	2.79765260817e+00F, 2.79847938713e+00F, 2.79930616608e+00F, 
	2.80013294504e+00F, 2.80095972399e+00F, 2.80178650295e+00F, 
	2.80261328190e+00F, 2.80344006086e+00F, 2.80426683981e+00F, 
	2.80509361877e+00F, 2.80592039772e+00F, 2.80674717668e+00F, 
	2.80757395564e+00F, 2.80840073459e+00F, 2.80922751355e+00F, 
	2.81005429250e+00F, 2.81088107146e+00F, 2.81170785041e+00F, 
	2.81253462937e+00F, 2.81336140832e+00F, 2.81418818728e+00F, 
	2.81501496623e+00F, 2.81584174519e+00F, 2.81666852414e+00F, 
	2.81749530310e+00F, 2.81832208205e+00F, 2.81914886101e+00F, 
	2.81997563997e+00F, 2.82080241892e+00F, 2.82162919788e+00F, 
	2.82245597683e+00F, 2.82328275579e+00F, 2.82410953474e+00F, 
	2.82493631370e+00F, 2.82576309265e+00F, 2.82658987161e+00F, 
	2.82741665056e+00F, 2.82824342952e+00F, 2.82907020847e+00F, 
	2.82989698743e+00F, 2.83072376638e+00F, 2.83155054534e+00F, 
	2.83237732430e+00F, 2.83320410325e+00F, 2.83403088221e+00F, 
	2.83485766116e+00F, 2.83568444012e+00F, 2.83651121907e+00F, 
	2.83733799803e+00F, 2.83816477698e+00F, 2.83899155594e+00F, 
	2.83981833489e+00F, 2.84064511385e+00F, 2.84147189280e+00F, 
	2.84229867176e+00F, 2.84312545071e+00F, 2.84395222967e+00F, 
	2.84477900863e+00F, 2.84560578758e+00F, 2.84643256654e+00F, 
	2.84725934549e+00F, 2.84808612445e+00F, 2.84891290340e+00F, 
	2.84973968236e+00F, 2.85056646131e+00F, 2.85139324027e+00F, 
	2.85222001922e+00F, 2.85304679818e+00F, 2.85387357713e+00F, 
	2.85470035609e+00F, 2.85552713504e+00F, 2.85635391400e+00F, 
	2.85718069296e+00F, 2.85800747191e+00F, 2.85883425087e+00F, 
	2.85966102982e+00F, 2.86048780878e+00F, 2.86131458773e+00F, 
	2.86214136669e+00F, 2.86296814564e+00F, 2.86379492460e+00F, 
	2.86462170355e+00F, 2.86544848251e+00F, 2.86627526146e+00F, 
	2.86710204042e+00F, 2.86792881937e+00F, 2.86875559833e+00F, 
	2.86958237729e+00F, 2.87040915624e+00F, 2.87123593520e+00F, 
	2.87206271415e+00F, 2.87288949311e+00F, 2.87371627206e+00F, 
	2.87454305102e+00F, 2.87536982997e+00F, 2.87619660893e+00F, 
	2.87702338788e+00F, 2.87785016684e+00F, 2.87867694579e+00F, 
	2.87950372475e+00F, 2.88033050370e+00F, 2.88115728266e+00F, 
	2.88198406162e+00F, 2.88281084057e+00F, 2.88363761953e+00F, 
	2.88446439848e+00F, 2.88529117744e+00F, 2.88611795639e+00F, 
	2.88694473535e+00F, 2.88777151430e+00F, 2.88859829326e+00F, 
	2.88942507221e+00F, 2.89025185117e+00F, 2.89107863012e+00F, 
	2.89190540908e+00F, 2.89273218803e+00F, 2.89355896699e+00F, 
	2.89438574595e+00F, 2.89521252490e+00F, 2.89603930386e+00F, 
	2.89686608281e+00F, 2.89769286177e+00F, 2.89851964072e+00F, 
	2.89934641968e+00F, 2.90017319863e+00F, 2.90099997759e+00F, 
	2.90182675654e+00F, 2.90265353550e+00F, 2.90348031445e+00F, 
	2.90430709341e+00F, 2.90513387236e+00F, 2.90596065132e+00F, 
	2.90678743028e+00F, 2.90761420923e+00F, 2.90844098819e+00F, 
	2.90926776714e+00F, 2.91009454610e+00F, 2.91092132505e+00F, 
	2.91174810401e+00F, 2.91257488296e+00F, 2.91340166192e+00F, 
	2.91422844087e+00F, 2.91505521983e+00F, 2.91588199878e+00F, 
	2.91670877774e+00F, 2.91753555669e+00F, 2.91836233565e+00F, 
	2.91918911461e+00F, 2.92001589356e+00F, 2.92084267252e+00F, 
	2.92166945147e+00F, 2.92249623043e+00F, 2.92332300938e+00F, 
	2.92414978834e+00F, 2.92497656729e+00F, 2.92580334625e+00F, 
	2.92663012520e+00F, 2.92745690416e+00F, 2.92828368311e+00F, 
	2.92911046207e+00F, 2.92993724102e+00F, 2.93076401998e+00F, 
	2.93159079894e+00F, 2.93241757789e+00F, 2.93324435685e+00F, 
	2.93407113580e+00F, 2.93489791476e+00F, 2.93572469371e+00F, 
	2.93655147267e+00F, 2.93737825162e+00F, 2.93820503058e+00F, 
	2.93903180953e+00F, 2.93985858849e+00F, 2.94068536744e+00F, 
	2.94151214640e+00F, 2.94233892535e+00F, 2.94316570431e+00F, 
	2.94399248327e+00F, 2.94481926222e+00F, 2.94564604118e+00F, 
	2.94647282013e+00F, 2.94729959909e+00F, 2.94812637804e+00F, 
	2.94895315700e+00F, 2.94977993595e+00F, 2.95060671491e+00F, 
	2.95143349386e+00F, 2.95226027282e+00F, 2.95308705177e+00F, 
	2.95391383073e+00F, 2.95474060968e+00F, 2.95556738864e+00F, 
	2.95639416760e+00F, 2.95722094655e+00F, 2.95804772551e+00F, 
	2.95887450446e+00F, 2.95970128342e+00F, 2.96052806237e+00F, 
	2.96135484133e+00F, 2.96218162028e+00F, 2.96300839924e+00F, 
	2.96383517819e+00F, 2.96466195715e+00F, 2.96548873610e+00F, 
	2.96631551506e+00F, 2.96714229401e+00F, 2.96796907297e+00F, 
	2.96879585193e+00F, 2.96962263088e+00F, 2.97044940984e+00F, 
	2.97127618879e+00F, 2.97210296775e+00F, 2.97292974670e+00F, 
	2.97375652566e+00F, 2.97458330461e+00F, 2.97541008357e+00F, 
	2.97623686252e+00F, 2.97706364148e+00F, 2.97789042043e+00F, 
	2.97871719939e+00F, 2.97954397834e+00F, 2.98037075730e+00F, 
	2.98119753626e+00F, 2.98202431521e+00F, 2.98285109417e+00F, 
	2.98367787312e+00F, 2.98450465208e+00F, 2.98533143103e+00F, 
	2.98615820999e+00F, 2.98698498894e+00F, 2.98781176790e+00F, 
	2.98863854685e+00F, 2.98946532581e+00F, 2.99029210476e+00F, 
	2.99111888372e+00F, 2.99194566267e+00F, 2.99277244163e+00F, 
	2.99359922059e+00F, 2.99442599954e+00F, 2.99525277850e+00F, 
	2.99607955745e+00F, 2.99690633641e+00F, 2.99773311536e+00F, 
	2.99855989432e+00F, 2.99938667327e+00F, 3.00021345223e+00F, 
	3.00104023118e+00F, 3.00186701014e+00F, 3.00269378909e+00F, 
	3.00352056805e+00F, 3.00434734700e+00F, 3.00517412596e+00F, 
	3.00600090492e+00F, 3.00682768387e+00F, 3.00765446283e+00F, 
	3.00848124178e+00F, 3.00930802074e+00F, 3.01013479969e+00F, 
	3.01096157865e+00F, 3.01178835760e+00F, 3.01261513656e+00F, 
	3.01344191551e+00F, 3.01426869447e+00F, 3.01509547342e+00F, 
	3.01592225238e+00F, 3.01674903133e+00F, 3.01757581029e+00F, 
	3.01840258925e+00F, 3.01922936820e+00F, 3.02005614716e+00F, 
	3.02088292611e+00F, 3.02170970507e+00F, 3.02253648402e+00F, 
	3.02336326298e+00F, 3.02419004193e+00F, 3.02501682089e+00F, 
	3.02584359984e+00F, 3.02667037880e+00F, 3.02749715775e+00F, 
	3.02832393671e+00F, 3.02915071566e+00F, 3.02997749462e+00F, 
	3.03080427358e+00F, 3.03163105253e+00F, 3.03245783149e+00F, 
	3.03328461044e+00F, 3.03411138940e+00F, 3.03493816835e+00F, 
	3.03576494731e+00F, 3.03659172626e+00F, 3.03741850522e+00F, 
	3.03824528417e+00F, 3.03907206313e+00F, 3.03989884208e+00F, 
	3.04072562104e+00F, 3.04155239999e+00F, 3.04237917895e+00F, 
	3.04320595791e+00F, 3.04403273686e+00F, 3.04485951582e+00F, 
	3.04568629477e+00F, 3.04651307373e+00F, 3.04733985268e+00F, 
	3.04816663164e+00F, 3.04899341059e+00F, 3.04982018955e+00F, 
	3.05064696850e+00F, 3.05147374746e+00F, 3.05230052641e+00F, 
	3.05312730537e+00F, 3.05395408432e+00F, 3.05478086328e+00F, 
	3.05560764224e+00F, 3.05643442119e+00F, 3.05726120015e+00F, 
	3.05808797910e+00F, 3.05891475806e+00F, 3.05974153701e+00F, 
	3.06056831597e+00F, 3.06139509492e+00F, 3.06222187388e+00F, 
	3.06304865283e+00F, 3.06387543179e+00F, 3.06470221074e+00F, 
	3.06552898970e+00F, 3.06635576865e+00F, 3.06718254761e+00F, 
	3.06800932657e+00F, 3.06883610552e+00F, 3.06966288448e+00F, 
	3.07048966343e+00F, 3.07131644239e+00F, 3.07214322134e+00F, 
	3.07297000030e+00F, 3.07379677925e+00F, 3.07462355821e+00F, 
	3.07545033716e+00F, 3.07627711612e+00F, 3.07710389507e+00F, 
	3.07793067403e+00F, 3.07875745298e+00F, 3.07958423194e+00F, 
	3.08041101090e+00F, 3.08123778985e+00F, 3.08206456881e+00F, 
	3.08289134776e+00F, 3.08371812672e+00F, 3.08454490567e+00F, 
	3.08537168463e+00F, 3.08619846358e+00F, 3.08702524254e+00F, 
	3.08785202149e+00F, 3.08867880045e+00F, 3.08950557940e+00F, 
	3.09033235836e+00F, 3.09115913731e+00F, 3.09198591627e+00F, 
	3.09281269523e+00F, 3.09363947418e+00F, 3.09446625314e+00F, 
	3.09529303209e+00F, 3.09611981105e+00F, 3.09694659000e+00F, 
	3.09777336896e+00F, 3.09860014791e+00F, 3.09942692687e+00F, 
	3.10025370582e+00F, 3.10108048478e+00F, 3.10190726373e+00F, 
	3.10273404269e+00F, 3.10356082164e+00F, 3.10438760060e+00F, 
	3.10521437956e+00F, 3.10604115851e+00F, 3.10686793747e+00F, 
	3.10769471642e+00F, 3.10852149538e+00F, 3.10934827433e+00F, 
	3.11017505329e+00F, 3.11100183224e+00F, 3.11182861120e+00F, 
	3.11265539015e+00F, 3.11348216911e+00F, 3.11430894806e+00F, 
	3.11513572702e+00F, 3.11596250597e+00F, 3.11678928493e+00F, 
	3.11761606389e+00F, 3.11844284284e+00F, 3.11926962180e+00F, 
	3.12009640075e+00F, 3.12092317971e+00F, 3.12174995866e+00F, 
	3.12257673762e+00F, 3.12340351657e+00F, 3.12423029553e+00F, 
	3.12505707448e+00F, 3.12588385344e+00F, 3.12671063239e+00F, 
	3.12753741135e+00F, 3.12836419030e+00F, 3.12919096926e+00F, 
	3.13001774822e+00F, 3.13084452717e+00F, 3.13167130613e+00F, 
	3.13249808508e+00F, 3.13332486404e+00F, 3.13415164299e+00F, 
	3.13497842195e+00F, 3.13580520090e+00F, 3.13663197986e+00F, 
	3.13745875881e+00F, 3.13828553777e+00F, 3.13911231672e+00F, 
	3.13993909568e+00F, 3.14076587463e+00F, }; 


// End of File
