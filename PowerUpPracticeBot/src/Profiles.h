/*
 * Profiles.h
 *
 *  Created on: 2/12, 2018
 *      Author: 2018PowerUp
 *
 *  This is where we will put all of our profiles
 *  for motion profiling.
 *
 */

#ifndef SRC_SUBSYSTEMS_PROFILES_H_
#define SRC_SUBSYSTEMS_PROFILES_H_

const int kP3RightSz=66;

const double kP3Right_rightprofile[][3] = {
		{0.003639,  0.145546,  50},
		{0.014888,  0.224997,  50},
		{0.037400,  0.450220,  50},
		{0.071197,  0.675954,  50},
		{0.116327,  0.902592,  50},
		{0.172861,  1.130692,  50},
		{0.240913,  1.361022,  50},
		{0.320642,  1.594592,  50},
		{0.412276,  1.832669,  50},
		{0.516114,  2.076763,  50},
		{0.632542,  2.328567,  50},
		{0.762036,  2.589869,  50},
		{0.905157,  2.862424,  50},
		{1.062547,  3.147806,  50},
		{1.234911,  3.447282,  50},
		{1.422998,  3.761729,  50},
		{1.627578,  4.091614,  50},
		{1.849432,  4.437075,  50},
		{2.089335,  4.798063,  50},
		{2.348063,  5.174551,  50},
		{2.626401,  5.566758,  50},
		{2.925169,  5.975370,  50},
		{3.245254,  6.401706,  50},
		{3.587645,  6.847808,  50},
		{3.953463,  7.316359,  50},
		{4.343977,  7.810288,  50},
		{4.760567,  8.331789,  50},
		{5.204585,  8.880371,  50},
		{5.677065,  9.449595,  50},
		{6.178210,  10.022892,  50},
		{6.706749,  10.570790,  50},
		{7.240288,  10.670781,  50},
		{7.756822,  10.330677,  50},
		{8.275550,  10.374555,  50},
		{8.793521,  10.359426,  50},
		{9.310901,  10.347601,  50},
		{9.826206,  10.306109,  50},
		{10.335175,  10.179374,  50},
		{10.831073,  9.917964,  50},
		{11.306512,  9.508781,  50},
		{11.755749,  8.984741,  50},
		{12.175889,  8.402799,  50},
		{12.566591,  7.814040,  50},
		{12.929067,  7.249519,  50},
		{13.265163,  6.721908,  50},
		{13.576794,  6.232632,  50},
		{13.865691,  5.777943,  50},
		{14.133315,  5.352480,  50},
		{14.380863,  4.950945,  50},
		{14.609299,  4.568725,  50},
		{14.819400,  4.202026,  50},
		{15.011791,  3.847804,  50},
		{15.186973,  3.503647,  50},
		{15.345355,  3.167640,  50},
		{15.487268,  2.838259,  50},
		{15.612982,  2.514278,  50},
		{15.722717,  2.194698,  50},
		{15.816651,  1.878693,  50},
		{15.894930,  1.565568,  50},
		{15.957666,  1.254724,  50},
		{16.004948,  0.945637,  50},
		{16.036839,  0.637834,  50},
		{16.053383,  0.330877,  50},
		{16.058127,  0.094871,  50},
		{16.058431,  0.006088,  50},
		{16.058431,  0.000000,  50}
};

const double kP3Right_leftprofile[][3] = {
		{0.003639,  0.145546,  50},
		{0.021498,  0.357186,  50},
		{0.057205,  0.714144,  50},
		{0.110735,  1.070589,  50},
		{0.182041,  1.426125,  50},
		{0.271051,  1.780193,  50},
		{0.377652,  2.132025,  50},
		{0.501682,  2.480610,  50},
		{0.642916,  2.824681,  50},
		{0.801053,  3.162730,  50},
		{0.975706,  3.493065,  50},
		{1.166401,  3.813903,  50},
		{1.372576,  4.123493,  50},
		{1.593589,  4.420265,  50},
		{1.828737,  4.702957,  50},
		{2.077272,  4.970696,  50},
		{2.338423,  5.223015,  50},
		{2.611411,  5.459778,  50},
		{2.895463,  5.681029,  50},
		{3.189802,  5.886790,  50},
		{3.493644,  6.076831,  50},
		{3.806167,  6.250457,  50},
		{4.126483,  6.406328,  50},
		{4.453602,  6.542377,  50},
		{4.786396,  6.655885,  50},
		{5.123590,  6.743873,  50},
		{5.463794,  6.804076,  50},
		{5.805639,  6.836904,  50},
		{6.148075,  6.848722,  50},
		{6.490880,  6.856099,  50},
		{6.835313,  6.888657,  50},
		{7.196384,  7.221417,  50},
		{7.575362,  7.579572,  50},
		{7.931408,  7.120923,  50},
		{8.259605,  6.563938,  50},
		{8.559199,  5.991882,  50},
		{8.831680,  5.449607,  50},
		{9.081341,  4.993216,  50},
		{9.314971,  4.672610,  50},
		{9.540016,  4.500895,  50},
		{9.762249,  4.444664,  50},
		{9.984567,  4.446364,  50},
		{10.207294,  4.454543,  50},
		{10.429197,  4.438058,  50},
		{10.648412,  4.384296,  50},
		{10.863008,  4.291925,  50},
		{11.071247,  4.164783,  50},
		{11.271662,  4.008290,  50},
		{11.463051,  3.827791,  50},
		{11.644448,  3.627925,  50},
		{11.815073,  3.412505,  50},
		{11.974302,  3.184585,  50},
		{12.121632,  2.946587,  50},
		{12.256653,  2.700429,  50},
		{12.379035,  2.447639,  50},
		{12.488507,  2.189445,  50},
		{12.584849,  1.926846,  50},
		{12.667883,  1.660671,  50},
		{12.737464,  1.391615,  50},
		{12.793478,  1.120276,  50},
		{12.835837,  0.847180,  50},
		{12.864477,  0.572801,  50},
		{12.879355,  0.297574,  50},
		{12.883624,  0.085376,  50},
		{12.883898,  0.005479,  50},
		{12.883898,  0.000000,  50}
};

const int kP3LeftSz = 128;

