// LG5_Q4 -> Purpose is to create a random number and according to the number find a discount rate to find the discounted bill

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h> //for srand funtion
#include <time.h>  //for time function

#define RATE1 0.15
#define RATE2 0.35
#define RATE3 0.5
#define RATE4 0.75
#define RATE5 0.80

int main(void)
{
	int number;
	double bill, discount;

	printf("Enter your bill: ");
	scanf("%lf", &bill);

	//create a random number between 1-5
	srand(time(NULL));
	number = rand() % 5 + 1;

	//select the rate according to the random number
	switch (number)
	{
	case 1:
		discount = RATE1;
		break;

	case 2:
		discount = RATE2;
		break;

	case 3:
		discount = RATE3;
		break;

	case 4:
		discount = RATE4;
		break;

	default:
		discount = RATE5;
	}

	//Display the result
	printf("\nYou won %.0f%% discount\nYour new bill is %.2f TL", discount * 100, bill - bill * discount);

	return 0;
}