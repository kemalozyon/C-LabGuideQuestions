// CTIS151-LG10_Q4
/* Converts a number in a base smaller than 10 to its decimal value, calls a user-defined function to do the conversion */
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int convertToBase(int base, int num) 
{
	
	int	p = 0;
	int decimal = 0;

	while (num != 0)
	{
		decimal += num % 10 * pow(base, p++);
		num /= 10;
	}

	return decimal;
}

int main(void) {
	int base, number, decimal;

	printf("Enter the base: ");
	scanf("%d", &base);

	printf("Enter the number: ");
	scanf("%d", &number);

	printf("\n");
	decimal = convertToBase(base, number);
	printf("Decimal value of the number %d in base %d is %d.\n", number, base, decimal);

	return(0);
}