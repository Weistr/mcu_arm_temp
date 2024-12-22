//#############################################################################
//! \file   input.c
//! \brief  FID Input Vectors (256) 
//! \author Vishal Coelho 
//! \date   24-Mar-2016
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


#include <stdint.h>

const uint32_t test_dividend[256] = {
       361962378,   2445881345,   3979051851,    621509392, 
      2653560352,   1567126978,   3508235013,   2441472831, 
      4236325507,   2805008168,    855575791,    365831096, 
       542937410,   4239213058,   4134333713,   3750692086, 
      3297393254,   2444075778,    236611111,   3441117887, 
      2039770717,   1893336265,   3967643582,   1107433726, 
       660874951,    116385912,   1011213420,   3457790356, 
       243876905,   3799555837,   1604167472,    857437080, 
      1315895005,    437956592,    925234654,   1422705240, 
      2747187866,   2617642778,   1355790241,    332903134, 
      2173441980,   2358912473,   3177162200,   4019022147, 
        26638809,    693761611,   3937913768,    359043039, 
      1520217485,   1184310630,    838481778,   1536549403, 
      1228101759,    385087660,    534331382,   2020396455, 
      2247014443,   1474215865,   2503740426,   1466577428, 
      3572375677,   3699902843,   1121805092,    154883906, 
      1581158931,   2023224537,   1425350648,   3001579581, 
      1289103679,   1073017241,   3227390912,   1828513500, 
      3150091968,   1997728593,    433115180,   2476601623, 
      1938777454,   2897071698,   1228582357,   3125812814, 
      3772860436,    144152612,   3199534718,   2971871938, 
      3759167665,   1035840483,   3548854718,   3433409058, 
      3444321600,    407671731,   2718624191,   3798238897, 
      1264632276,   1111155474,   2399803300,   3565477754, 
      3179912812,    790183663,   3655924207,   2978301920, 
       298524546,   4023788245,   2374127954,   2285803038, 
      1396671284,   3145748222,   1297789259,    906835871, 
       648788580,    427042936,    776635041,   3602388124, 
      1452124516,   3227065992,   3879677492,   2215263490, 
      1841794549,    982807906,   1619796964,   4275462779, 
      1235466678,    564858975,   2197544642,   3151034393, 
      1358687275,    272073801,   3723605411,   2829610996, 
       624644286,   2790238959,    832184427,   3866369114, 
      4210267266,   2317339585,   1126480048,   1932613232, 
        21108976,   1656834617,   2372870474,   3829709651, 
      1123064298,   3088704856,    226805188,   3325130798, 
      3121599870,   1681681657,   2461552183,   1630706835, 
      1582415544,   3121265634,   3672419839,   2852354265, 
      2770898102,   2515810539,   1404874891,   1002295615, 
      2492981220,   3307063548,    891890890,   3196716961, 
      2017364618,   4232135886,   1650449686,   4230191692, 
      2228286574,   3096354233,   1111364150,   4141883776, 
      3983274335,    690745700,    317686765,    876412906, 
      2332394837,   2013362461,   1221762487,   3895828113, 
      1483785897,   2321425260,    319533296,   1905751565, 
      2967811852,    282833223,   2445698290,   1933328301, 
        76389638,   3294486002,   2382238006,     81437221, 
      1464717674,   2652354092,    618420702,     61591107, 
      2494216011,   2665984803,   2575622513,   1440800395, 
      3502848227,   1679381624,   3785333890,     18020908, 
      3511646654,   1484176790,   1319949004,   1269093043, 
      1069877529,   3532587123,   1079993142,   1738123948, 
      2805429152,   3869858276,   4207457721,   2320029382, 
       174174317,   3969776318,   1380907916,    214742914, 
      1031591833,    315431484,   2588531266,   2099712050, 
      3797267001,    898936424,   2895348460,   4128195861, 
      3621001442,   2547747595,   2579849866,   2114374072, 
      2863769490,   1652535779,   1103792784,   2219230557, 
      2061015850,   4138922732,    374397914,    881097742, 
       800193748,   3547515458,   1308671851,   2391568731, 
      3824735928,   3766148580,   1765259745,    281711753, 
      3639325374,   1013898179,    243021541,   3612019035, 
       414895530,    786441513,    274969153,   2417066381, 
      3767837283,   1310830228,   2801610761,    959881198, 
}; 

