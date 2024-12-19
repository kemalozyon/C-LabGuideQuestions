// LG5_Q1 -> Purpose is to get the birth day and month of the alumni to calculate the annual fee amount 

#define _CRT_SECURE_NO_WARNINGS  

#include <stdio.h>
#define BASE_FEE 1200
#define DIS1 0.10
#define DIS2 0.15

int main(void)
{
	//declare the fix fee
	//declare the other variables
	int day, month;
	double fee;

	//getting day and month from the user
	printf("Welcome to University Alumni Club Membership System");
	printf("\n\nEnter your birth day and month: ");
	scanf("%d %d", &day, &month);

	fee = BASE_FEE;
	//check if the birth month 3,6,12 get the %10 discount for the fee
	if (month == 3 || month == 6 || month == 12)
		fee = fee - fee * DIS1;

	//check if the birth day between 15 and 20 get the %15 discount for the fee
	if (day >= 15 && day <= 20)
		fee = fee - fee * DIS2;

	//display the final fee
	printf("Final fee is %.2f TL\n", fee);

	return 0;
}