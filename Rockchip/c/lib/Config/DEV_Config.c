/*****************************************************************************
 * | File      	:   DEV_Config.c
 * | Author      :   Waveshare team
 * | Function    :   Hardware underlying interface
 * | Info        :
 *----------------
 * |	This version:   V2.0
 * | Date        :   2020-06-17
 * | Info        :   Basic version
 *
 ******************************************************************************/
#include <unistd.h>

#include "DEV_Config.h"
#include "dev_hardware_SPI.h"
#include "dev_hardware_i2c.h"


#define SPI_DEV_NAME "/dev/ssd1327-1.0"

uint32_t fd;
/*****************************************
                GPIO
*****************************************/
void DEV_Digital_Write(UWORD Pin, UBYTE Value) {
    // printf("%d:%d\r\n", Pin, Value);
#ifdef USE_RK_LIB
    SYSFS_GPIO_Write(Pin, Value);
#endif
}

UBYTE DEV_Digital_Read(UWORD Pin) {
    UBYTE Read_value = 0;
#ifdef USE_RK_LIB
    Read_value = SYSFS_GPIO_Read(Pin);
#endif
    return Read_value;
}

void DEV_GPIO_Mode(UWORD Pin, UWORD Mode) {
#ifdef USE_RK_LIB
    SYSFS_GPIO_Export(Pin);
    if (Mode == 0 || Mode == SYSFS_GPIO_IN) {
        SYSFS_GPIO_Direction(Pin, SYSFS_GPIO_IN);
        printf("IN Pin = %d\r\n", Pin);
    } else {
        SYSFS_GPIO_Direction(Pin, SYSFS_GPIO_OUT);
        printf("OUT Pin = %d\r\n", Pin);
    }
#endif
}

/**
 * delay x ms
 **/
void DEV_Delay_ms(UDOUBLE xms) {
#ifdef USE_RK_LIB
    UDOUBLE i;
    for (i = 0; i < xms; i++) {
        usleep(1000);
    }
#endif
}

static void DEV_GPIO_Init(void) {
    // DEV_GPIO_Mode(OLED_CS, 1);
    DEV_GPIO_Mode(OLED_RST, 1);
    DEV_GPIO_Mode(OLED_DC, 1);
}

/******************************************************************************
function:	Module Initialize, the library and initialize the pins, SPI protocol
parameter:
Info:
******************************************************************************/
UBYTE DEV_ModuleInit(void) {
#ifdef USE_RK_LIB
    DEV_GPIO_Init();
#if USE_SPI
    printf("USE_SPI\r\n");
    DEV_HARDWARE_SPI_beginSet(SPI_DEV_NAME, SPI_MODE_3, 20000000);
#elif USE_IIC
    printf("USE_IIC\r\n");
    OLED_DC_0;
    DEV_HARDWARE_I2C_begin("/dev/i2c-1");
    DEV_HARDWARE_I2C_setSlaveAddress(0x3c);
#endif
#endif
    return 0;
}

void DEV_SPI_WriteByte(uint8_t Value) {
    // printf("Reg:%#x\r\n", Value);
#ifdef USE_RK_LIB
    DEV_HARDWARE_SPI_TransferByte(Value);

#endif
}

void DEV_SPI_Write_nByte(uint8_t *pData, uint32_t Len) {
#ifdef USE_RK_LIB
    DEV_HARDWARE_SPI_Transfer(pData, Len);
#endif
}

void I2C_Write_Byte(uint8_t value, uint8_t Cmd) {
#ifdef USE_RK_LIB
    char wbuf[2] = {Cmd, value};
    DEV_HARDWARE_I2C_write(wbuf, 2);

#endif
}

/******************************************************************************
function:	Module exits, closes SPI and BCM2835 library
parameter:
Info:
******************************************************************************/
void DEV_ModuleExit(void) {
#ifdef USE_RK_LIB
    OLED_RST_1;
    OLED_DC_0;
    DEV_HARDWARE_SPI_end();
    DEV_HARDWARE_I2C_end();
#endif
}
