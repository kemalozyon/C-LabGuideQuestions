#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	//declare variables
	int i; //loop counter

	double average, //average of the numbers
		sum = 0; //sum of the numbers

	//loop counter starts from 1 and goes to 10
	for (i = 1; i <= 10; i++)
	{
		sum = sum + i; //add the number i to sum
	}
	average = sum / 10; //calculate average by dividing sum by 10

	printf("The sum of the numbers is %.0f", sum);
	printf("\nThe average of the numbers is %.2f\n", average);

	return (0);
}