const uint32_t test_divisor[256] = {
       150477146,   2767449314,   2316988063,   4278136242, 
      1800598411,   4084477421,   4263490353,    855336202, 
      3737717190,   2998613235,    968672487,   2577352559, 
        82576042,   3063378944,   2248111011,   3140401052, 
      2282532981,   3720353462,   1317002460,     24186399, 
       810614182,   3913351896,   3845207849,   3609190738, 
      1107375950,    896353112,   1495416124,   1852834409, 
      2566217156,   1620813232,   4145807177,   1394630438, 
      2482298601,    644312191,   2742859279,   2623445103, 
      1460135628,    111029408,   3139214159,   1572431676, 
      1859536539,    530741909,   3931077599,   1383297375, 
        78126207,   3975029476,   2794124689,   1861777028, 
      3208462309,    264379586,    931279937,   3242692024, 
       976430151,   3645801282,    769012965,   1247983159, 
      4261688801,   1718215773,   4032327212,   4244778823, 
      1245922423,   3867798781,   3578457347,   2859167257, 
      2815238410,   1055679717,    479439758,   4093989514, 
      3431462049,   1112961220,   2150081874,    224413813, 
      1777363350,   1193325410,   1174530316,   3969449184, 
      1120088337,   3222866382,   2705127963,   1441080815, 
       779474152,   1845008602,   4190253224,   2894820888, 
      3190677650,    627736358,   1572764674,     67973376, 
      1047264670,   3638324744,   3882080694,   1411111634, 
       381502250,   2623854813,    910482936,   1988586784, 
      3484412105,    100338000,   4253001258,   1843710992, 
      1979368257,   2862745596,   1338089151,   1705446073, 
      3401403307,   3018778448,   3204655375,   2466274003, 
      2666632481,    857048409,   3866517623,    420846275, 
      1268700016,   3856806844,   3338714972,    755007324, 
      3970200668,   3613910840,    829855448,   1996375284, 
      1257917134,   2922824311,    999701104,   2931444215, 
      3126425543,    393674055,   2467987014,    953617712, 
       380459409,    821597046,   4274409295,     14414181, 
      1360267716,   3006061205,   1096521526,   1346390052, 
      1262703509,   2480792301,   1830213088,   2270847684, 
      3949142973,    163178492,   1841607388,    474967552, 
       972985272,    706971889,   1987385838,   1485959108, 
      3287629130,   3430134418,   2732931048,   1097620822, 
         6582324,   3648601193,   2898143917,     88170097, 
      1437344789,   3289601331,   2216142235,     83476313, 
      1374251146,   1969969888,   2381706651,   2181927741, 
      2865767804,   2412164388,   3061810538,   4169354076, 
      3934315308,   1646559801,   1244882403,   1182944775, 
      3344213535,   1665774126,   3659272747,   3658318646, 
      1001786895,   1243616204,    666878984,   4220480688, 
      3570596504,   2576689834,   1766384463,    745784655, 
       311982653,   4160772767,   1226180829,   3540297387, 
      3695560683,   2291354380,   2803382280,   4131781259, 
      1539335831,   3501403504,   2914156143,   1038580972, 
        43416390,    502664311,   2270054107,   1914872012, 
      1014051822,   3383588504,   2386810406,   4257633441, 
      2093899563,   1687705145,   3413348601,   4213800060, 
      1225257485,   1923138860,   3781724358,   3416951782, 
        34971741,    160089061,   2339344903,   2260063603, 
      1002168314,   1609756489,   2838316002,    534576190, 
      2107374033,    380205370,     16720347,    948049693, 
      2755838182,   2445521759,   2407688983,    135756672, 
      2689021122,   2766848546,   2343047823,   3633904881, 
      3430570723,   3766571037,   3054758927,    718891850, 
      3921013322,   3307164156,   1438844047,   3827315121, 
      3616917689,    865415944,   3291394365,   2306445280, 
      1670188936,    465014836,    795556937,    201069911, 
      1959000252,   4016722457,   2285012663,    112700929, 
      2688060717,   2801540110,   2561038595,   2176324223, 
}; 


// End of File