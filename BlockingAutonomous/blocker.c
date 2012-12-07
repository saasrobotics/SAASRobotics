#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTServo,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Sensor, S2,     LimitSwitches,  sensorI2CCustom9V)
#pragma config(Sensor, S3,     IRS1,           sensorI2CCustom)
#pragma config(Sensor, S4,     ,               sensorTouch)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, PIDControl, encoder)
#pragma config(Motor,  mtr_S1_C2_1,     motorF,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     FourBar,       tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C3_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_6,    servo6,               tServoNone)
//#include "../common/pragmas.h"
#include "../common/MoveForward.h"
#include "../common/MoveBack.h"
#include "../common/Rotate90.h"

task main()
{
 	while(nPgmTime < 5000)
	{
 		MoveForward(30);
	}
	if(nPgmTime > 5000)
	{
		Rotate90();
	}
	while(nPgmTime < 10000 && nPgmTime > 6000)
	{
		Move Forward(30);
	}

}
