#pragma config(Motor,  port1,           leftMotor,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port6,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           armMotor,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          rightMotor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
// Forward 24"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(800);

// Sharp right turn
motor[leftMotor] = 127;
motor[rightMotor] = -127;
wait1Msec(400);

// Forward 24"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(800);

// Sharp right turn
motor[leftMotor] = 127;
motor[rightMotor] = -127;
wait1Msec(400);

// Forward 24"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(800);

// Sharp left turn
motor[leftMotor] = -127;
motor[rightMotor] = 127;
wait1Msec(400);

// Forward 72"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(2200);
 
// Sharp left turn
motor[leftMotor] = -127;
motor[rightMotor] = 127;
wait1Msec(400);

// Forward 50"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(1666);

// Sharp left turn
motor[leftMotor] = -127;
motor[rightMotor] = 127;
wait1Msec(400);

// Forward 24"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(800);

// Sharp left turn
motor[leftMotor] = -127;
motor[rightMotor] = 127;
wait1Msec(400);

// Forward 24"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(800);

// Sharp right turn
motor[leftMotor] = 127;
motor[rightMotor] = -127;
wait1Msec(400);

// Forward 24"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(800);

// Sharp right turn
motor[leftMotor] = 127;
motor[rightMotor] = -127;
wait1Msec(400);

// Forward 24"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(800);

// Sharp left turn
motor[leftMotor] = -127;
motor[rightMotor] = 127;
wait1Msec(400);

// Forward 50"
motor[leftMotor] = 127;
motor[rightMotor] = 127;
wait1Msec(1666);

} 
