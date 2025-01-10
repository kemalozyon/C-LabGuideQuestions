#include <stdio.h>
#define MINUTE 300
int main(void)
{
//declare variables
double neededHour = 0, batterySituation = 0;
//get the battery situation from the user
printf("Please enter your battery situation ( Full : 1 / Half : 0.5 / Empty : 0) :" );
scanf("%lf", &batterySituation);
//calculate battery needed to use the cordless car for one hour
neededHour = (1-batterySituation) * MINUTE;

//output given
printf("Your Battery Situation is %f \n You need to charge the battery for %0.2f minute(s)\n", batterySituation,neededHour);
return 0;
}