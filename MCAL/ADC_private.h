#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

#define ADC_TRIGGER_ENABLE		0
#define ADC_TRIGGER_DISABLE		1
#define ADC_RIGHT				0
#define ADC_LEFT				1
#define ADC_VCC					1
#define ADC_INTERNAL_VREF		3
#define ADC_VREF_OFF			0
#define ADC_PRESCALAR_128		7
#define ADC_PRESCALAR_64		6
#define ADC_PRESCALAR_32		5
#define ADC_PRESCALAR_16		4
#define ADC_PRESCALAR_8			3
#define ADC_PRESCALAR_4			2
#define ADC_PRESCALAR_2			1


#define ADCMUX_REG *((volatile u8*)0x27)
#define ADCSRA_REG *((volatile u8*)0x26)
#define ADCL_REG *((volatile u16*)0x24)
#define SFIOR *((volatile u8*)0x50)

/*****Register Bits******/
			/* ADMUX */
#define REFS1	7
#define REFS0	6
#define ADLAR	5
#define MUX4 	4
#define MUX3 	3
#define MUX2 	2
#define MUX1 	1
#define MUX0	0
			/*ADCSRA*/
#define ADEN 	7
#define ADSC 	6
#define ADATE 	5
#define ADIF 	4
#define ADIE 	3
#define ADPS2 	2
#define ADPS1 	1
#define ADPS0	0
			/*SFIOR*/
#define ADTS2	7 
#define ADTS1 	6
#define ADTS0	5


#endif /* ADC_PRIVATE_H_ */
