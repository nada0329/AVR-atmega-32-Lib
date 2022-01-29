
#include "TYPES.h"
#include "DIO_int.h"
#include "DC_MOTOR.h"

void DC_MOTOR_voidInit(void)
{
	DIO_voidSetPinDir(CONF_PORT ,CONF_PIN1 , output);
	DIO_voidSetPinDir(CONF_PORT ,CONF_PIN2 , output);
}


void DC_MOTOR_voidBreak(void)
{
	DIO_voidSetPinVal(APORT ,Pin0 , low);
	DIO_voidSetPinVal(APORT ,Pin1 , low);
}

void DC_MOTOR_voidRotateleft(void)
{
	DIO_voidSetPinVal(APORT ,Pin0 , high);
	DIO_voidSetPinVal(APORT ,Pin1 , low);
}

void DC_MOTOR_voidRotateright(void)
{
	DIO_voidSetPinVal(APORT ,Pin0 , low);
	DIO_voidSetPinVal(APORT ,Pin1 , high);
}
