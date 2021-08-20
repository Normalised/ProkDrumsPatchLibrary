#ifndef Default_Params_h
#define Default_Params_h
#include "Config.h"

// Default Params for clap_

const float defaultParams[16][NUM_PARAMS] = {
	{0.97,1.0,3688.25,0.7,2723.0,1.07,1.0,1.0,3.0,707.0,0.0,28491.0,6482.0,1.0,10.47,3485.69,10485.44,6.0,231.2,5249.64,8519.42,2.0,8053.2,2.24,2627.0,1.39,1.0,0.87,1.0,1.0,1203.0,0.0,0.59,2882.0,6.12,0.3,0.88,0.0,0.93,0.83,0.56},
	{0.79,1.0,5000.0,0.7,792.5,1.07,0.25,1.0,3.0,559.0,0.0,28491.0,6482.0,1.0,10.47,3485.69,10485.44,6.0,1.0,5249.64,8519.42,6.0,11162.8,1.12,1831.0,0.7,1.0,0.88,1.0,1.0,3612.0,-2.4,0.59,4196.0,14.64,0.3,1.0,0.0,0.68,0.76,0.66},
	{0.79,1.0,3332.73,1.19,1911.76,1.14,0.62,14.59,3.0,596.72,0.0,28491.0,6482.0,1.0,8.15,3538.24,8503.56,7.23,640.29,6739.9,6607.65,3.75,10605.91,1.65,1935.55,1.25,0.95,0.84,0.96,1.0,2258.72,-0.59,0.59,4182.46,7.86,0.3,0.9,0.0,0.78,0.47,0.73},
	{0.79,1.0,3935.75,0.7,2896.25,1.07,0.42,1.0,3.0,559.0,0.0,28491.0,6482.0,1.0,10.47,3485.69,10485.44,6.0,1.0,5249.64,8519.42,6.0,11282.4,1.12,1751.4,1.0,1.0,0.92,1.0,1.0,1203.0,0.0,0.59,4123.0,6.12,0.3,1.0,0.0,1.0,0.0,0.71},
	{0.6,1.0,3317.0,3.86,1906.25,1.69,0.8,56.44,3.0,559.0,0.0,28491.0,6482.0,1.0,1.0,3700.08,2400.0,11.0,2369.74,11329.45,720.0,1.0,3687.8,4.63,1035.0,4.1,0.81,0.69,0.82,1.0,3101.0,0.0,0.59,8576.0,6.6,0.3,1.0,0.0,0.5,0.3,0.82},
	{0.57,0.58,3703.56,2.47,2822.0,1.44,0.15,36.15,3.0,707.0,0.0,29926.0,6791.0,14.43,9.42,2880.91,6813.89,2.0,20.0,6771.99,9502.43,4.0,9548.2,1.41,1035.0,2.8,1.0,0.83,0.83,0.88,4415.0,0.0,1.34,2867.83,2.52,0.3,1.0,0.59,1.0,0.38,0.88},
	{0.69,0.87,5000.0,1.0,1584.5,2.89,0.69,19.81,3.0,598.56,0.0,25939.0,5175.25,0.0,10.47,9857.49,4480.0,4.0,180.0,15015.73,1000.0,3.0,9309.0,2.3,6288.6,2.63,1.0,1.0,0.78,1.0,2371.0,-10.56,1.01,3174.0,8.4,1.52,1.0,0.13,0.0,0.54,0.5},
	{0.6,1.0,668.75,2.68,1163.75,1.37,0.8,56.44,3.0,559.0,0.0,28491.0,6482.0,1.0,1.0,3700.08,2400.0,11.0,2369.74,11329.45,720.0,1.0,12000.0,2.11,1512.6,1.9,0.81,0.69,0.82,1.0,3101.0,0.0,0.59,5583.0,4.68,0.3,0.7,0.0,0.5,0.3,0.89},
	{0.85,0.9,2252.75,1.17,1386.5,3.86,0.34,82.67,1.0,669.83,0.0,28491.0,6482.0,0.0,0.0,673.78,0.0,1.0,12.8,1280.96,0.0,1.0,8531.6,4.86,3462.8,4.08,0.92,0.9,0.85,1.0,2444.0,0.0,0.59,2517.0,2.28,1.72,1.0,1.0,1.0,0.22,0.63},
	{0.83,0.56,1139.0,1.26,4133.75,1.5,1.0,23.77,5.0,381.16,3520.0,32000.0,8000.0,0.0,3591.2,10584.88,1040.0,16.0,0.0,2333.73,12160.0,16.0,7036.6,2.53,995.2,4.61,0.75,1.0,0.81,1.0,4269.0,0.0,0.3,3101.0,3.6,0.3,1.0,0.0,0.5,0.3,0.79},
	{0.0,1.0,1584.5,3.54,2747.75,0.7,0.86,23.77,7.0,468.22,0.0,29289.0,1704.85,39.2,39.2,12301.42,12615.29,4.0,115.2,6771.99,7700.25,6.0,9966.8,1.0,1433.0,4.42,0.96,0.41,0.4,0.65,500.0,0.0,0.7,6000.0,7.08,0.3,0.7,0.3,0.5,0.3,0.73},
	{1.0,1.0,3366.5,4.29,2698.25,4.57,0.63,57.44,3.0,564.44,0.0,30372.29,7295.85,9.03,16.83,5987.45,557.58,9.04,12.8,1067.6,6519.38,9.04,3568.2,3.61,1910.6,4.36,0.94,1.0,0.84,1.0,2846.78,0.0,0.43,6678.0,5.16,1.96,1.0,0.19,1.0,0.74,0.72},
	{0.6,1.0,668.75,2.68,1163.75,1.37,0.36,38.62,7.0,328.21,0.0,28491.0,6482.0,0.0,9331.2,3076.1,5734.23,3.0,2369.74,2692.12,14253.65,1.0,6857.2,2.18,1194.2,3.9,0.78,0.74,0.73,0.77,1495.0,-3.96,0.59,3393.0,1.92,0.3,1.0,0.3,0.5,0.3,0.64},
	{0.77,1.0,668.75,4.46,371.75,4.31,0.26,71.29,3.0,598.56,0.0,31521.5,5255.96,0.0,1.0,14580.54,0.0,3.0,3.2,2600.12,12779.13,10.0,3269.2,5.17,915.6,2.53,0.36,1.0,0.79,1.0,7262.0,0.0,0.59,4926.0,6.12,0.87,1.0,0.84,0.49,0.32,0.66},
	{1.0,1.0,1757.75,4.81,2747.75,4.25,0.11,25.75,2.0,669.83,1600.0,32000.0,1139.9,2000.0,460.8,81.0,28015.78,15.0,2880.0,820.17,32767.0,16.0,6378.8,5.17,1751.4,3.24,0.57,1.0,0.59,1.0,9963.0,-0.6,0.59,8722.0,5.76,2.4,1.0,0.59,1.0,0.69,0.7},
	{0.77,1.0,1312.25,4.46,272.75,4.31,0.01,12.88,2.0,381.16,0.0,29926.5,8000.0,1280.0,0.0,23943.45,6553.4,9.0,0.0,16589.28,10976.94,9.0,9129.6,5.17,2467.8,3.56,0.83,0.88,0.0,0.9,7481.0,0.0,0.59,3247.0,3.96,2.78,0.7,0.42,1.0,0.0,0.72}
};
#endif
