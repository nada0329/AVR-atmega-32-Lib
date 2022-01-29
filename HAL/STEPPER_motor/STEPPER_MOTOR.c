
#include "TYPES.h"
#include "DIO_int.h"
#include "STEPPER_MOTOR.h"
#include "avr/delay.h"

void STEPPER_MOTOR_voidInit(void)
{
	DIO_voidSetPinDir(PORT_CONF , Blue , output);
	DIO_voidSetPinDir(PORT_CONF , Pink , output);
	DIO_voidSetPinDir(PORT_CONF , Yellow , output);
	DIO_voidSetPinDir(PORT_CONF , Orange , output);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
}

void STEPPER_MOTOR_voidCW(void)
{
	DIO_voidSetPinVal(PORT_CONF ,Blue, high);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, high);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, high);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, high);
	_delay_ms(3);

}


void STEPPER_MOTOR_voidCCW(void)
{
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, high);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, high);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, high);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, high);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
}


void STEPPER_MOTOR_voidCWhalfstep(void)
{
	DIO_voidSetPinVal(PORT_CONF ,Blue, high);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, high);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, high);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, high);
	DIO_voidSetPinVal(PORT_CONF ,Pink, high);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, high);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, high);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, high);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, high);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, high);
	DIO_voidSetPinVal(PORT_CONF ,Orange, high);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, high);
	_delay_ms(3);

}

void STEPPER_MOTOR_voidCCWhalfstep(void)
{
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, high);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, high);
	DIO_voidSetPinVal(PORT_CONF ,Orange, high);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, high);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, high);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, high);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, low);
	DIO_voidSetPinVal(PORT_CONF ,Pink, high);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, high);
	DIO_voidSetPinVal(PORT_CONF ,Pink, high);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, high);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, low);
	_delay_ms(3);
	DIO_voidSetPinVal(PORT_CONF ,Blue, high);
	DIO_voidSetPinVal(PORT_CONF ,Pink, low);
	DIO_voidSetPinVal(PORT_CONF ,Yellow, low);
	DIO_voidSetPinVal(PORT_CONF ,Orange, high);
	_delay_ms(3);
	
}