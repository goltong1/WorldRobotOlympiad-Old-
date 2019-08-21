#include "hitechnic-colour-v2.h"

task main()
{
	int a;
//a=Color_Convert(4);

resetMotorEncoder(motorB);

 //motor[motorB] = 0;
 //motor[motorC] = 0;
 //motor[rightwheel] = 0;
sleep(1000);
//setMotorSync(nMotorOne, nMotorTwo, nTurnRatio, nSignedPower);
setMotorSyncEncoder(motorB, motorC, 0, 500, 50);
//setMotorSyncTime(nMotorOne, nMotorTwo, nTurnRatio, nTimeMsec, nSignedPower);

sleep(1000);


}
