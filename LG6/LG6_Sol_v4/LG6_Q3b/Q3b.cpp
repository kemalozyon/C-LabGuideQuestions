#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main(void)
{
	//declare variables
	int i, n; //loop counter

	double average, //average of the numbers
		sum = 0; //sum of the numbers

	printf("Enter a value: ");
	scanf("%d", &n);

	//loop counter starts from 1 and goes to n
	for (i = 1; i <= n; i++)
	{
		sum = sum + i; //add the number i to sum
	}
	average = sum / n; //calculate average by dividing sum by n

	printf("The sum of the numbers is %.0f", sum);
	printf("\nThe average of the numbers is %.2f\n", average);

	return (0);
}