//#############################################################################
//! \file ui64byui32Output.c
//! \brief  FID Ouput Vector (256) 
//! \author Vishal Coelho 
//! \date   07-Apr-2016
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

const uint64_t test_quotient[256] = {
               150891565UL,           4851401157UL,           1715044914UL,           5250665972UL, 
            493729479174UL,           2210829673UL,           5054498224UL,            456442582UL, 
             14683757311UL,           4255071108UL,          17348436654UL,          11266776904UL, 
              1853439431UL,           2964236379UL,            383504523UL,           4053542006UL, 
              2948008021UL,           6223540017UL,           1872607470UL,           1722783893UL, 
               913086645UL,          10400564706UL,           2770679109UL,            824444410UL, 
             23165578178UL,           4955866684UL,           2573075493UL,           8190492553UL, 
              9015491237UL,           1450329928UL,           4394249926UL,           3810959531UL, 
              7638050131UL,          10281165406UL,           8996177381UL,            725466991UL, 
              5448469213UL,           2381807327UL,           1968990661UL,           7096110334UL, 
              1115005155UL,          11802736962UL,           2357952955UL,           2551420465UL, 
             13822347983UL,          53869876501UL,          10508228122UL,           2145687592UL, 
             33827821778UL,           7767938571UL,           4147127232UL,          13472837150UL, 
             21456460038UL,           3540616214UL,          46862742729UL,           2972972756UL, 
               818808050UL,           6128157183UL,           7966306698UL,           5408993630UL, 
              1344448448UL,           4129645791UL,           2342038651UL,        7408963640664UL, 
              4592779998UL,          53950099095UL,          35215740954UL,          37922277365UL, 
              1130097703UL,          15162441302UL,          11283937566UL,            195136046UL, 
              5810920833UL,           6634102443UL,           2584354599UL,           3541007607UL, 
             12135179330UL,           2929625758UL,           3665345004UL,           1446403921UL, 
             19798152897UL,          28015726163UL,           4444656826UL,           5102557328UL, 
             10396537442UL,          17964506394UL,           3981885030UL,           2347095115UL, 
               476561809UL,          35746890336UL,            191558002UL,           2042060896UL, 
               353889921UL,          59289251752UL,           9298118274UL,           5338184899UL, 
             40651311680UL,           8948150173UL,           2027511483UL,           4093337589UL, 
             18391585683UL,          14713206656UL,           4154065466UL,          22486738091UL, 
              3906366354UL,           3703874389UL,             27335375UL,           4630942167UL, 
              1216594913UL,           2150513210UL,           3618529592UL,           1429255104UL, 
              3935752444UL,          17715917784UL,           7422106768UL,           2138948539UL, 
             17700185673UL,            903476013UL,           5646132894UL,           5147149699UL, 
              1415494050UL,          26896165282UL,          12800884370UL,           1234762437UL, 
              2143160813UL,          13383059634UL,           2789528934UL,            847490548UL, 
             46533294517UL,           3211289850UL,           3029234786UL,           3866530815UL, 
              3994920952UL,          10377502527UL,           1296551385UL,           6279958160UL, 
              9211641148UL,           4503762195UL,           1219599641UL,           5929132192UL, 
              1286994093UL,           6854302056UL,          44028243938UL,           3674379279UL, 
              1760987119UL,           5113589141UL,           3022345130UL,          52819347931UL, 
             24775747492UL,           2675041960UL,           9695872965UL,          10928536151UL, 
               828043028UL,           3952747510UL,           4635674671UL,           8969633723UL, 
              4318045463UL,           2847634248UL,          17222194615UL,           4938671853UL, 
               905950937UL,           3268098028UL,           7556051887UL,           3439718682UL, 
             14628495432UL,           3108164930UL,          25385938826UL,           8884274905UL, 
              2811728083UL,          10753528969UL,           2919723509UL,           6235880900UL, 
              5250987620UL,           7437725908UL,           5048473363UL,           3078084015UL, 
              3889587226UL,           1193828048UL,          20355163286UL,          21683954459UL, 
             11415101753UL,           4243224395UL,           5490026411UL,          15908487399UL, 
              2521249036UL,           5684905659UL,           7214870623UL,           2116005503UL, 
               365194093UL,           8657703008UL,            487167705UL,          19974995894UL, 
             33096094525UL,           8233836874UL,            890878612UL,           6045745463UL, 
              2798828042UL,            100016549UL,           5972837053UL,           4102163614UL, 
               545119034UL,           2234260419UL,          11031253023UL,           4434536669UL, 
              5233434673UL,           4251435721UL,           1803464025UL,           2462297675UL, 
              7931074606UL,           2408249322UL,           6586610263UL,           7634409985UL, 
              4703200784UL,           1448203158UL,           1792373664UL,           4966942716UL, 
               163655097UL,             69031833UL,           3949423651UL,           3277765179UL, 
             17903277608UL,           3672586710UL,           1429617516UL,           7288805623UL, 
              1527549165UL,           9272718903UL,           1839083728UL,          18817981692UL, 
              5237834742UL,           5973209645UL,           1746475768UL,           9386733811UL, 
             11433822645UL,            869230797UL,           7482973922UL,           3751950642UL, 
              8787893848UL,          81079560016UL,           1257842300UL,          44288239194UL, 
             12966927719UL,           1462393113UL,           1624569356UL,           5583632688UL, 
               959139965UL,           2826562036UL,           2534631834UL,           7185114739UL, 
             33208080313UL,           1045837072UL,              4465783UL,           4131284307UL, 
              4577071231UL,          24414366409UL,          30013724417UL,           2422744115UL, 
}; 

