#ifndef _DEV_CONFIG_H_
#define _DEV_CONFIG_H_
/***********************************************************************************************************************
            ------------------------------------------------------------------------
            |\\\																///|
            |\\\					Hardware interface							///|
            ------------------------------------------------------------------------
***********************************************************************************************************************/
#ifdef USE_RK_LIB
#include "RK_sysfs_gpio.h"
#endif

#include <errno.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include "Debug.h"

#define IIC_CMD 0X00
#define IIC_RAM 0X40

/**
 * data
 **/
#define UBYTE   uint8_t
#define UWORD   uint16_t
#define UDOUBLE uint32_t

/* OLED Define
 *    绿 - GPIO0_B4_d（12） - RST
 *    棕色 - GPIO2_D4_d  （9）- DC
 *    蓝 - GPIO2_C7(87) - CS
 *    白色 - GPIO2_C5 - DIN
 *    灰色 - GPIO2_C6 - CLK
 *    黄 - VCC3.3 - VCC3.3
 *    黑 - GND - GND
 */
#define OLED_CS  87
#define OLED_RST 12
#define OLED_DC  92

#define OLED_CS_0 DEV_Digital_Write(OLED_CS, 0)

#define OLED_CS_1 DEV_Digital_Write(OLED_CS, 1)

#define OLED_RST_0 DEV_Digital_Write(OLED_RST, 0)

#define OLED_RST_1 DEV_Digital_Write(OLED_RST, 1)

#define OLED_DC_0 DEV_Digital_Write(OLED_DC, 0)

#define OLED_DC_1 DEV_Digital_Write(OLED_DC, 1)

/*------------------------------------------------------------------------------------------------------*/

UBYTE DEV_ModuleInit(void);
void DEV_ModuleExit(void);

void DEV_GPIO_Mode(UWORD Pin, UWORD Mode);
void DEV_Digital_Write(UWORD Pin, UBYTE Value);
UBYTE DEV_Digital_Read(UWORD Pin);
void DEV_Delay_ms(UDOUBLE xms);

void I2C_Write_Byte(uint8_t value, uint8_t Cmd);
void DEV_SPI_WriteByte(UBYTE Value);
void DEV_SPI_Write_nByte(uint8_t *pData, uint32_t Len);

#endif
