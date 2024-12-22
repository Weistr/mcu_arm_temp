//#############################################################################
//! \file i32byi32Input.c
//! \brief  FID Input Vectors (256) 
//! \author Vishal Coelho 
//! \date   05-Apr-2016
//! 
//
//  Group:            C2000
//  Target Family:    $DEVICE$
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


#include <stdint.h>

const int32_t test_dividend[256] = {
     -1855109397,  -1526965500,   1623936882,    -22543452, 
       443398452,     22101929,   -754897140,    604099085, 
     -2002375771,  -1888458034,   1694095428,   -486007894, 
     -1581977277,   1260262229,   1329385206,  -1120379832, 
      -110498682,  -1599941553,  -2094097684,   -391235496, 
     -1233322887,   1233897014,  -2112329953,   1485627267, 
      1380807886,    877396031,   1138717105,   1146315096, 
      1377087903,    446650404,  -1789093292,     57904359, 
       131096044,    174836679,   -534766491,   1261265889, 
      -655865218,     72325643,   -826726811,   2143698835, 
       192229994,     14156899,  -1857054898,   -270550604, 
     -1404261078,  -1955837747,  -1346950882,   -446258191, 
     -1480181995,    741027167,  -1371787492,   1593609452, 
      1150617345,   -139056370,   -341740050,   1774315615, 
      -842228309,   -129540147,   1477248658,  -1364829547, 
      -518647967,  -1852434557,   1603945366,  -1742479439, 
        90371133,     94403269,    160935071,     -3815184, 
       223951289,  -1319674445,   -377048400,  -1259861057, 
     -1376658655,    709067953,    447542528,  -1999691641, 
      2077521475,  -1105098119,  -1010934112,   1238855986, 
     -1992767124,  -1769857405,   1243080521,  -1877612297, 
      -996776601,  -1012887381,  -1266016349,   -756302398, 
     -2046002048,  -1232512134,   1999573130,  -1658203932, 
     -1120087640,  -1191006577,    652155344,   1901364743, 
      1625064540,  -1607075242,  -1849134766,  -1975822130, 
      -639089258,   1070113724,   1954461471,   -421778082, 
       860729895,     61803042,     43928706,  -1748218329, 
       437105490,  -2101782579,   1693883977,  -1905506038, 
     -1340051527,  -1136763426,  -1870107796,  -1490075228, 
      -500050930,  -1373205425,  -1990552937,  -1437495017, 
     -1807941195,   1366305066,  -1365468588,   1493726835, 
     -1136554496,  -1057692031,   1464057061,  -1093570135, 
     -1250932063,   1177959194,   -855250024,   1207573653, 
      1696476335,  -1343879239,   1443349789,   1582229584, 
      1005289841,   -363002068,   -125693686,    605600402, 
      1098055748,   1750839294,   -967195246,   -578461145, 
      1176973837,    588507798,  -1941777143,   -892600403, 
       210711177,   1734172110,    886116801,   2087331258, 
      -458681235,    268887622,   -903099579,  -1117031067, 
       925704243,     73309465,  -2037551032,   1742696872, 
     -1202684830,   -995715843,   1311887688,  -1873647533, 
     -1309448458,   -300069631,  -2035901182,    606020597, 
     -2038095555,    300911111,   -741826214,   2075349564, 
       812870611,  -1178288913,   -765493944,   -605363487, 
      1412388989,   -855723377,    414318143,     74518472, 
       161990898,   -587849249,     36546516,     69807809, 
       818349434,   2095101135,   1007316637,    893235111, 
       540684600,   -237151436,   -309986875,    -51560855, 
      -226009272,    512908143,   1561982246,    701041872, 
       704840191,    553366771,  -1779822804,    -23312416, 
      -429617359,  -1007826940,   1740182062,   1293809934, 
     -1582527524,  -1375432626,  -2134534936,   1919998013, 
     -1574802961,    334028551,    449044904,   1231641739, 
      1559675409,    160541582,    431564754,  -1570310727, 
     -1522590141,   -127724171,    969269296,   1045113167, 
      -658146572,  -1897308521,   -357930471,   -112374639, 
     -1903351357,    549755987,   -522324793,   -727859523, 
       536083581,   -721717946,   1717874910,   1243761246, 
     -2041704956,   1492445605,    333260246,  -1747875410, 
       964509312,   -186693844,    -20505909,  -1379929502, 
      1368630088,   1269614687,   -755902716,   -870772342, 
      1102042488,    590174665,   -437737671,   1824702559, 
      2073430876,    755733947,   -113455223,  -1671863267, 
      2024716628,   -151373534,    719483717,  -1973556181, 
}; 

