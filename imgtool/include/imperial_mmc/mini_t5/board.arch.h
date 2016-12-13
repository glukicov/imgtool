/* AVR32_MMC
 * Version 1.2
 * See version.h for full release information.
 *
 * License: GPL (See http://www.gnu.org/licenses/gpl.txt).
 *
 */



// LED GPIO Pins
#define NUM_LEDS 4
// LED0 is BLUE LED
#define LED0_GPIO AVR32_PIN_PA18
// LED1-3 are optional.
#define LED1_GPIO AVR32_PIN_PA16
#define LED2_GPIO AVR32_PIN_PA10
#define LED3_GPIO AVR32_PIN_PA19


// GPIO
#define GA0_GPIO AVR32_PIN_PA07
#define GA1_GPIO AVR32_PIN_PA08
#define GA2_GPIO AVR32_PIN_PA09
// The pin which drives the address lines via resistors
#define GADRIVER_GPIO AVR32_PIN_PA06


// I2C/TWI Pins (MINI-T5 rev dependent)
#if (MINI_T5_REV <= 1)
#define TWI_GPIO_CLK AVR32_TWIMS0_TWCK_0_0_PIN
#define TWI_GPIO_CLK_FN AVR32_TWIMS0_TWCK_0_0_FUNCTION
#define TWI_GPIO_DATA AVR32_TWIMS0_TWD_0_0_PIN
#define TWI_GPIO_DATA_FN AVR32_TWIMS0_TWD_0_0_FUNCTION
#define CRATE_TWIM_MODULE (AVR32_TWIM0)
#define CRATE_TWIS_MODULE (AVR32_TWIS0)
#else
#define TWI_GPIO_CLK AVR32_TWIMS1_TWCK_0_PIN
#define TWI_GPIO_CLK_FN AVR32_TWIMS1_TWCK_0_FUNCTION
#define TWI_GPIO_DATA AVR32_TWIMS1_TWD_0_PIN
#define TWI_GPIO_DATA_FN AVR32_TWIMS1_TWD_0_FUNCTION
#define CRATE_TWIM_MODULE (AVR32_TWIM1)
#define CRATE_TWIS_MODULE (AVR32_TWIS1)
#endif


// We'll only use SPI1 on MINI-T5 boards for now
#define SPI1_GPIO_SCK      AVR32_SPI1_SCK_0_2_PIN
#define SPI1_GPIO_SCK_FN   AVR32_SPI1_SCK_0_2_FUNCTION
#define SPI1_GPIO_MISO     AVR32_SPI1_MISO_0_2_PIN
#define SPI1_GPIO_MISO_FN  AVR32_SPI1_MISO_0_2_FUNCTION
#define SPI1_GPIO_MOSI     AVR32_SPI1_MOSI_0_2_PIN
#define SPI1_GPIO_MOSI_FN  AVR32_SPI1_MOSI_0_2_FUNCTION
#define SPI1_GPIO_CS0      AVR32_SPI1_NPCS_0_1_PIN
#define SPI1_GPIO_CS0_FN   AVR32_SPI1_NPCS_0_1_FUNCTION
#define SPI1_GPIO_CS1      AVR32_SPI1_NPCS_1_1_PIN
#define SPI1_GPIO_CS1_FN   AVR32_SPI1_NPCS_1_1_FUNCTION
#define SPI1_MEM_SEL       0
#define SPI1_TEMP_SEL      1


// Various pins relating to power supply
#define PWR_GPIO_12V      AVR32_ADC_AD_1_PIN
#define PWR_GPIO_12V_FN   AVR32_ADC_AD_1_FUNCTION
#define PWR_GPIO_12V_CHAN 1 // ADC Chan for 12V power
#define PWR_GPIO_3_3V     AVR32_PIN_PB08
#define PWR_GPIO_2_5V     AVR32_PIN_PB09
#define PWR_GPIO_1_8V     AVR32_PIN_PA11
#define PWR_GPIO_1_5V     AVR32_PIN_PB10
#define PWR_GPIO_1_0V     AVR32_PIN_PB11
#define PWR_GPIO_ENABLE   AVR32_PIN_PB07


// FPGA<->MMC IPBUS registers
#define FPGAtoMMC_COUNTER_ADDRESS 0x00000004
#define MMCtoFPGA_COUNTER_ADDRESS 0x00000005


// No FPGA done line on MINI-T5, but signal required for dma_transactor
#define FPGA_DONE         AVR32_PIN_PX57 // UC_CPLD_1
#define FPGA_PROG_B       AVR32_PIN_PX58 // UC_CPLD_0

// The maximum size file we can store
#define SFWFS_DATABLOCK_SIZE 40000