const double kP3Left_rightprofile[][3] = {
		{0.003676,  0.147059,  50},
		{0.017458,  0.275638,  50},
		{0.045030,  0.551427,  50},
		{0.086406,  0.827520,  50},
		{0.141609,  1.104072,  50},
		{0.210671,  1.381242,  50},
		{0.293631,  1.659195,  50},
		{0.390536,  1.938099,  50},
		{0.501443,  2.218128,  50},
		{0.626416,  2.499464,  50},
		{0.765530,  2.782288,  50},
		{0.918870,  3.066789,  50},
		{1.086527,  3.353155,  50},
		{1.268606,  3.641575,  50},
		{1.465218,  3.932234,  50},
		{1.676484,  4.225315,  50},
		{1.902533,  4.520996,  50},
		{2.143506,  4.819445,  50},
		{2.399547,  5.120827,  50},
		{2.670812,  5.425299,  50},
		{2.957462,  5.733011,  50},
		{3.259668,  6.044112,  50},
		{3.577606,  6.358751,  50},
		{3.911460,  6.677080,  50},
		{4.261423,  6.999258,  50},
		{4.627695,  7.325458,  50},
		{5.010489,  7.655863,  50},
		{5.410022,  7.990674,  50},
		{5.826527,  8.330102,  50},
		{6.260245,  8.674360,  50},
		{6.711428,  9.023651,  50},
		{7.180335,  9.378135,  50},
		{7.667229,  9.737892,  50},
		{8.172372,  10.102859,  50},
		{8.692148,  10.395515,  50},
		{9.218932,  10.535689,  50},
		{9.748780,  10.596950,  50},
		{10.254612,  10.116631,  50},
		{10.765639,  10.220549,  50},
		{11.283544,  10.358091,  50},
		{11.809142,  10.511966,  50},
		{12.343635,  10.689854,  50},
		{12.888676,  10.900827,  50},
		{13.446425,  11.154991,  50},
		{14.019503,  11.461550,  50},
		{14.610669,  11.823317,  50},
		{15.221931,  12.225248,  50},
		{15.852845,  12.618277,  50},
		{16.498527,  12.913632,  50},
		{17.149329,  13.016043,  50},
		{17.793886,  12.891135,  50},
		{18.423643,  12.595157,  50},
		{19.034994,  12.227014,  50},
		{19.628279,  11.865699,  50},
		{20.205781,  11.550031,  50},
		{20.770260,  11.289589,  50},
		{21.324263,  11.080061,  50},
		{21.832833,  10.171393,  50},
		{22.332833,  10.000000,  50},
		{22.832833,  10.000000,  50},
		{23.332833,  10.000000,  50},
		{23.832833,  10.000000,  50},
		{24.332833,  10.000000,  50},
		{24.832833,  10.000000,  50},
		{25.332833,  10.000000,  50},
		{25.832833,  10.000000,  50},
		{26.332833,  10.000000,  50},
		{26.832833,  10.000000,  50},
		{27.332833,  10.000000,  50},
		{27.832833,  10.000000,  50},
		{28.332833,  10.000000,  50},
		{28.832833,  10.000000,  50},
		{29.332833,  10.000000,  50},
		{29.832833,  10.000000,  50},
		{30.332833,  10.000000,  50},
		{30.832833,  10.000000,  50},
		{31.332833,  10.000000,  50},
		{31.832833,  10.000000,  50},
		{32.332833,  10.000000,  50},
		{32.832833,  10.000000,  50},
		{33.332833,  10.000000,  50},
		{33.800429,  9.351925,  50},
		{34.284149,  9.674409,  50},
		{34.790964,  10.136299,  50},
		{35.321902,  10.618755,  50},
		{35.881806,  11.198078,  50},
		{36.480225,  11.968377,  50},
		{37.131386,  13.023213,  50},
		{37.846518,  14.302639,  50},
		{38.609137,  15.252395,  50},
		{39.364071,  15.098676,  50},
		{40.065468,  14.027941,  50},
		{40.704219,  12.775010,  50},
		{41.288194,  11.679515,  50},
		{41.829059,  10.817301,  50},
		{42.342556,  10.269941,  50},
		{42.854858,  10.246034,  50},
		{43.372456,  10.351961,  50},
		{43.901189,  10.574661,  50},
		{44.445599,  10.888192,  50},
		{45.003583,  11.159685,  50},
		{45.560456,  11.137458,  50},
		{46.092486,  10.640595,  50},
		{46.581259,  9.775473,  50},
		{47.021606,  8.806932,  50},
		{47.417270,  7.913285,  50},
		{47.774544,  7.145482,  50},
		{48.099158,  6.492272,  50},
		{48.395534,  5.927522,  50},
		{48.666912,  5.427556,  50},
		{48.915645,  4.974661,  50},
		{49.143466,  4.556427,  50},
		{49.351684,  4.164365,  50},
		{49.541320,  3.792714,  50},
		{49.713199,  3.437575,  50},
		{49.868014,  3.096306,  50},
		{50.006369,  2.767104,  50},
		{50.128804,  2.448700,  50},
		{50.235811,  2.140141,  50},
		{50.327843,  1.840622,  50},
		{50.405311,  1.549364,  50},
		{50.468587,  1.265519,  50},
		{50.517992,  0.988113,  50},
		{50.553793,  0.716015,  50},
		{50.576190,  0.447938,  50},
		{50.586337,  0.202936,  50},
		{50.588615,  0.045568,  50},
		{50.588615,  0.000000,  50}
};

