
#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_

/* configure here */
#define CONF_PORT APORT
#define CONF_PIN1 Pin0
#define CONF_PIN2 Pin1

void DC_MOTOR_voidInit(void);
void DC_MOTOR_voidBreak(void);
void DC_MOTOR_voidRotateleft(void);
void DC_MOTOR_voidRotateright(void);

#endif /* DC_MOTOR_H_ */
