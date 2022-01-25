
#ifndef LCD_CONFIG_H_
#define LCD_CONFIG_H_


#default LCD_MODE LCD_8_BIT  /* 4 or 8 */

#define DataPort DPORT
/* in 8bit mode use all pins
   in 4bit mode use pins 4:7 */
#define PIN0_LCD Pin0
#define PIN1_LCD Pin1
#define PIN2_LCD Pin2
#define PIN3_LCD Pin3
#define PIN4_LCD Pin4
#define PIN5_LCD Pin5
#define PIN6_LCD Pin6
#define PIN7_LCD Pin7

#define RS_PORT CPORT
#define RW_PORT CPORT
#define E_PORT CPORT
#define RS Pin0
#define RW Pin1
#define E  Pin2



#endif /* LCD_CONFIG_H_ */
