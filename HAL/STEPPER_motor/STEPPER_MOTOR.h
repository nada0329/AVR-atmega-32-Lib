
#ifndef STEPPER_MOTOR_STEPPER_MOTOR_H_
#define STEPPER_MOTOR_STEPPER_MOTOR_H_

/* configure */
#define Blue     Pin0
#define Pink     Pin1
#define Yellow   Pin2
#define Orange   Pin3
#define PORT_CONF APORT

void STEPPER_MOTOR_voidInit(void);
void STEPPER_MOTOR_voidCW(void);
void STEPPER_MOTOR_voidCCW(void);
void STEPPER_MOTOR_voidCWhalfstep(void);
void STEPPER_MOTOR_voidCCWhalfstep(void);

#endif /* STEPPER_MOTOR_STEPPER_MOTOR_H_ */
