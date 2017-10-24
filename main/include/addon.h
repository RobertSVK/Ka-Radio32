
#ifndef __have__addon_h__
#define __have__addon_h__

#include <u8g2.h>

// lcd_type
// m>in 128x64
#define LCD_COLOR		0x80	//128
#define LCD_SPI			0x40
#define LCD_I2C			0
#define LCD_NONE 0xFF
#define LCD_I2C_SH1106	0
#define LCD_I2C_SH1306	1
#define LCD_I2C_SSD1309	2
#define LCD_I2C_SSD1325 3

#define LCD_SPI_SSD1306 		0x40  //64
#define LCD_SPI_SSD1309 		0x41
#define LCD_SPI_ST7565_ZOLEN	0x42
#define LCD_SPI_SSD1322_NHD		0x43
#define LCD_SPI_IL3820_V2		0x44
#define LCD_SPI_SSD1607			0x45
#define LCD_SPI_LS013B7DH03		0x46

extern u8g2_t u8g2;
void task_addon(void *pvParams);
void lcd_init(uint8_t Type);
void (*serviceAddon)();



#define logo_width 60
#define logo_height 51

static unsigned char logo_bits[]  = {
  0xFF, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x07, 0x00, 
  0x00, 0xFE, 0xFF, 0x0F, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0xF8, 0xFF, 0x0F, 
  0xFF, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0x0F, 0xFF, 0x1D, 0x20, 0x00, 0x40, 0x80, 0xFF, 0x0F, 
  0x7F, 0x0E, 0x90, 0x00, 0x80, 0x00, 0xFF, 0x0F, 0x3F, 0x07, 0x40, 0x00, 
  0x20, 0x00, 0xFE, 0x0F, 0xBF, 0x03, 0x48, 0x00, 0x20, 0x01, 0xFC, 0x0F, 
  0xDF, 0x03, 0x08, 0x61, 0x48, 0x00, 0xF8, 0x0F, 0xCF, 0x01, 0x20, 0xF9, 
  0x49, 0x02, 0xF8, 0x0F, 0xE7, 0x00, 0xA4, 0xF8, 0x41, 0x02, 0xF0, 0x0F, 
  0xF7, 0x00, 0x24, 0xFC, 0x53, 0x00, 0xE0, 0x0F, 0x73, 0x00, 0x84, 0xFC, 
  0x03, 0x02, 0xE0, 0x0F, 0x7B, 0x00, 0x20, 0xF8, 0x51, 0x02, 0xC0, 0x0F, 
  0x39, 0x00, 0x24, 0xF9, 0x48, 0x00, 0xC0, 0x0F, 0x3D, 0x00, 0x28, 0x60, 
  0x00, 0x01, 0xC0, 0x0F, 0x1D, 0x00, 0x40, 0x72, 0x24, 0x01, 0x80, 0x0F, 
  0x1C, 0x00, 0x48, 0xF0, 0x90, 0x00, 0x80, 0x0F, 0x1E, 0x00, 0x90, 0xF0, 
  0x80, 0x00, 0x80, 0x0F, 0x1E, 0x00, 0x20, 0xF0, 0x40, 0x00, 0x80, 0x0F, 
  0x1E, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x0F, 0x0E, 0x00, 0x00, 0xF0, 
  0xC0, 0x1F, 0x00, 0x0F, 0x0E, 0x60, 0x30, 0xB8, 0xC1, 0x3F, 0x00, 0x0F, 
  0x0E, 0x60, 0x18, 0xD8, 0xC1, 0x70, 0x00, 0x0F, 0x0E, 0x70, 0x1C, 0xF8, 
  0xC1, 0x60, 0x00, 0x0F, 0x0F, 0x60, 0x0C, 0x98, 0xE1, 0x60, 0x00, 0x0F, 
  0x0E, 0x30, 0x06, 0x98, 0xC1, 0x60, 0x00, 0x0F, 0x0E, 0x70, 0x03, 0xBC, 
  0xC1, 0x60, 0x00, 0x0F, 0x0F, 0xA0, 0x03, 0x9C, 0xC3, 0x70, 0x00, 0x0F, 
  0x1F, 0xF0, 0x01, 0x0C, 0xC3, 0x3F, 0x80, 0x0F, 0x1F, 0xE0, 0x01, 0xDC, 
  0xC3, 0x0F, 0x80, 0x0F, 0x1F, 0x60, 0x03, 0x0C, 0xE3, 0x0C, 0x80, 0x0F, 
  0x1F, 0x70, 0x07, 0x0C, 0xC3, 0x1C, 0x80, 0x0F, 0x3F, 0x60, 0x06, 0x0C, 
  0xC7, 0x18, 0xC0, 0x0F, 0x3F, 0x70, 0x0C, 0xDE, 0xC7, 0x30, 0xC0, 0x0F, 
  0x3F, 0x60, 0x18, 0x06, 0xC6, 0x70, 0xC0, 0x0F, 0x7F, 0x70, 0x38, 0x06, 
  0xC6, 0x60, 0xE0, 0x0F, 0x7F, 0x20, 0x30, 0xFE, 0x47, 0x20, 0xF0, 0x0F, 
  0xFF, 0x00, 0x00, 0x07, 0x06, 0x00, 0xF0, 0x0F, 0xFF, 0x01, 0x00, 0x03, 
  0x0C, 0x00, 0xF8, 0x0F, 0xFF, 0x01, 0x00, 0xDF, 0x0F, 0x00, 0xF8, 0x0F, 
  0xFF, 0x03, 0x00, 0x03, 0x0C, 0x00, 0xFC, 0x0F, 0xFF, 0x07, 0x00, 0x03, 
  0x0C, 0x00, 0xFE, 0x0F, 0xFF, 0x0F, 0x00, 0x03, 0x1C, 0x00, 0xFF, 0x0F, 
  0xFF, 0x1F, 0x80, 0x01, 0x08, 0x80, 0xFF, 0x0F, 0xFF, 0x3F, 0x00, 0x00, 
  0x00, 0xC0, 0xFF, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xF0, 0xFF, 0x0F, 
  0xFF, 0xFF, 0x03, 0x00, 0x00, 0xFC, 0xFF, 0x0F, 0xFF, 0xFF, 0x0F, 0x00, 
  0x00, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x3F, 0x00, 0xC0, 0xFF, 0xFF, 0x0F, 
  }; 
#endif