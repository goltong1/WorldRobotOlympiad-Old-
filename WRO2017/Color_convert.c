/**
 * hitechnic-colour-v2.h provides an API for the HiTechnic Color V2 Sensor.  This program
 * demonstrates how to use that API.
 *
 * Changelog:
 * - 0.1: Initial release
 * - 0.2: More comments
 * - 0.3: Removed common.h from includes
 *
 * Credits:
 * - Big thanks to HiTechnic for providing me with the hardware necessary to write and test this.
 *
 **/
 #include "hitechnic-colour-v2.h"
task main()
{
	int result = 0;

tHTCS2 colorSensor;
initSensor(&colorSensor, S3);

eraseDisplay();
while(true)
{
if (!readSensor(&colorSensor)) {
      displayTextLine(4, "ERROR!!");
      sleep(2000);
      stopAllTasks();
}
switch(colorSensor.color)
{
case 0:
	result = 1;
	break;
case 1:
	result = 5;
	break;
case 2:
	result = 2;
	break;
case 3:
	if(colorSensor.blue>60){
		result = 2;
	break;
	}else if(colorSensor.blue>15){
		result = 1;
	break;
	}else{
		result = 3;
	break;
	}
case 4:
	result = 3;
	break;
case 5:
	result = 4;
	break;
case 6:
	result = 4;
	break;
case 9:
	result = 5;
	break;
case 10:
	result = 5;
	break;
case 12:
	if(colorSensor.blue>60){
		result = 2;
		break;
	}else{
		result = 1;
		break;
	}

default:
	result = 0;
}
displayCenteredBigTextLine(1, "Result = %d", result);
}
}