const double kP3Left_leftprofile[][3] = {
		{0.003676,  0.147059,  50},
		{0.019306,  0.312597,  50},
		{0.050558,  0.625043,  50},
		{0.097418,  0.937185,  50},
		{0.159861,  1.248868,  50},
		{0.237858,  1.559932,  50},
		{0.331368,  1.870213,  50},
		{0.440345,  2.179542,  50},
		{0.564733,  2.487745,  50},
		{0.704465,  2.794642,  50},
		{0.859467,  3.100050,  50},
		{1.029656,  3.403780,  50},
		{1.214939,  3.705646,  50},
		{1.415212,  4.005458,  50},
		{1.630363,  4.303031,  50},
		{1.860272,  4.598183,  50},
		{2.104809,  4.890736,  50},
		{2.363835,  5.180522,  50},
		{2.637204,  5.467376,  50},
		{2.924761,  5.751142,  50},
		{3.226344,  6.031668,  50},
		{3.541785,  6.308807,  50},
		{3.870905,  6.582409,  50},
		{4.213521,  6.852321,  50},
		{4.569440,  7.118383,  50},
		{4.938462,  7.380423,  50},
		{5.320374,  7.638254,  50},
		{5.714958,  7.891675,  50},
		{6.121982,  8.140471,  50},
		{6.541203,  8.384427,  50},
		{6.972370,  8.623336,  50},
		{7.415221,  8.857033,  50},
		{7.869493,  9.085433,  50},
		{8.334923,  9.308593,  50},
		{8.807772,  9.456980,  50},
		{9.280958,  9.463725,  50},
		{9.751074,  9.402322,  50},
		{10.245030,  9.879121,  50},
		{10.733998,  9.779351,  50},
		{11.216080,  9.641647,  50},
		{11.690455,  9.487498,  50},
		{12.155914,  9.309174,  50},
		{12.610789,  9.097515,  50},
		{13.052903,  8.842281,  50},
		{13.479607,  8.534079,  50},
		{13.888101,  8.169871,  50},
		{14.276330,  7.764587,  50},
		{14.644711,  7.367621,  50},
		{14.998155,  7.068874,  50},
		{15.346415,  6.965200,  50},
		{15.700997,  7.091646,  50},
		{16.070547,  7.390995,  50},
		{16.458687,  7.762809,  50},
		{16.865046,  8.127169,  50},
		{17.287299,  8.445052,  50},
		{17.722649,  8.707010,  50},
		{18.168527,  8.917554,  50},
		{18.659715,  9.823769,  50},
		{19.159715,  10.000000,  50},
		{19.659715,  10.000000,  50},
		{20.159715,  10.000000,  50},
		{20.659715,  10.000000,  50},
		{21.159715,  10.000000,  50},
		{21.659715,  10.000000,  50},
		{22.159715,  10.000000,  50},
		{22.659715,  10.000000,  50},
		{23.159715,  10.000000,  50},
		{23.659715,  10.000000,  50},
		{24.159715,  10.000000,  50},
		{24.659715,  10.000000,  50},
		{25.159715,  10.000000,  50},
		{25.659715,  10.000000,  50},
		{26.159715,  10.000000,  50},
		{26.659715,  10.000000,  50},
		{27.159715,  10.000000,  50},
		{27.659715,  10.000000,  50},
		{28.159715,  10.000000,  50},
		{28.659715,  10.000000,  50},
		{29.159715,  10.000000,  50},
		{29.659715,  10.000000,  50},
		{30.159715,  10.000000,  50},
		{30.691925,  10.644204,  50},
		{31.208194,  10.325368,  50},
		{31.701377,  9.863656,  50},
		{32.170400,  9.380457,  50},
		{32.610349,  8.798987,  50},
		{33.011534,  8.023697,  50},
		{33.359435,  6.958025,  50},
		{33.642388,  5.659051,  50},
		{33.876885,  4.689957,  50},
		{34.119242,  4.847138,  50},
		{34.413877,  5.892688,  50},
		{34.760075,  6.923960,  50},
		{35.137150,  7.541502,  50},
		{35.528130,  7.819599,  50},
		{35.916913,  7.775662,  50},
		{36.277641,  7.214573,  50},
		{36.603550,  6.518180,  50},
		{36.888736,  5.703712,  50},
		{37.128582,  4.796921,  50},
		{37.325174,  3.931847,  50},
		{37.493350,  3.363518,  50},
		{37.657115,  3.275286,  50},
		{37.835033,  3.558372,  50},
		{38.032242,  3.944176,  50},
		{38.244899,  4.253132,  50},
		{38.466633,  4.434689,  50},
		{38.691669,  4.500721,  50},
		{38.915559,  4.477790,  50},
		{39.135049,  4.389809,  50},
		{39.347780,  4.254617,  50},
		{39.552014,  4.084688,  50},
		{39.746442,  3.888548,  50},
		{39.930041,  3.671977,  50},
		{40.101985,  3.438883,  50},
		{40.261581,  3.191915,  50},
		{40.408224,  2.932879,  50},
		{40.541377,  2.663046,  50},
		{40.660545,  2.383369,  50},
		{40.765278,  2.094653,  50},
		{40.855162,  1.797677,  50},
		{40.929826,  1.493289,  50},
		{40.988949,  1.182461,  50},
		{41.032266,  0.866325,  50},
		{41.059574,  0.546167,  50},
		{41.072000,  0.248526,  50},
		{41.074795,  0.055899,  50},
		{41.074795,  0.000000,  50}
};

const int kP2RightSz= 50;

const double kP2Right_rightprofile[][3] = {
		{0.003721,  0.148849,  50},
		{0.016222,  0.250022,  50},
		{0.041237,  0.500294,  50},
		{0.078791,  0.751087,  50},
		{0.128927,  1.002718,  50},
		{0.191705,  1.255565,  50},
		{0.267210,  1.510087,  50},
		{0.355551,  1.766834,  50},
		{0.456874,  2.026452,  50},
		{0.571358,  2.289680,  50},
		{0.699225,  2.557335,  50},
		{0.840739,  2.830286,  50},
		{0.996210,  3.109420,  50},
		{1.165990,  3.395595,  50},
		{1.350470,  3.689603,  50},
		{1.550076,  3.992123,  50},
		{1.765261,  4.303696,  50},
		{1.996497,  4.624723,  50},
		{2.244271,  4.955475,  50},
		{2.509078,  5.296136,  50},
		{2.791421,  5.646860,  50},
		{3.091813,  6.007845,  50},
		{3.410784,  6.379415,  50},
		{3.745188,  6.688078,  50},
		{4.087294,  6.842120,  50},
		{4.428954,  6.833210,  50},
		{4.762966,  6.680240,  50},
		{5.085690,  6.454487,  50},
		{5.396601,  6.218220,  50},
		{5.695188,  5.971737,  50},
		{5.980950,  5.715229,  50},
		{6.253392,  5.448851,  50},
		{6.512032,  5.172801,  50},
		{6.756401,  4.887368,  50},
		{6.986050,  4.592976,  50},
		{7.200559,  4.290191,  50},
		{7.399545,  3.979710,  50},
		{7.582662,  3.662338,  50},
		{7.749608,  3.338937,  50},
		{7.900128,  3.010394,  50},
		{8.034007,  2.677569,  50},
		{8.151070,  2.341266,  50},
		{8.251180,  2.002207,  50},
		{8.334231,  1.661021,  50},
		{8.400143,  1.318243,  50},
		{8.448859,  0.974317,  50},
		{8.480340,  0.629610,  50},
		{8.495323,  0.299669,  50},
		{8.498879,  0.071117,  50},
		{8.498879,  0.000000,  50}
};

