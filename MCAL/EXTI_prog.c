#include "../TYPES.h"
#include "../BIT_LEVEL.h"
#include "EXTI_private.h"
#include "EXTI_conf.h"
#include "EXTI_int.h"


/*EXTI Init*/

void EXTI0_VidIntInit(){
	/*Sense Control*/
#if 	EXTI0_SENSE_CONTROL == EXTI_LOW_LEVEL_SC
		CLR_Bit(MCUCR,MCUCR_ISC00_PIN);
		CLR_Bit(MCUCR,MCUCR_ISC01_PIN);
#elif 	EXTI0_SENSE_CONTROL == EXTI_FALLING_EDGE_SC
		Set_Bit(MCUCR,MCUCR_ISC01_PIN);
		CLR_Bit(MCUCR,MCUCR_ISC00_PIN);
#elif	EXTI0_SENSE_CONTROL == EXTI_RISING_EDGE_SC
		Set_Bit(MCUCR,MCUCR_ISC01_PIN);
		Set_Bit(MCUCR,MCUCR_ISC00_PIN);
#elif	EXTI0_SENSE_CONTROL == EXTI_ON_CHANGE_SC
		Set_Bit(MCUCR,MCUCR_ISC00_PIN);
		CLR_Bit(MCUCR,MCUCR_ISC01_PIN);

#endif
	/*Enable Interrupt*/

		Set_Bit(GICR,GICR_INT0_PIN);
}
void EXTI1_VidIntInit(){
	/*Sense Control*/
#if 	EXTI1_SENSE_CONTROL == EXTI_LOW_LEVEL_SC
		CLR_Bit(MCUCR,MCUCR_ISC10_PIN);
		CLR_Bit(MCUCR,MCUCR_ISC11_PIN);
#elif 	EXTI1_SENSE_CONTROL == EXTI_FALLING_EDGE_SC
		Set_Bit(MCUCR,MCUCR_ISC11_PIN);
		CLR_Bit(MCUCR,MCUCR_ISC10_PIN);
#elif	EXTI1_SENSE_CONTROL == EXTI_RISING_EDGE_SC
		Set_Bit(MCUCR,MCUCR_ISC11_PIN);
		Set_Bit(MCUCR,MCUCR_ISC10_PIN);
#elif	EXTI1_SENSE_CONTROL == EXTI_ON_CHANGE_SC
		Set_Bit(MCUCR,MCUCR_ISC10_PIN);
		CLR_Bit(MCUCR,MCUCR_ISC11_PIN);

#endif
	/*Enable Interrupt*/

		Set_Bit(GICR,GICR_INT1_PIN);
}
void EXTI2_VidIntInit(){
	/*Sense Control*/

#if 	EXTI2_SENSE_CONTROL == EXTI_FALLING_EDGE_SC
		CLR_Bit(MCUCSR,MCUCSR_ISC2_PIN);
#elif	EXTI2_SENSE_CONTROL == EXTI_RISING_EDGE_SC
		Set_Bit(MCUCSR,MCUCSR_ISC2_PIN);

#endif
	/*Enable Interrupt*/

		Set_Bit(GICR,GICR_INT2_PIN);
}


/*A pointer to {function that takes no argument(void),
  returns nothing (void)}.. pointing to NULL*/
void (* EXTI0_Func)(void) = NULL;


/*a function that takes pointer to function as an argument*/
void EXTI0_CallBack (void(*func)(void)){
	/*CAll back function pointing to the passed function argument*/
	EXTI0_Func = func ;
}

void __vector_1 (void) __attribute__((signal)) ;

void __vector_1 (void){
	if(EXTI0_Func != NULL)
		EXTI0_Func();
}


void (* EXTI1_Func)(void) = NULL; /*ptr*/


void EXTI1_CallBack (void(*func)(void)){ /*fun agr is ptr*/
	EXTI1_Func = func ;
}

void __vector_2 (void) __attribute__((signal)) ;

void __vector_2 (void){
	if(EXTI1_Func != NULL)
		EXTI1_Func();
}


/*A pointer to {function that takes no argument(void),
  returns nothing (void)}.. pointing to NULL*/
void (* EXTI2_Func)(void) = NULL;


/*a function that takes pointer to function as an argument*/
void EXTI2_CallBack (void(*func)(void)){
	/*CAll back function pointing to the passed function argument*/
	EXTI2_Func = func ;
}

void __vector_3 (void) __attribute__((signal)) ;

void __vector_3 (void){
	if(EXTI2_Func != NULL)
		EXTI2_Func();
}