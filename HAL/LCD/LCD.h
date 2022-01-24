
#ifndef LCD_LCD_H_
#define LCD_LCD_H_

/*CONFIGRATION*/
#define DATAPORT DPORT
#define RS_PORT CPORT
#define RW_PORT CPORT
#define E_PORT CPORT
#define RS Pin0
#define RW Pin1
#define E  Pin2



extern void LCD_voidInit(void);
extern void LCD_voidWriteChar(u8 ch);
extern void LCD_voidWriteString(u8* st);
extern void LCD_voidClearDisplay(void);
extern void LCD_WritingPosition(u8 row, u8 col);  // row is 1 or 2   // col is 1->16
void LCD_ptrConvertIntToStrDisplay(u8 val);
//void LCD_voidWritePattern(void);

#endif /* LCD_LCD_H_ */
