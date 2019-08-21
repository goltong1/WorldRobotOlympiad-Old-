void Turn_right(int overR,int power)
{
while(getMotorEncoder(motorB)<=60)
{setMotorSpeed(motorB,power);
setMotorSpeed(motorC,-power);
}
while(getColorReflected(S2)>=40)
{
setMotorSpeed(motorB,power);
setMotorSpeed(motorC,-power);
}
resetMotorEncoder(motorB);
while(getMotorEncoder(motorB)<=overR)
{
setMotorSpeed(motorB,power);
setMotorSpeed(motorC,-power);
}
setMotorSpeed(motorB,0);
setMotorSpeed(motorC,0);
delay(1000);
}
void Turn_left(int overR,int power)
{
while(getMotorEncoder(motorC)<=60)
{setMotorSpeed(motorB,-power);
setMotorSpeed(motorC,power);
}
while(getColorReflected(S2)>=40)
{
setMotorSpeed(motorB,-power);
setMotorSpeed(motorC,power);
}
resetMotorEncoder(motorB);
while(getMotorEncoder(motorC)<=overR)
{
setMotorSpeed(motorB,-power);
setMotorSpeed(motorC,power);
}
setMotorSpeed(motorB,0);
setMotorSpeed(motorC,0);
delay(1000);
}
//Turn Modules



int Calcu_path(int Goal,int Now,int )
{
int D_move=Goal-Now


int arr1[]=[D_move,]
return(arr1)
}
void go_to_next_line()
{

}
void ()
{

}
task main()
{
int arr1[];
arr1[]=Calcu_path();

}
