void grap()
{
setMotorSpeed(motorA,20);
delay(2500);
setMotorSpeed(motorA,0);
setMotorSpeed(motorD,20);
delay(2500);

}

task main()
{
int degree;
grap();

setMotorSpeed(motorD,0);
degree=getMotorEncoder(motorA);
displayBigTextLine(1,"%d",degree);

delay(2000);
if(degree<=300)
{
setMotorSpeed(motorD,-20);
delay(2500);
setMotorSpeed(motorD,0);
}
}