const double kP2Right_leftprofile[][3] = {
		{0.003721,  0.148849,  50},
		{0.020990,  0.345374,  50},
		{0.055515,  0.690498,  50},
		{0.107270,  1.035098,  50},
		{0.176213,  1.378859,  50},
		{0.262283,  1.721400,  50},
		{0.365396,  2.062263,  50},
		{0.485441,  2.400898,  50},
		{0.622274,  2.736658,  50},
		{0.775714,  3.068804,  50},
		{0.945540,  3.396521,  50},
		{1.131487,  3.718942,  50},
		{1.333246,  4.035180,  50},
		{1.550465,  4.344379,  50},
		{1.782753,  4.645751,  50},
		{2.029683,  4.938618,  50},
		{2.290805,  5.222440,  50},
		{2.565646,  5.496818,  50},
		{2.853720,  5.761481,  50},
		{3.154533,  6.016244,  50},
		{3.467580,  6.260952,  50},
		{3.792350,  6.495401,  50},
		{4.128313,  6.719265,  50},
		{4.471172,  6.857178,  50},
		{4.812459,  6.825727,  50},
		{5.144121,  6.633238,  50},
		{5.459789,  6.313362,  50},
		{5.756973,  5.943681,  50},
		{6.036198,  5.584513,  50},
		{6.297977,  5.235566,  50},
		{6.542809,  4.896652,  50},
		{6.771190,  4.567616,  50},
		{6.983603,  4.248263,  50},
		{7.180518,  3.938302,  50},
		{7.362384,  3.637308,  50},
		{7.529620,  3.344715,  50},
		{7.682611,  3.059821,  50},
		{7.821702,  2.781822,  50},
		{7.947194,  2.509851,  50},
		{8.059345,  2.243021,  50},
		{8.158369,  1.980471,  50},
		{8.244439,  1.721396,  50},
		{8.317692,  1.465074,  50},
		{8.378236,  1.210873,  50},
		{8.426149,  0.958262,  50},
		{8.461489,  0.706797,  50},
		{8.484294,  0.456109,  50},
		{8.495141,  0.216923,  50},
		{8.497714,  0.051464,  50},
		{8.497714,  0.000000,  50}

};

const int kP2LeftSz = 62;

const double kP2Left_rightprofile[][3] = {
		{0.003624,  0.144953,  50},
		{0.021863,  0.364777,  50},
		{0.058450,  0.731753,  50},
		{0.113613,  1.103245,  50},
		{0.187703,  1.481811,  50},
		{0.281221,  1.870367,  50},
		{0.394836,  2.272294,  50},
		{0.529411,  2.691489,  50},
		{0.686024,  3.132271,  50},
		{0.865971,  3.598943,  50},
		{1.070704,  4.094660,  50},
		{1.301657,  4.619056,  50},
		{1.559864,  5.164136,  50},
		{1.845310,  5.708923,  50},
		{2.156121,  6.216217,  50},
		{2.488037,  6.638312,  50},
		{2.834830,  6.935869,  50},
		{3.189831,  7.100022,  50},
		{3.547699,  7.157365,  50},
		{3.905320,  7.152406,  50},
		{4.261564,  7.124892,  50},
		{4.616475,  7.098213,  50},
		{4.970436,  7.079229,  50},
		{5.323553,  7.062331,  50},
		{5.675179,  7.032527,  50},
		{6.074022,  7.976861,  50},
		{6.489537,  8.310297,  50},
		{6.895306,  8.115382,  50},
		{7.289841,  7.890692,  50},
		{7.665803,  7.519244,  50},
		{8.008027,  6.844477,  50},
		{8.303000,  5.899455,  50},
		{8.548020,  4.900402,  50},
		{8.752648,  4.092564,  50},
		{8.937098,  3.689010,  50},
		{9.122626,  3.710550,  50},
		{9.320462,  3.956727,  50},
		{9.531275,  4.216245,  50},
		{9.750729,  4.389083,  50},
		{9.976587,  4.517158,  50},
		{10.199891,  4.466093,  50},
		{10.419219,  4.386559,  50},
		{10.633679,  4.289199,  50},
		{10.842150,  4.169412,  50},
		{11.043453,  4.026059,  50},
		{11.236445,  3.859838,  50},
		{11.420057,  3.672244,  50},
		{11.593307,  3.465004,  50},
		{11.755298,  3.239821,  50},
		{11.905213,  2.998299,  50},
		{12.042310,  2.741947,  50},
		{12.165921,  2.472217,  50},
		{12.275448,  2.190541,  50},
		{12.370366,  1.898363,  50},
		{12.450224,  1.597144,  50},
		{12.514642,  1.288373,  50},
		{12.563320,  0.973550,  50},
		{12.596029,  0.654182,  50},
		{12.612618,  0.331778,  50},
		{12.616965,  0.086946,  50},
		{12.617063,  0.001960,  50},
		{12.617063,  0.000000,  50}

};

