//#############################################################################
//! \file   input.c
//! \brief  FID Input Vectors (256) 
//! \author Vishal Coelho 
//! \date   15-Apr-2016
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
       150420858,   1741501745,   1072319139,   2065436207, 
      3783175245,   1205532112,   2573297483,    112640408, 
       666573196,   3581619917,    837060638,   3563912473, 
      1452020463,   2882423631,    224911628,   3153833425, 
      2145257900,   4051442381,   1244563051,   1617314719, 
       488575558,   4144002232,   1857623036,    363196183, 
      3078101753,   2176635221,   1409126119,   3236361542, 
      3590617675,   1089703435,   2295337969,   1869020444, 
       677334148,   2579047131,   4026320355,    462819572, 
      3865390828,   2364229134,   1835482993,    654470683, 
      1063201985,   1921434338,   2288287440,   1523215023, 
      3320502834,   3786791671,   3152901533,   1745613034, 
      2594927953,   2753525230,    547465892,   2131128399, 
      1333455728,   2484958400,   4052769524,   1833691659, 
       142285571,   3991888112,   3972768518,   1538916501, 
      1116644752,   3379536444,   2197229004,   2416035726, 
      2941166821,    396840355,   3747698126,   4049887357, 
       414869087,   3633037695,   3905824424,     48709828, 
      2249200086,   2793211681,   1654186685,   2788731067, 
      3276430746,   2472552462,   2714072077,   1194877098, 
      3607069969,   1833242177,   2712797458,   3579713427, 
      1160437730,   1721426054,   2380505348,   1906387191, 
       388196848,   3197093381,    140082288,   1845730169, 
       160040272,   4191019436,   2243432822,   3906831009, 
      1646037288,   3798693431,   1095292292,   3904339341, 
      3842107854,   1711618173,   2684440467,   2437811781, 
      3841899293,    919835123,     16574961,   3782068576, 
      1009839733,   1051685545,   2752717705,   1307922687, 
      3546014385,   3795414112,   4060345936,   1678453197, 
      3441643471,    674796433,   2685064933,   3002119230, 
       368804259,   2281398893,   3816364152,   1132436882, 
      1008396153,   3606300332,   2128328221,    654408561, 
       991141682,   2825890727,   2417844886,   1253394884, 
      2672779557,   3074790315,   1205730610,   1770699733, 
      1555661693,   3356053179,    581912884,   3874359063, 
      1243977516,   2145584955,   3365495090,   2907959416, 
       643436481,   2991957882,    554106801,   4062808367, 
      3807109902,   2211927969,   2918038344,   4195295526, 
       538848129,   3230859303,   3552160902,   3356217697, 
       819834811,   1841000539,     62091256,   1397090536, 
       578540808,   1934957765,   2457902109,   3401714093, 
      1802755012,   2287227041,   3975870089,   3861527089, 
      2340041628,   3870297895,    222594020,   3472921372, 
      1438404215,    982186510,   3532188867,   1495656128, 
       710690795,    120832754,   4103281896,   2921826358, 
      3696086138,   4033375935,   2921410832,   3940304995, 
      1102482331,   3803700923,   3951553694,   1288762661, 
       315211716,   3295952469,    364866989,   3130017888, 
      1923671371,   2797091709,    728004991,   2282557111, 
      2722153957,     60541877,   2020229501,   3806741059, 
       489748402,   1900699773,   2832736609,   1266040267, 
      4081801203,   2981936727,    888227270,   2382686046, 
      3776472334,   2395980537,   3231250183,   3843569635, 
      3615693191,    562025172,    812409960,    659878049, 
       124133427,     39019342,   2561740725,   2615846929, 
      3946746087,   3150678243,   1293416310,   2128476180, 
      1108801743,   3147585525,    501483607,   3204224115, 
      3478017731,   3200754288,   1448019508,   2509656681, 
      2014133954,    374800469,   3559314242,   2946110089, 
      1148152369,   4163900203,    789304190,   1288236454, 
      1766025658,   1015713324,    837756232,   3029580937, 
       775448845,   2243402800,   1272048295,   1987633075, 
      3973842970,    927236806,      4333100,   3893844164, 
      2920757916,   2211701162,   2242268770,    442031932, 
}; 

const uint16_t test_divisor[256] = {
           65331,        23525,        40975,        25779, 
             502,        35735,        33365,        16173, 
            2975,        55163,         3162,        20730, 
           51341,        63726,        38434,        50989, 
           47690,        42662,        43556,        61523, 
           35067,        26112,        43938,        28870, 
            8708,        28783,        35890,        25895, 
           26101,        49240,        34232,        32141, 
            5812,        16440,        29331,        41809, 
           46493,        65051,        61091,         6044, 
           62490,        10669,        63599,        39125, 
           15743,         4607,        19663,        53316, 
            5027,        23230,         8651,        10366, 
            4073,        45995,         5668,        40421, 
           11388,        42690,        32682,        18645, 
           54431,        53631,        61483,           21, 
           41968,          482,         6974,         6999, 
           24058,        15703,        22684,        16359, 
           25366,        27593,        41947,        51612, 
           17694,        55310,        48527,        54139, 
           11940,         4288,        39999,        45976, 
            7315,         6280,        39179,        53230, 
           53383,         5861,        47924,        59234, 
           29637,         4633,        15812,        47963, 
            2654,        27821,        35403,        62509, 
           13691,         7624,        42350,         7105, 
           64453,        16275,        39738,        53522, 
           54398,        32049,        49854,        59972, 
           59045,        14040,        35852,        51426, 
           12743,        48947,        31166,        38224, 
           17075,         5559,        19538,        60104, 
           30835,        17660,        50001,        50604, 
            1396,        57670,        52308,        21244, 
           43846,        19418,        60944,        18478, 
           11068,        48834,        31269,        42823, 
           63345,        20514,         5009,        51865, 
           23945,        38344,        12015,         5041, 
           10070,        54189,        19723,        25158, 
           42647,        53566,        50217,        24522, 
           12443,        42368,          236,        18539, 
           41851,        38802,        21318,        64811, 
            8076,        48226,        10264,        28485, 
           54541,        23587,         4996,        36498, 
           17952,         8654,        45852,        31844, 
           11974,         6633,        13211,         8831, 
           21220,        62294,        34873,        16232, 
           28657,        43849,        35893,        39914, 
           56566,        24949,        49083,        10269, 
            3809,        22263,        53554,        24743, 
           63740,        39670,        22166,        60815, 
           58878,        55751,        16829,        18710, 
           51114,        45966,        32277,        63416, 
           31205,        65201,        32150,        32994, 
           50382,        25433,        29704,         8707, 
           49709,        37043,        42508,        52301, 
           14447,        56222,        59291,        19138, 
           47570,        22246,        17870,        11159, 
           43516,        35117,        54336,        17522, 
           11544,        28258,        31172,        51459, 
            8562,         3366,        41124,         1906, 
            8926,        45518,        33795,        35558, 
           52984,        52014,        32890,        18129, 
            7842,        58103,        63588,        61768, 
           41820,         5937,         4896,        11957, 
}; 


// End of File