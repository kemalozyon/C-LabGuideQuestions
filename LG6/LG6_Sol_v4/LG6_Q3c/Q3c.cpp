#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	//declare variables
	int i, m, n; //loop counter,m and n for the range

	double	average, //average of the numbers
		sum = 0;		//sum of the numbers

	printf("Enter a range: ");
	scanf("%d %d", &m, &n);

	//loop counter starts from m and goes to n
	for (i = m; i <= n; i++)
	{
		sum = sum + i; //add the number i to sum
	}

	//calculate average by dividing sum by number of elements in the given range
	average = sum / (n - m + 1);

	printf("The sum of the numbers is %.0f", sum);
	printf("\nThe average of the numbers is %.2f\n", average);

	return (0);
}