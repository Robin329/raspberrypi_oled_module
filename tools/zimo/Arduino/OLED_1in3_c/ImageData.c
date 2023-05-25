/*****************************************************************************
* | File      	:   ImageData.c
* | Author      :   Waveshare team
* | Function    :	
*----------------
* |	This version:   V1.0
* | Date        :   2020-08-19
* | Info        :
*
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documnetation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to  whom the Software is
# furished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
#
******************************************************************************/

#include "ImageData.h"
#include <avr/pgmspace.h>

const unsigned char gImage_1in3_c[2560] PROGMEM = { /*0X00,0X01,0X80,0X00,0X40,0X00,*/
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0C,0X6F,0X03,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0C,0X63,0X03,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0C,0X63,0X06,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0C,0X63,0X06,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0C,0X63,0X06,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X0C,0XE3,0X0C,0X00,0X10,0X00,0X07,0X00,0X1F,0X83,0X8F,0XFE,0X0E,0X00,0X00,
0X00,0X07,0XEF,0X8C,0X00,0X10,0X00,0X07,0X00,0X7F,0XC3,0X8F,0XFE,0X0E,0X00,0X00,
0X00,0X00,0X63,0X18,0X00,0X10,0X00,0X07,0X00,0X7F,0XE3,0X8F,0XFE,0X0E,0X00,0X00,
0X00,0X00,0X63,0X3F,0XC0,0X10,0X00,0X1F,0XFC,0XF1,0XE0,0X00,0X7C,0X0E,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X1F,0XFC,0XE0,0X00,0X00,0XF0,0X0E,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X1F,0XFC,0XE0,0X00,0X01,0XE0,0X0E,0X00,0X00,
0X00,0X38,0X00,0X00,0X00,0X10,0X00,0X07,0X3C,0XF0,0X00,0X03,0XC0,0X0E,0X00,0X00,
0X00,0X60,0X00,0X00,0X00,0X10,0X00,0X07,0X78,0X7E,0X00,0X0F,0X80,0X0E,0X00,0X00,
0X00,0X61,0XFC,0X63,0X18,0X10,0X00,0X07,0XF0,0X3E,0X03,0X8E,0X00,0X0E,0X60,0X00,
0X00,0XF1,0XC6,0X63,0X18,0X10,0X00,0X07,0XE0,0X78,0X03,0X8E,0X00,0X0F,0XE0,0X00,
0X00,0XF1,0X86,0X67,0X98,0X10,0X00,0X07,0XE0,0X70,0XE3,0X8E,0X0E,0X0F,0XE0,0X00,
0X01,0XF9,0XBE,0X67,0X98,0X10,0X00,0X07,0XC0,0X7F,0XE0,0X0F,0XFE,0X0F,0XC0,0X00,
0X01,0X99,0XE0,0X6C,0XD8,0X10,0X00,0X07,0X80,0X3F,0XC0,0X07,0XFC,0X0E,0X00,0X00,
0X01,0X8D,0X86,0X6C,0XD8,0X10,0X00,0X07,0X00,0X1F,0X80,0X03,0XF8,0X0E,0X00,0X00,
0X03,0X0D,0X8C,0X78,0X78,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X03,0X0C,0XF8,0X78,0X78,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X70,0X38,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X60,0X18,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X10,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,0XFF,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X1C,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X30,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X30,0XFE,0X3F,0X0C,0X67,0XE0,0XFC,0X00,0X04,0X03,0XFF,0XFF,0XC0,0X00,
0X00,0X00,0X78,0XE3,0X39,0X8C,0X67,0X31,0X86,0X00,0X04,0X03,0XFF,0XFF,0XE0,0X00,
0X00,0X00,0X78,0XC3,0X30,0XCC,0X66,0X33,0X03,0X00,0X04,0X03,0XFF,0XFF,0XF8,0X00,
0X00,0X00,0X78,0XC3,0X30,0XCC,0X66,0X33,0X00,0X00,0X04,0X03,0XF7,0XFF,0XFC,0X00,
0X00,0X00,0XCC,0XFE,0X30,0XCC,0X66,0X33,0XE0,0X00,0X04,0X03,0XE7,0XFF,0XFF,0X80,
0X00,0X00,0XC6,0XC3,0X30,0XCC,0X66,0X30,0X3C,0X00,0X04,0X03,0X87,0XFF,0XFF,0X80,
0X00,0X01,0X86,0XC6,0X39,0X8C,0XE6,0X30,0X06,0X00,0X04,0X03,0X87,0XFF,0XFF,0XC0,
0X00,0X01,0X86,0X7C,0X3F,0X07,0XE6,0X30,0X03,0X00,0X04,0X03,0X8C,0X39,0XE7,0XC0,
0X00,0X00,0X00,0X00,0X30,0X00,0X00,0X03,0X87,0X00,0X04,0X03,0X1C,0X39,0XC7,0XE0,
0X00,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0XFC,0X00,0X04,0X03,0X18,0X10,0XC3,0XE0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X03,0X10,0X50,0XC3,0XE0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X03,0X01,0XE0,0X83,0XE0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X04,0X03,0X83,0XC6,0X11,0XE0,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X02,0X00,0X44,0X03,0XC3,0XC6,0X10,0X60,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X02,0X1C,0X44,0X03,0XE3,0X8E,0X38,0X60,
0X07,0XC0,0X01,0XE3,0XF8,0X00,0X7C,0X7F,0X00,0X7F,0X04,0X01,0XE6,0X0F,0X38,0X60,
0X1C,0X70,0X07,0X30,0X70,0X00,0XC6,0X0E,0X00,0XFF,0X84,0X01,0XFE,0X0F,0XFF,0XE0,
0X00,0X30,0X06,0X00,0XC0,0X00,0XC0,0X18,0X00,0XFF,0X84,0X00,0XFE,0X1F,0XFF,0XE0,
0X00,0X30,0X07,0XE1,0X81,0XF6,0XC0,0X30,0X0C,0XFF,0XB4,0X00,0X7E,0X3F,0XFF,0XE0,
0X00,0X30,0X07,0X33,0X01,0XBC,0X78,0X60,0X00,0XFF,0X84,0X00,0X1F,0XFF,0XFF,0XE0,
0X18,0X33,0XE6,0X33,0X18,0X00,0XC6,0X63,0X00,0XFF,0X84,0X00,0X1F,0XFF,0XFF,0XE0,
0X0C,0X63,0X66,0X33,0X18,0X00,0XC6,0X63,0X00,0X7F,0X04,0X00,0X00,0X00,0X00,0X00,
0X07,0XC1,0XC3,0XE1,0XF0,0X00,0X7C,0X3E,0X02,0X1C,0X44,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X02,0X00,0X44,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X08,0X04,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,0X00,0X00,
};



