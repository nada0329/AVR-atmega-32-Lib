#include "TYPES.h"
#include "DIO_int.h"
#include "s7_seg.h"

void S7SEG_voidInit(u8 PortName)
{
	DIO_viodSetPortDir(PortName, 0xff);
}
//----------------------------------------------------------
void S7SEG_voidDisplay(u8 PortName , u8 Numberon7Seg)
{


	switch(Numberon7Seg)
	{
	case 0:
			DIO_voidSetPortVal( PortName , zero );
			break;
	case 1:
			DIO_voidSetPortVal( PortName , one );
			break;
	case 2:
		    DIO_voidSetPortVal( PortName , two );
		    break;
	case 3:
			DIO_voidSetPortVal( PortName , three );
			break;
	case 4:
			DIO_voidSetPortVal( PortName , four );
			break;
	case 5:
			DIO_voidSetPortVal( PortName , five );
			break;
	case 6:
			DIO_voidSetPortVal( PortName , six );
			break;
	case 7:
			DIO_voidSetPortVal( PortName , seven );
			break;
	case 8:
			DIO_voidSetPortVal( PortName , eight );
			break;
	case 9:
			DIO_voidSetPortVal( PortName , nine );
			break;
    default :
        	DIO_voidSetPortVal( PortName , dot );
	}

}
//--------------------------------------------------------

void S7SEG_voidClear(u8 PortName )
{
	DIO_voidSetPortVal(PortName , 0xff);
}