const int32_t test_divisor[256] = {
       575997406,    903701839,    -21363243,   1081453520, 
      -620816591,    288068001,      5039787,   1185467199, 
       669781354,   1109549523,   1253639739,  -2077249780, 
       977385403,    548449201,   1425923143,  -1443458171, 
      2073175204,   1323906934,    559559719,    960478999, 
     -1105298219,    835425197,    461659069,  -2092753733, 
      2046654075,   1775051209,    -86069220,    470373961, 
      -852032304,   1127525390,   -720438725,  -1102693688, 
      -504198418,  -1894202502,    395197482,   -984431881, 
     -1534154323,    644816912,   1801382023,   1822066668, 
      -747029454,   1851804337,   -341922483,    382177675, 
     -1205613829,   2070984156,   2062361404,  -1105462419, 
      1123452463,  -1974553666,    330078956,    862564539, 
       129623082,    -43992997,  -1119089835,   -514753447, 
     -1224628667,    315147625,   2048422846,  -1554996783, 
     -1680630212,    427333631,   -144524169,   1749247766, 
       809571795,  -2077963674,  -1356524422,   1279929929, 
      1678555402,   -920992400,   1283121059,   1615709481, 
     -1334835122,   -427903884,    854201397,    647748173, 
     -1571437046,    923415374,   1723706697,    630290429, 
     -1514802026,   -770393592,    -72125007,   1240050025, 
      1972816482,    -97500660,     27772542,    348751178, 
      1104092549,   1214119944,  -1186308642,  -1471008650, 
       370433469,     81789218,   1493347450,    248922344, 
     -1045901256,    102154874,  -1053942486,  -1543803093, 
     -2018989287,    821959048,    311560132,    127062974, 
     -1312274258,   -201126487,  -1247971087,    -97478339, 
       964363353,  -1980539318,    551608040,   1240024486, 
      2008963193,  -2091547402,   1743603345,   1822429041, 
     -1076870066,   2003115443,     80449184,  -1113088555, 
     -1190023828,   -201192560,   2019927355,  -1590999816, 
     -1455320340,  -2110088284,    700300223,  -1517340478, 
     -1286178645,   -974364731,  -1216523424,    379188077, 
     -1537861747,   -826071680,    -18512665,  -2110556774, 
       185073165,   -467134583,    221458156,    648615905, 
     -1842274487,   1336091023,  -1838784148,  -1693565823, 
      2069578596,    377618351,   -748696548,   2121660768, 
      -337794841,  -1019696636,   1536084153,    420593729, 
     -2138118365,   1531047777,  -2108911889,   1314638568, 
     -2092591702,    200998933,   -441810215,   -908243131, 
        85768077,   -209344661,   1753837046,  -1945335843, 
      -621685938,  -1250583760,  -1340647970,  -1264369873, 
     -1653414713,   -651731473,    527283988,  -1249506183, 
      -254384938,   -811430859,   1712371746,   1573366810, 
     -1821537968,   -376281717,   1752699656,  -1757085385, 
      1840798137,   1628948799,   -859751827,  -2122487166, 
      2132003057,    353130717,   -965042330,    297624272, 
       149009005,  -1007930392,     77446284,   1572140220, 
      2024920488,   1582338543,  -1921085279,  -1145267208, 
      2074876581,   -240012363,   -919622332,    331009357, 
      1729648866,   -413963847,   -189393648,  -2109158967, 
      2071709253,   1714197849,   -202516881,  -2138459576, 
       349858659,   -277831631,    878521697,    648825115, 
     -1610964135,   -403442300,  -2097966663,  -1350697695, 
      1144546716,  -1545653197,   -227019312,   -608217814, 
      -796401950,   -225141979,   2077652032,    896784504, 
      2125808228,  -1573834535,  -2076333720,   1035389200, 
     -1332385680,   -622133732,   -935540530,   -385892045, 
      1360984286,  -1253041092,  -1577212162,   1448287389, 
       777882198,  -1097375465,    611475000,  -1880386496, 
       917359097,   2136509077,    912380631,   1975548303, 
      1224171070,  -1077693581,  -2117656848,    186341029, 
      2136764853,    522037800,  -1008137688,    459319423, 
      1864928376,    247771415,   -670323874,   -273908117, 
}; 


// End of File