const double kP2Left_leftprofile[][3] = {
		{0.003624,  0.144953,  50},
		{0.014375,  0.215033,  50},
		{0.035769,  0.427865,  50},
		{0.067578,  0.636176,  50},
		{0.109448,  0.837406,  50},
		{0.160880,  1.028633,  50},
		{0.221203,  1.206468,  50},
		{0.289553,  1.367003,  50},
		{0.364848,  1.505900,  50},
		{0.445790,  1.618830,  50},
		{0.530920,  1.702599,  50},
		{0.618796,  1.757526,  50},
		{0.708374,  1.791569,  50},
		{0.799660,  1.825710,  50},
		{0.894523,  1.897259,  50},
		{0.997231,  2.054171,  50},
		{1.114035,  2.336081,  50},
		{1.251635,  2.751995,  50},
		{1.415396,  3.275209,  50},
		{1.608443,  3.860949,  50},
		{1.831905,  4.469233,  50},
		{2.085732,  5.076538,  50},
		{2.369530,  5.675960,  50},
		{2.683184,  6.273097,  50},
		{3.027330,  6.882914,  50},
		{3.353093,  6.515250,  50},
		{3.691285,  6.763852,  50},
		{4.068253,  7.539363,  50},
		{4.485449,  8.343909,  50},
		{4.942907,  9.149172,  50},
		{5.434147,  9.824798,  50},
		{5.951027,  10.337583,  50},
		{6.488765,  10.754760,  50},
		{7.037673,  10.978175,  50},
		{7.577745,  10.801426,  50},
		{8.087938,  10.203871,  50},
		{8.557082,  9.382885,  50},
		{8.984457,  8.547489,  50},
		{9.374324,  7.797343,  50},
		{9.728820,  7.089922,  50},
		{10.056974,  6.563084,  50},
		{10.360139,  6.063297,  50},
		{10.639198,  5.581175,  50},
		{10.895266,  5.121357,  50},
		{11.129517,  4.685018,  50},
		{11.343091,  4.271490,  50},
		{11.537056,  3.879300,  50},
		{11.712393,  3.506738,  50},
		{11.869999,  3.152110,  50},
		{12.010690,  2.813817,  50},
		{12.135207,  2.490355,  50},
		{12.244221,  2.180273,  50},
		{12.338328,  1.882139,  50},
		{12.418053,  1.594509,  50},
		{12.483849,  1.315919,  50},
		{12.536093,  1.044882,  50},
		{12.575088,  0.779897,  50},
		{12.601061,  0.519454,  50},
		{12.614163,  0.262049,  50},
		{12.617589,  0.068519,  50},
		{12.617666,  0.001544,  50},
		{12.617666,  0.000000,  50}

};

const int kP1RightSz = 128;

const double kP1Right_rightprofile[][3] = {
		{0.003676,  0.147059,  50},
		{0.019306,  0.312597,  50},
		{0.050558,  0.625043,  50},
		{0.097418,  0.937185,  50},
		{0.159861,  1.248868,  50},
		{0.237858,  1.559932,  50},
		{0.331368,  1.870213,  50},
		{0.440345,  2.179542,  50},
		{0.564733,  2.487745,  50},
		{0.704465,  2.794642,  50},
		{0.859467,  3.100050,  50},
		{1.029656,  3.403780,  50},
		{1.214939,  3.705646,  50},
		{1.415212,  4.005458,  50},
		{1.630363,  4.303031,  50},
		{1.860272,  4.598183,  50},
		{2.104809,  4.890736,  50},
		{2.363835,  5.180522,  50},
		{2.637204,  5.467376,  50},
		{2.924761,  5.751142,  50},
		{3.226344,  6.031668,  50},
		{3.541785,  6.308807,  50},
		{3.870905,  6.582409,  50},
		{4.213521,  6.852321,  50},
		{4.569440,  7.118383,  50},
		{4.938462,  7.380423,  50},
		{5.320374,  7.638254,  50},
		{5.714958,  7.891675,  50},
		{6.121982,  8.140471,  50},
		{6.541203,  8.384427,  50},
		{6.972370,  8.623336,  50},
		{7.415221,  8.857033,  50},
		{7.869493,  9.085433,  50},
		{8.334923,  9.308593,  50},
		{8.807772,  9.456980,  50},
		{9.280958,  9.463725,  50},
		{9.751074,  9.402322,  50},
		{10.245030,  9.879121,  50},
		{10.733998,  9.779351,  50},
		{11.216080,  9.641647,  50},
		{11.690455,  9.487498,  50},
		{12.155914,  9.309174,  50},
		{12.610789,  9.097515,  50},
		{13.052903,  8.842281,  50},
		{13.479607,  8.534079,  50},
		{13.888101,  8.169871,  50},
		{14.276330,  7.764587,  50},
		{14.644711,  7.367621,  50},
		{14.998155,  7.068874,  50},
		{15.346415,  6.965200,  50},
		{15.700997,  7.091646,  50},
		{16.070547,  7.390995,  50},
		{16.458687,  7.762809,  50},
		{16.865046,  8.127169,  50},
		{17.287299,  8.445052,  50},
		{17.722649,  8.707010,  50},
		{18.168527,  8.917554,  50},
		{18.659715,  9.823769,  50},
		{19.159715,  10.000000,  50},
		{19.659715,  10.000000,  50},
		{20.159715,  10.000000,  50},
		{20.659715,  10.000000,  50},
		{21.159715,  10.000000,  50},
		{21.659715,  10.000000,  50},
		{22.159715,  10.000000,  50},
		{22.659715,  10.000000,  50},
		{23.159715,  10.000000,  50},
		{23.659715,  10.000000,  50},
		{24.159715,  10.000000,  50},
		{24.659715,  10.000000,  50},
		{25.159715,  10.000000,  50},
		{25.659715,  10.000000,  50},
		{26.159715,  10.000000,  50},
		{26.659715,  10.000000,  50},
		{27.159715,  10.000000,  50},
		{27.659715,  10.000000,  50},
		{28.159715,  10.000000,  50},
		{28.659715,  10.000000,  50},
		{29.159715,  10.000000,  50},
		{29.659715,  10.000000,  50},
		{30.159715,  10.000000,  50},
		{30.691925,  10.644204,  50},
		{31.208194,  10.325368,  50},
		{31.701377,  9.863656,  50},
		{32.170400,  9.380457,  50},
		{32.610349,  8.798987,  50},
		{33.011534,  8.023697,  50},
		{33.359435,  6.958025,  50},
		{33.642388,  5.659051,  50},
		{33.876885,  4.689957,  50},
		{34.119242,  4.847138,  50},
		{34.413877,  5.892688,  50},
		{34.760075,  6.923960,  50},
		{35.137150,  7.541502,  50},
		{35.528130,  7.819599,  50},
		{35.916913,  7.775662,  50},
		{36.277641,  7.214573,  50},
		{36.603550,  6.518180,  50},
		{36.888736,  5.703712,  50},
		{37.128582,  4.796921,  50},
		{37.325174,  3.931847,  50},
		{37.493350,  3.363518,  50},
		{37.657115,  3.275286,  50},
		{37.835033,  3.558372,  50},
		{38.032242,  3.944176,  50},
		{38.244899,  4.253132,  50},
		{38.466633,  4.434689,  50},
		{38.691669,  4.500721,  50},
		{38.915559,  4.477790,  50},
		{39.135049,  4.389809,  50},
		{39.347780,  4.254617,  50},
		{39.552014,  4.084688,  50},
		{39.746442,  3.888548,  50},
		{39.930041,  3.671977,  50},
		{40.101985,  3.438883,  50},
		{40.261581,  3.191915,  50},
		{40.408224,  2.932879,  50},
		{40.541377,  2.663046,  50},
		{40.660545,  2.383369,  50},
		{40.765278,  2.094653,  50},
		{40.855162,  1.797677,  50},
		{40.929826,  1.493289,  50},
		{40.988949,  1.182461,  50},
		{41.032266,  0.866325,  50},
		{41.059574,  0.546167,  50},
		{41.072000,  0.248526,  50},
		{41.074795,  0.055899,  50},
		{41.074795,  0.000000,  50}

};

