/* LG3_Q5b -> Compute the result for a math equation by getting variables from the user */

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>
int main(void)
{
	//Declare the variables and initialize the necessary ones with the values
	int a, b, c;
	double e, r, result;

	// Get the variables from the user
	printf("Enter a: ");
	scanf("%d", &a);

	printf("Enter b: ");
	scanf("%d", &b);

	printf("Enter c: ");
	scanf("%d", &c);

	printf("Enter e: ");
	scanf("%lf", &e);

	printf("Enter r: ");
	scanf("%lf", &r);

	//Perform the computation
	result = r + sqrt((c + a * r / b) / (r * a / e)) / ((b + 4) / e);

	//Display output
	printf("\nThe result of the equation is %.2f\n", result);

	return 0;
}