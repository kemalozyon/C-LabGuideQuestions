/* LG3_Q3 -> Formatting the double number */
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	//Define the variable
	double value;

	printf("Enter a number (2 digits integral and 4 digits fractional): ");
	scanf("%lf", &value);

	//Displaying the value with the given format
	printf("\n%.0f\n", value);
	printf("%.5f\n", value);
	printf("%7.8f\n", value);
	printf("%9.1f\n", value);
	printf("%9.7f\n", value);
	printf("%-.2f\n", value);
	printf("%6.f\n", value);

	return(0);
}