const double kP1Right_leftprofile[][3] = {
		{0.003676,  0.147059,  50},
		{0.017458,  0.275638,  50},
		{0.045030,  0.551427,  50},
		{0.086406,  0.827520,  50},
		{0.141609,  1.104072,  50},
		{0.210671,  1.381242,  50},
		{0.293631,  1.659195,  50},
		{0.390536,  1.938099,  50},
		{0.501443,  2.218128,  50},
		{0.626416,  2.499464,  50},
		{0.765530,  2.782288,  50},
		{0.918870,  3.066789,  50},
		{1.086527,  3.353155,  50},
		{1.268606,  3.641575,  50},
		{1.465218,  3.932234,  50},
		{1.676484,  4.225315,  50},
		{1.902533,  4.520996,  50},
		{2.143506,  4.819445,  50},
		{2.399547,  5.120827,  50},
		{2.670812,  5.425299,  50},
		{2.957462,  5.733011,  50},
		{3.259668,  6.044112,  50},
		{3.577606,  6.358751,  50},
		{3.911460,  6.677080,  50},
		{4.261423,  6.999258,  50},
		{4.627695,  7.325458,  50},
		{5.010489,  7.655863,  50},
		{5.410022,  7.990674,  50},
		{5.826527,  8.330102,  50},
		{6.260245,  8.674360,  50},
		{6.711428,  9.023651,  50},
		{7.180335,  9.378135,  50},
		{7.667229,  9.737892,  50},
		{8.172372,  10.102859,  50},
		{8.692148,  10.395515,  50},
		{9.218932,  10.535689,  50},
		{9.748780,  10.596950,  50},
		{10.254612,  10.116631,  50},
		{10.765639,  10.220549,  50},
		{11.283544,  10.358091,  50},
		{11.809142,  10.511966,  50},
		{12.343635,  10.689854,  50},
		{12.888676,  10.900827,  50},
		{13.446425,  11.154991,  50},
		{14.019503,  11.461550,  50},
		{14.610669,  11.823317,  50},
		{15.221931,  12.225248,  50},
		{15.852845,  12.618277,  50},
		{16.498527,  12.913632,  50},
		{17.149329,  13.016043,  50},
		{17.793886,  12.891135,  50},
		{18.423643,  12.595157,  50},
		{19.034994,  12.227014,  50},
		{19.628279,  11.865699,  50},
		{20.205781,  11.550031,  50},
		{20.770260,  11.289589,  50},
		{21.324263,  11.080061,  50},
		{21.832833,  10.171393,  50},
		{22.332833,  10.000000,  50},
		{22.832833,  10.000000,  50},
		{23.332833,  10.000000,  50},
		{23.832833,  10.000000,  50},
		{24.332833,  10.000000,  50},
		{24.832833,  10.000000,  50},
		{25.332833,  10.000000,  50},
		{25.832833,  10.000000,  50},
		{26.332833,  10.000000,  50},
		{26.832833,  10.000000,  50},
		{27.332833,  10.000000,  50},
		{27.832833,  10.000000,  50},
		{28.332833,  10.000000,  50},
		{28.832833,  10.000000,  50},
		{29.332833,  10.000000,  50},
		{29.832833,  10.000000,  50},
		{30.332833,  10.000000,  50},
		{30.832833,  10.000000,  50},
		{31.332833,  10.000000,  50},
		{31.832833,  10.000000,  50},
		{32.332833,  10.000000,  50},
		{32.832833,  10.000000,  50},
		{33.332833,  10.000000,  50},
		{33.800429,  9.351925,  50},
		{34.284149,  9.674409,  50},
		{34.790964,  10.136299,  50},
		{35.321902,  10.618755,  50},
		{35.881806,  11.198078,  50},
		{36.480225,  11.968377,  50},
		{37.131386,  13.023213,  50},
		{37.846518,  14.302639,  50},
		{38.609137,  15.252395,  50},
		{39.364071,  15.098676,  50},
		{40.065468,  14.027941,  50},
		{40.704219,  12.775010,  50},
		{41.288194,  11.679515,  50},
		{41.829059,  10.817301,  50},
		{42.342556,  10.269941,  50},
		{42.854858,  10.246034,  50},
		{43.372456,  10.351961,  50},
		{43.901189,  10.574661,  50},
		{44.445599,  10.888192,  50},
		{45.003583,  11.159685,  50},
		{45.560456,  11.137458,  50},
		{46.092486,  10.640595,  50},
		{46.581259,  9.775473,  50},
		{47.021606,  8.806932,  50},
		{47.417270,  7.913285,  50},
		{47.774544,  7.145482,  50},
		{48.099158,  6.492272,  50},
		{48.395534,  5.927522,  50},
		{48.666912,  5.427556,  50},
		{48.915645,  4.974661,  50},
		{49.143466,  4.556427,  50},
		{49.351684,  4.164365,  50},
		{49.541320,  3.792714,  50},
		{49.713199,  3.437575,  50},
		{49.868014,  3.096306,  50},
		{50.006369,  2.767104,  50},
		{50.128804,  2.448700,  50},
		{50.235811,  2.140141,  50},
		{50.327843,  1.840622,  50},
		{50.405311,  1.549364,  50},
		{50.468587,  1.265519,  50},
		{50.517992,  0.988113,  50},
		{50.553793,  0.716015,  50},
		{50.576190,  0.447938,  50},
		{50.586337,  0.202936,  50},
		{50.588615,  0.045568,  50},
		{50.588615,  0.000000,  50}

};
const int kP1LeftSz = 66;

