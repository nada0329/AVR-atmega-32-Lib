#ifndef _EXTI_INT_H_
#define _EXTI_INT_H_


/*EXTI Init*/

void EXTI0_VidIntInit();
void EXTI1_VidIntInit();
void EXTI2_VidIntInit();

void EXTI0_CallBack (void(*func)(void));
void EXTI1_CallBack (void(*func)(void));
void EXTI2_CallBack (void(*func)(void));

#endif /*_EXTI_INT_H_*/