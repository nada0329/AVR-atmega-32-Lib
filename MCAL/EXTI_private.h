#ifndef _EXTI_PRIVATE_H_
#define _EXTI_PRIVATE_H_

/*Control Registers for INT0, INT1*/
#define MCUCR 		*((volatile u8*)0x55)
#define MCUCR_ISC00_PIN 		0
#define MCUCR_ISC01_PIN 		1
#define MCUCR_ISC10_PIN 		2
#define MCUCR_ISC11_PIN 		3


/*Control Register for INT2*/
#define MCUCSR		*((volatile u8*)0x54)
#define  MCUCSR_ISC2_PIN 	6

/*INT0, INT1, INT2  Enable Interrupts*/
#define GICR 			*((volatile u8*)0x5B)
#define GICR_INT1_PIN 			7
#define GICR_INT0_PIN 			6
#define GICR_INT2_PIN 			5

/*INT0, INT1, INT2 Interrupts Flags*/
#define GIFR 			*((volatile u8*)0x5A)
#define GIFR_INTF1_PIN 7
#define GIFR_INTF0_PIN 6
#define GIFR_INTF2_PIN 5

#endif /*_EXTI_PRIVATE_H_*/