const double kP1Left_rightprofile[][3] = {
		{0.003639,  0.145546,  50},
		{0.021498,  0.357186,  50},
		{0.057205,  0.714144,  50},
		{0.110735,  1.070589,  50},
		{0.182041,  1.426125,  50},
		{0.271051,  1.780193,  50},
		{0.377652,  2.132025,  50},
		{0.501682,  2.480610,  50},
		{0.642916,  2.824681,  50},
		{0.801053,  3.162730,  50},
		{0.975706,  3.493065,  50},
		{1.166401,  3.813903,  50},
		{1.372576,  4.123493,  50},
		{1.593589,  4.420265,  50},
		{1.828737,  4.702957,  50},
		{2.077272,  4.970696,  50},
		{2.338423,  5.223015,  50},
		{2.611411,  5.459778,  50},
		{2.895463,  5.681029,  50},
		{3.189802,  5.886790,  50},
		{3.493644,  6.076831,  50},
		{3.806167,  6.250457,  50},
		{4.126483,  6.406328,  50},
		{4.453602,  6.542377,  50},
		{4.786396,  6.655885,  50},
		{5.123590,  6.743873,  50},
		{5.463794,  6.804076,  50},
		{5.805639,  6.836904,  50},
		{6.148075,  6.848722,  50},
		{6.490880,  6.856099,  50},
		{6.835313,  6.888657,  50},
		{7.196384,  7.221417,  50},
		{7.575362,  7.579572,  50},
		{7.931408,  7.120923,  50},
		{8.259605,  6.563938,  50},
		{8.559199,  5.991882,  50},
		{8.831680,  5.449607,  50},
		{9.081341,  4.993216,  50},
		{9.314971,  4.672610,  50},
		{9.540016,  4.500895,  50},
		{9.762249,  4.444664,  50},
		{9.984567,  4.446364,  50},
		{10.207294,  4.454543,  50},
		{10.429197,  4.438058,  50},
		{10.648412,  4.384296,  50},
		{10.863008,  4.291925,  50},
		{11.071247,  4.164783,  50},
		{11.271662,  4.008290,  50},
		{11.463051,  3.827791,  50},
		{11.644448,  3.627925,  50},
		{11.815073,  3.412505,  50},
		{11.974302,  3.184585,  50},
		{12.121632,  2.946587,  50},
		{12.256653,  2.700429,  50},
		{12.379035,  2.447639,  50},
		{12.488507,  2.189445,  50},
		{12.584849,  1.926846,  50},
		{12.667883,  1.660671,  50},
		{12.737464,  1.391615,  50},
		{12.793478,  1.120276,  50},
		{12.835837,  0.847180,  50},
		{12.864477,  0.572801,  50},
		{12.879355,  0.297574,  50},
		{12.883624,  0.085376,  50},
		{12.883898,  0.005479,  50},
		{12.883898,  0.000000,  50}
};

const double kP1Left_leftprofile[][3] = {
		{0.003639,  0.145546,  50},
		{0.014888,  0.224997,  50},
		{0.037400,  0.450220,  50},
		{0.071197,  0.675954,  50},
		{0.116327,  0.902592,  50},
		{0.172861,  1.130692,  50},
		{0.240913,  1.361022,  50},
		{0.320642,  1.594592,  50},
		{0.412276,  1.832669,  50},
		{0.516114,  2.076763,  50},
		{0.632542,  2.328567,  50},
		{0.762036,  2.589869,  50},
		{0.905157,  2.862424,  50},
		{1.062547,  3.147806,  50},
		{1.234911,  3.447282,  50},
		{1.422998,  3.761729,  50},
		{1.627578,  4.091614,  50},
		{1.849432,  4.437075,  50},
		{2.089335,  4.798063,  50},
		{2.348063,  5.174551,  50},
		{2.626401,  5.566758,  50},
		{2.925169,  5.975370,  50},
		{3.245254,  6.401706,  50},
		{3.587645,  6.847808,  50},
		{3.953463,  7.316359,  50},
		{4.343977,  7.810288,  50},
		{4.760567,  8.331789,  50},
		{5.204585,  8.880371,  50},
		{5.677065,  9.449595,  50},
		{6.178210,  10.022892,  50},
		{6.706749,  10.570790,  50},
		{7.240288,  10.670781,  50},
		{7.756822,  10.330677,  50},
		{8.275550,  10.374555,  50},
		{8.793521,  10.359426,  50},
		{9.310901,  10.347601,  50},
		{9.826206,  10.306109,  50},
		{10.335175,  10.179374,  50},
		{10.831073,  9.917964,  50},
		{11.306512,  9.508781,  50},
		{11.755749,  8.984741,  50},
		{12.175889,  8.402799,  50},
		{12.566591,  7.814040,  50},
		{12.929067,  7.249519,  50},
		{13.265163,  6.721908,  50},
		{13.576794,  6.232632,  50},
		{13.865691,  5.777943,  50},
		{14.133315,  5.352480,  50},
		{14.380863,  4.950945,  50},
		{14.609299,  4.568725,  50},
		{14.819400,  4.202026,  50},
		{15.011791,  3.847804,  50},
		{15.186973,  3.503647,  50},
		{15.345355,  3.167640,  50},
		{15.487268,  2.838259,  50},
		{15.612982,  2.514278,  50},
		{15.722717,  2.194698,  50},
		{15.816651,  1.878693,  50},
		{15.894930,  1.565568,  50},
		{15.957666,  1.254724,  50},
		{16.004948,  0.945637,  50},
		{16.036839,  0.637834,  50},
		{16.053383,  0.330877,  50},
		{16.058127,  0.094871,  50},
		{16.058431,  0.006088,  50},
		{16.058431,  0.000000,  50}
};





const int kRRSwitchProfileSz =80;

