/* AVR32_MMC
 * Version 1.2
 * See version.h for full release information.
 *
 * License: GPL (See http://www.gnu.org/licenses/gpl.txt).
 *
 */



// Used for the LTC2990 sensors

static struct LTC2990 gSensors[] =
{	//	   19:35 11:27						// i :: V1		scale	:: V2		scale
	{ 1, 0x4D, 0x1F, 0x1E, 5.0,  0.0,  2.0,  1.0,  3.0,  1.0  }, 	// 0 :: 5.0V		x2	:: spare	-
	{ 1, 0x4C, 0x1F, 0x1E, 1.0,  1.5,  1.0,  1.0,  0.5,  1.0  }, 	// 1 :: 1.0V		-	:: 1.5V		-
	{ 1, 0x4E, 0x1F, 0x1E, 2.5,  1.8,  1.0,  1.0,  1.0,  1.0  }, 	// 2 :: 2.5V		-	:: 1.8V		-
	{ 2, 0x4D, 0x1F, 0x1E, 12.0, 3.3,  4.98, 1.0,  5.0,  1.0  }, 	// 3 :: 12V		x4.98	:: 3.3 MP	-
	{ 2, 0x4C, 0x1F, 0x1E, 1.2,  1.0,  1.0,  1.0,  1.0,  1.0  }, 	// 4 :: 1.2V GTX	-	:: 1.0V GTX	-
	{ 2, 0x4E, 0x18, 0x19, 3.3,  0.0,  2.0,  0.0,  1.5,  1.0  }, 	// 5 :: 3.3V		x2	:: FPGA_TEMP	-
	{ 4, 0x4C, 0x1F, 0x1E, 2.5,  2.5,  2.0,  2.0,  1.0,  1.0  }, 	// 6 :: VADJ_L8		x2	:: VADJ_L12	x2
	{ 5, 0x4C, 0x1F, 0x1E, 1.8,  0.0,  1.0,  0.0,  1.0,  1.0  }, 	// 7 :: 1.8V GTX	-	:: spare	-
};


// config a/b cases
// 0x1F => case 7, V1, V2
// 0x1E => case 6, I1, I2
// 0x18 => case 0, V1, T2
// 0x19 => case 1, I1, T2

