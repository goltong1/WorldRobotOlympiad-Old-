#include "WRO2017.h"
task main()
{
	setMotorSyncEncoder(motorB, motorC, 0, 350, 50);
	while(nMotorRunState[motorB]!=runStateIdle){}
	sleep(100);
	setMotorSyncEncoder(motorB, motorC, 50, 260, 50);sleep(3000);



resetMotorEncoder(motorB);
while(getColorReflected(S1)+getColorReflected(S2)>=70)
{
setMotorSpeed(motorB,20);
setMotorSpeed(motorC,20);
}
setMotorSpeed(motorB,0);
setMotorSpeed(motorC,0);


resetMotorEncoder(motorB);
while(getMotorEncoder(motorB)<=40)
{
setMotorSpeed(motorB,20);
setMotorSpeed(motorC,20);
}
setMotorSpeed(motorB,0);
setMotorSpeed(motorC,0);
line_tracing(0.1,0,0,15,70,0);
setMotorSpeed(motorB,0);
setMotorSpeed(motorC,0);
setMotorSpeed(motorA,0);
grap();





int degree;
degree=getMotorEncoder(motorA);
put();
resetMotorEncoder(motorB);
while(getMotorEncoder(motorB)>=-140)
{
setMotorSpeed(motorB,-20);
setMotorSpeed(motorC,-20);
}
if(degree<=230)
{
turn_left(20,120,200);
}
else
{
Turn_right(20,40,50);
line_tracing(0.1,0,0,15,70,0);
setMotorSpeed(motorB,0);
setMotorSpeed(motorC,0);
grap();
while(getMotorEncoder(motorB)>=-140)
{
setMotorSpeed(motorB,-20);
setMotorSpeed(motorC,-20);
}
Turn_right(20,40,50);
setMotorSpeed(motorB,0);
setMotorSpeed(motorC,0);
Turn_right(20,45,200);
put();
}
up();
resetMotorEncoder(motorB);
while(getMotorEncoder(motorB)<=140)
{
setMotorSpeed(motorB,20);
setMotorSpeed(motorC,20);
}
setMotorSpeed(motorB,0);
setMotorSpeed(motorC,0);
down();
resetMotorEncoder(motorB);
while(getMotorEncoder(motorB)>=-140)
{
setMotorSpeed(motorB,-20);
setMotorSpeed(motorC,-20);
}









}
