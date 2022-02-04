#ifndef ADC_INT_H_
#define ADC_INT_H_

void ADC_vidInit(void);
u16 ADC_u16GetADCRead(u8);  // sync func
/* use the following in INT mode*/
void ADC_vidStartConv(u8);  // async func
u16 ADC_u16GetConv(void);

#endif /* ADC_INT_H_ */