const uint32_t test_remainder[256] = {
      2685591730,   1148253609,    222475150,    368463136, 
        28589818,      8350386,     83401088,    988719232, 
       128805460,   2749649804,     56055732,    139059400, 
       358755584,   3664237806,   1459940582,    845773222, 
      2299478715,   1695708117,   2574549102,    196218068, 
      2245816232,    932604388,   1938827707,    214556142, 
        44537346,     51947860,   1681997505,   1417442965, 
       810852669,   2410709024,    641052354,   1678322608, 
       346776532,    495861008,   1612868263,    778245056, 
      2124624975,   3280280593,   1848737424,    226548062, 
       160183934,    628767396,   2656536145,   1214017818, 
       350861060,    250970292,    899405028,   1802690208, 
        29139182,    602643312,    521936128,    174274374, 
         5433076,   1076164584,    304464699,    407926440, 
       742678634,    816094813,    927737804,   1050982988, 
      2559418496,   3389323747,   1832899746,       251912, 
       931496880,      6154476,    205749950,    389597776, 
       376093393,    609608508,    922066460,    609922778, 
      1033249638,    686686235,    199816343,    347580166, 
         9391546,     70258842,    130606864,   2182389659, 
        63515984,     81284421,   2547569300,   1215595968, 
       339257676,      4535582,    700076680,    351949413, 
       248010999,    209313024,   1852428954,   1697062720, 
      1240609184,    172055664,    480607758,   1545006448, 
         5191872,   1326279298,     91526591,    108256323, 
       594956954,    206897792,   1546372534,    421951977, 
      4137036824,    500326705,    464611955,   3035972311, 
      3469191984,   1933713490,    543694112,   2251710336, 
      2033904332,    271442744,    152132368,   1414175625, 
       273861787,   2361182387,    643921914,   1120324071, 
       380809180,    336543820,    392014134,    843173310, 
      1151053230,    177464528,   2129252300,   1327543896, 
        77369239,   1609756046,    801628406,   1264612922, 
      2589922688,    955954661,   1146208738,     28463904, 
       677885064,    206331306,    907848997,   1956609760, 
      2068812591,    222969536,     92700362,    925549837, 
       808289537,   1374322951,    157293230,    158855465, 
        15213356,   3543570152,    569426013,    219059282, 
       134313224,   2272413266,    656698383,    839555646, 
       556359573,   1576345736,     14491393,    460989530, 
      2625357163,    177053232,   1363452736,   1904071808, 
        69767800,   1222666804,    363133378,   1853466535, 
      2859950943,    922694124,    206066203,    730174604, 
       373888536,     67056044,   2781687822,     57923190, 
       559301580,    306924304,    112632290,    528614913, 
       434766917,   2717163790,   1804214071,    918410344, 
      1315102776,   1527103946,   1548542462,   1561732046, 
       334241482,    651747008,   2557872430,    252805490, 
       204208715,    155628600,   1895700088,    121328574, 
      2426088378,   2140137354,    147387871,   1011746420, 
      2971064362,   3296841826,    509869781,     27791853, 
      2694275256,   1420185682,    736944389,   1811794916, 
      1830806794,   3282946220,     32902016,   1696877984, 
       569064592,    502355212,    771237888,    234917600, 
       507116999,   1189027758,    582568068,    330487877, 
       705098392,    451693608,   2917539180,    467715632, 
       631138472,     29586228,    798757200,    529211212, 
       582852606,   2005938432,   2883765592,   1141585888, 
       205779623,    872397066,    766734914,   2560840226, 
        91456976,    139978368,    950525136,     78256984, 
       387394706,   2628867707,    865143540,    768658400, 
      1861150818,   2606112624,    942136062,    196413109, 
        89306096,   1460637184,    481789404,   2511544040, 
       937323523,    118679572,    128222162,     45482740, 
}; 


// End of File
