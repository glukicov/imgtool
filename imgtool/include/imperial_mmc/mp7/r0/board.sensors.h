/* AVR32_MMC
 * Version 1.2
 * See version.h for full release information.
 *
 * License: GPL (See http://www.gnu.org/licenses/gpl.txt).
 *
 */



// Used for the LTC2990 sensors

static struct LTC2990 gSensors[] =
{
	{ 1, 0x4D, 0x1F, 0x1E, 1.5,  1.8,  1.0,  1.0,  1.0,  1.0  },
	{ 1, 0x4C, 0x1F, 0x1E, 1.2,  1.0,  1.0,  1.0,  1.0,  1.0  },
	{ 1, 0x4E, 0x1F, 0x1E, 2.5,  3.3,  1.0,  1.0,  1.0,  1.0  },
	{ 2, 0x4D, 0x1F, 0x1E, 12.0, 3.3,  1.0,  1.0,  1.0,  1.0  },
	{ 2, 0x4C, 0x1F, 0x1E, 1.2,  1.0,  1.0,  1.0,  1.0,  1.0  },
	{ 2, 0x4E, 0x18, 0x19, 1.0,  0.0,  1.0,  1.0,  1.0,  1.0  },
	{ 4, 0x4C, 0x1F, 0x1E, 1.8,  0.0,  1.0,  1.0,  1.0,  1.0  },
	{ 5, 0x4C, 0x1F, 0x1E, 1.8,  0.0,  1.0,  1.0,  1.0,  1.0  },
};

// SENSOR BUS : CONFIGA : CONFIGB : V1 : V2 : scaleV1 : scaleV2 : scaleI1 : scaleI2



// config a/b cases
// 0x1F => case 7, V1, V2
// 0x1E => case 6, I1, I2
// 0x18 => case 0, V1, T2
// 0x19 => case 1, I1, T2

