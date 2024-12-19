/* LG4_Q2 -> Gets two whole number values from the user, puts them into the right places in a given logical statement to see whether the statement is true or false */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	//Declare variables
	int num1, num2;

	//Get the inputs
	printf("Enter the first number: ");
	scanf("%d", &num1);

	printf("Enter the second number: ");
	scanf("%d", &num2);

	//Displaying the result
	printf("The result is %d\n", abs(num1 - num2) * 12 == 60 || !(num1 / num2 != -2) && (num2 - 1) / (num1 + 9) > 0);

	return 0;
}

