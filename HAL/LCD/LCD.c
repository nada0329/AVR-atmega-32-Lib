
#include "TYPES.h"
#define F_CPU 8000000UL
#include <util/delay.h>
#include "DIO_int.h"
#include "LCD.h"


/* LCD control commands */
#define func_set       0b00111000
#define display_on_off 0b00001100
#define display_clear  0b00000001
#define entrymode_set  0b00000110
#define set_CGRAM      0b01000000
#define set_DDRAM      0b10000000

static void SendInstruction(u8 Ins);

extern void LCD_voidInit(void)    ///////global extern
{
	DIO_viodSetPortDir(DATAPORT , output);
	DIO_voidSetPinDir(RS_PORT , RS , output);
	DIO_voidSetPinDir(RW_PORT , RW , output);
	DIO_voidSetPinDir(E_PORT , E , output);

	_delay_ms(30);
	 SendInstruction(func_set);
	_delay_ms(2);
	 SendInstruction(display_on_off);
	 _delay_ms(2);
	 SendInstruction(display_clear);
	 _delay_ms(2);
	 SendInstruction(entrymode_set);
}

static void SendInstruction(u8 Ins)  //local
{
	//set RS 0
		DIO_voidSetPinVal(RS_PORT ,  RS , low);
	    //set RW 0
		DIO_voidSetPinVal(RW_PORT ,  RW , low);
		//set D0 ->D7
		DIO_voidSetPortVal( DATAPORT ,  Ins);
		//FALLING EDGE TO WRITE
		DIO_voidSetPinVal(E_PORT ,  E , high);  //high enable
		_delay_ms(2);
		DIO_voidSetPinVal(E_PORT ,  E , low);  //low enable
		_delay_ms(2);
}

extern void LCD_voidWriteChar(u8 ch)
{
	    //set RS 1
		DIO_voidSetPinVal(RS_PORT ,  RS , high);
	    //set RW 0
		DIO_voidSetPinVal(RW_PORT ,  RW , low);

		//set D0 ->D7
		DIO_voidSetPortVal( DATAPORT ,  ch);

		//FALLING EDGE TO WRITE
		DIO_voidSetPinVal(E_PORT ,  E , high);  //high enable
		_delay_ms(2);
		DIO_voidSetPinVal(E_PORT ,  E , low);  //low enable
		_delay_ms(2);
}

extern void LCD_voidWriteString(u8* st)
{
	u8 i;
	for(i=0;st[i] != '\0' ;i++)
		LCD_voidWriteChar(st[i]);
}

extern void LCD_voidClearDisplay(void)
{
	SendInstruction(display_clear);
}

extern void LCD_WritingPosition(u8 row, u8 col)
{
	switch(row)
	{
		case 1:
			SendInstruction(col -1+ 0x80);
			break;
		case 2:
			SendInstruction(col -1+ 0xc0);
			break;
		default:
			break;
	}
}

void LCD_ptrConvertIntToStrDisplay(u8 val)
{
	static u8 converted_val[8];
	u8* ptr=&converted_val[7];
	*ptr= '\0';
	if(val==0)
	{
		ptr-- ;
		*ptr= '0';
	}
	while(val != 0)
	{
		ptr-- ;
		*ptr= (val%10)+'0';
		val/=10;
	}
	LCD_voidWriteString(ptr);

}

/*void LCD_voidWritePattern(void)
{
	SendInstruction(set_CGRAM);

	u8 i,pattern[]={ 0x17,0x14,0x14,0x12,0x12,0x12,0x1e,0x00, //ye
		             0x00,0x01,0x01,0x01,0x01,0x01,0x0f,0x00,  //dal
					 0x0e,0x0a,0x0a,0x0a,0x0a,0x0a,0x1f,0x00,  //mem
					 0x00,0x08,0x04,0x02,0x01,0x01,0x1e,0x00, //ha
					 0x17,0x14,0x14,0x12,0x12,0x12,0x1e,0x00, //ye
					 0x00,0x01,0x01,0x01,0x01,0x01,0x0f,0x00,  //dal
					 0x04,0x05,0x01,0x01,0x01,0x01,0x1f,0x00 //non
	                                                                  };
	for(i=0;i<=55;i++)
	{
		LCD_voidWriteChar(pattern[i]);
	}
	SendInstruction(set_DDRAM);


		LCD_WritingPosition(2,5);
		for(i=0;i<7;i++)
			LCD_voidWriteChar(i);



}*/






