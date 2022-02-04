#include "../TYPES.h"
#include "../BIT_LEVEL.h"
#include "IVT.h"
#include "ADC_private.h"
#include "ADC_conf.h"
#include "ADC_int.h"

u16 Result;
void ADC_vidInit(void)
{
	ADCMUX_REG= (ADC_VREF << REFS0)|(ADC_RESULT_ADJUST << ADLAR);
	ADCSRA_REG= (1<<ADEN)|(ADC_PRESCALAR);
	
}
u16 ADC_u16GetADCRead(u8 u8ChIdx)
{
	//make sure that channal id is acceptable
	u8ChIdx= u8ChIdx & 0b00000111;
	// clear 3botton bits before selection
	ADCMUX_REG= (ADCMUX_REG & 0xf8) | u8ChIdx;
	// start conv
	ADCSRA_REG |= (1<< ADSC);
	while(0== getbit(ADCSRA_REG,ADIF));
	//clear the flag
	SET_BIT(ADCSRA_REG,ADIF);
	return ADCL_REG;
		
	
}
void ADC_vidStartConv(u8)
{
	//make sure that channal id is acceptable
	u8ChIdx= u8ChIdx & 0b00000111;
	// clear 3botton bits before selection
	ADCMUX_REG= (ADCMUX_REG & 0xf8) | u8ChIdx;
	// start conv
	ADCSRA_REG |= (1<< ADSC);
	
}
u16 ADC_u16GetConv(void)
{
	return Result;
}

ISR(ADC)
{
	Result=ADCSRA_REG;
}
