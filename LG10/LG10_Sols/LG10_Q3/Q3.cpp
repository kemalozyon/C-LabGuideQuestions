//LG10-Q3
/* Write a C program that takes a positive integer number.
The program sums up the digits of the integer to reduce it to a new integer,
repeating the process until only a single digit remains.
*/
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int findSumOfDigits(int num);


int main(void)
{
	int number,		//store the number
		sum; 	//total sum of the digits

	//read a positive number
	do {
		printf("Enter a positive integer: ");
		scanf("%d", &number);
	} while (number <= 0);

	if (number < 10)
		printf("Sum of digits = %d\n", number);
	else
		do {
			//find the sum of the digits of the number
			sum = findSumOfDigits(number);

			//display the sum of the digits of the number
			printf("Sum of digits = %d\n", sum);

			//new number will be the sum
			number = sum;

		} while (number >= 10); //continue to loop until the sum of digits is less than 10 (means only have 1 digit)

		return 0;
}

int
findSumOfDigits(int num)
{
	int sum = 0;

	while (num != 0)
	{
		// Add the last digit of num to the sum
		sum += num % 10;

		// Remove the last digit from num
		num /= 10;
	}

	return sum;
}