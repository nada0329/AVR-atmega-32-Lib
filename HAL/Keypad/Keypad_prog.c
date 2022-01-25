#include "Types.h"
#include "BIT_LEVEL.h"
#include "DIO_int.h"
#include "Keypad_private"
#include "Keypad_conf.h"
#include "Keypad_int.h"

void KEYPAD_voidInit(void)
{
	 DIO_voidSetPinDir(input_port , R0 , input);
     DIO_voidSetPinDir(input_port , R1 , input);
	 DIO_voidSetPinDir(input_port , R2 , input);
	 DIO_voidSetPinDir(input_port , R3 , input);
	 DIO_voidSetPinDir(output_port , C0 , output);
	 DIO_voidSetPinDir(output_port , C1 , output);
	 DIO_voidSetPinDir(output_port , C2 , output);
	 DIO_voidSetPinDir(output_port , C3 , output);

	 DIO_voidSetPinVal(output_port , C0 , high);
	 DIO_voidSetPinVal(output_port , C1 , high);
	 DIO_voidSetPinVal(output_port , C2 , high);
	 DIO_voidSetPinVal(output_port , C3 , high);

}


u8 DecideKey(u8 num)
{
	switch(num)
	{
	case eq:
			return '=';
			break;
	case modl:
			return '%';
			break;
	case mul:
		    return '*';
		    break;
	case div:
			return '/';
			break;
	case add:
			return '+';
			break;
	case sub:
			return '-';
			break;
	default:
			return num;
			break;

	}


}

u8 KEYPAD_voidGetKey(void)
{

	u8 col_arr[4] ={C0,C1,C2,C3};
	u8 row_arr[4]={R0,R1,R2,R3};
	u8 val=not_pressed, c,r,key=not_pressed;
	for(c=0; c<=3; c++)
	{
		DIO_voidSetPinVal(output_port, col_arr[c] ,low);
		for(r=0;r<4;r++)
		{
			if( DIO_u8GetPinVal(input_port,row_arr[r])==0)
			{
				/* pressed */
				key= r*4+c;
				while( DIO_u8GetPinVal(input_port,row_arr[r])==0 );
				// return the key here to take the first pressed
				//in this case we take the last pressed
				// to avoid bouncing
				_delay_ms(50);
			}
			else
			{
				/* not pressed */
			}

		}
		DIO_voidSetPinVal(output_port,col_arr[c],high);

	}

	if(key != not_pressed)
		{
			val=DecideKey(key);
		}



return val;
}