const double kRRSwitch_LProfile[][3]={
		{0.002498,  0.099916,  50},
		{0.015182,  0.253689,  50},
		{0.040559,  0.507536,  50},
		{0.078643,  0.761677,  50},
		{0.129453,  1.016197,  50},
		{0.193008,  1.271102,  50},
		{0.269322,  1.526291,  50},
		{0.358398,  1.781519,  50},
		{0.460217,  2.036364,  50},
		{0.574726,  2.290194,  50},
		{0.701833,  2.542138,  50},
		{0.841387,  2.791079,  50},
		{0.993170,  3.035667,  50},
		{1.156889,  3.274367,  50},
		{1.332166,  3.505539,  50},
		{1.518544,  3.727564,  50},
		{1.715493,  3.938984,  50},
		{1.922425,  4.138642,  50},
		{2.138715,  4.325793,  50},
		{2.363723,  4.500155,  50},
		{2.596817,  4.661885,  50},
		{2.837391,  4.811487,  50},
		{3.084874,  4.949652,  50},
		{3.338728,  5.077085,  50},
		{3.598444,  5.194318,  50},
		{3.863521,  5.301548,  50},
		{4.133446,  5.398497,  50},
		{4.407662,  5.484315,  50},
		{4.685537,  5.557503,  50},
		{4.966332,  5.615905,  50},
		{5.249171,  5.656776,  50},
		{5.533023,  5.677041,  50},
		{5.816720,  5.673928,  50},
		{6.099031,  5.646231,  50},
		{6.378860,  5.596566,  50},
		{6.655591,  5.534634,  50},
		{6.929618,  5.480540,  50},
		{7.202877,  5.465174,  50},
		{7.477246,  5.487390,  50},
		{7.767408,  5.803237,  50},
		{8.087167,  6.395175,  50},
		{8.390632,  6.069299,  50},
		{8.675227,  5.691902,  50},
		{8.940272,  5.300907,  50},
		{9.185721,  4.908976,  50},
		{9.412575,  4.537077,  50},
		{9.623192,  4.212347,  50},
		{9.821215,  3.960458,  50},
		{10.010951,  3.794716,  50},
		{10.196410,  3.709178,  50},
		{10.380490,  3.681601,  50},
		{10.564676,  3.683710,  50},
		{10.749225,  3.690981,  50},
		{10.933580,  3.687106,  50},
		{11.116766,  3.663729,  50},
		{11.297673,  3.618131,  50},
		{11.475215,  3.550847,  50},
		{11.648413,  3.463949,  50},
		{11.816414,  3.360022,  50},
		{11.978496,  3.241642,  50},
		{12.134053,  3.111134,  50},
		{12.282578,  2.970503,  50},
		{12.423649,  2.821434,  50},
		{12.556916,  2.665323,  50},
		{12.682082,  2.503321,  50},
		{12.798900,  2.336377,  50},
		{12.907164,  2.165275,  50},
		{13.006698,  1.990668,  50},
		{13.097353,  1.813101,  50},
		{13.179004,  1.633036,  50},
		{13.251548,  1.450866,  50},
		{13.314894,  1.266934,  50},
		{13.368971,  1.081538,  50},
		{13.413719,  0.894945,  50},
		{13.449088,  0.707395,  50},
		{13.475044,  0.519109,  50},
		{13.491559,  0.330295,  50},
		{13.499218,  0.153184,  50},
		{13.500982,  0.035293,  50},
		{13.500982,  0.000000,  50}
};

const double kRRSwitch_RProfile[][3] = {
		{0.002498,  0.099916,  50},
		{0.009797,  0.145974,  50},
		{0.024386,  0.291788,  50},
		{0.046251,  0.437307,  50},
		{0.075374,  0.582445,  50},
		{0.111733,  0.727195,  50},
		{0.155316,  0.871658,  50},
		{0.206120,  1.016076,  50},
		{0.264164,  1.160873,  50},
		{0.329498,  1.306679,  50},
		{0.402216,  1.454366,  50},
		{0.482468,  1.605050,  50},
		{0.570473,  1.760082,  50},
		{0.666523,  1.921002,  50},
		{0.770995,  2.089449,  50},
		{0.884347,  2.267046,  50},
		{1.007110,  2.455255,  50},
		{1.139872,  2.655237,  50},
		{1.283259,  2.867740,  50},
		{1.437911,  3.093048,  50},
		{1.604461,  3.331002,  50},
		{1.783516,  3.581100,  50},
		{1.975649,  3.842647,  50},
		{2.181395,  4.114934,  50},
		{2.401267,  4.397424,  50},
		{2.635763,  4.689917,  50},
		{2.885397,  4.992682,  50},
		{3.150725,  5.306562,  50},
		{3.432377,  5.633043,  50},
		{3.731090,  5.974266,  50},
		{4.047738,  6.332957,  50},
		{4.383346,  6.712155,  50},
		{4.739075,  7.114592,  50},
		{5.116146,  7.541419,  50},
		{5.515645,  7.989969,  50},
		{5.938170,  8.450513,  50},
		{6.383320,  8.903001,  50},
		{6.849157,  9.316728,  50},
		{7.328825,  9.593362,  50},
		{7.796275,  9.349009,  50},
		{8.226974,  8.613974,  50},
		{8.657682,  8.614154,  50},
		{9.087244,  8.591251,  50},
		{9.516336,  8.581832,  50},
		{9.945001,  8.573293,  50},
		{10.372240,  8.544784,  50},
		{10.795707,  8.469344,  50},
		{11.211781,  8.321473,  50},
		{11.616177,  8.087925,  50},
		{12.004904,  7.774549,  50},
		{12.375074,  7.403392,  50},
		{12.725201,  7.002538,  50},
		{13.055021,  6.596394,  50},
		{13.365082,  6.201228,  50},
		{13.656352,  5.825407,  50},
		{13.929936,  5.471677,  50},
		{14.186913,  5.139535,  50},
		{14.428260,  4.826938,  50},
		{14.654826,  4.531319,  50},
		{14.867332,  4.250119,  50},
		{15.066383,  3.981022,  50},
		{15.252484,  3.722030,  50},
		{15.426058,  3.471466,  50},
		{15.587454,  3.227935,  50},
		{15.736969,  2.990289,  50},
		{15.874848,  2.757580,  50},
		{16.001299,  2.529027,  50},
		{16.116498,  2.303977,  50},
		{16.220592,  2.081885,  50},
		{16.313707,  1.862290,  50},
		{16.395947,  1.644799,  50},
		{16.467400,  1.429070,  50},
		{16.528140,  1.214804,  50},
		{16.578227,  1.001736,  50},
		{16.617708,  0.789624,  50},
		{16.646621,  0.578247,  50},
		{16.664991,  0.367399,  50},
		{16.673503,  0.170255,  50},
		{16.675464,  0.039214,  50},
		{16.675464,  0.000000,  50}
};





#endif /* SRC_SUBSYSTEMS_PROFILES_H_ */