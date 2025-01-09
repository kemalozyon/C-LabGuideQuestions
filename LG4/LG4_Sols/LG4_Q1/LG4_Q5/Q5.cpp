/* LG4_Q5 -> Calculate the arithmetic expression using built-in functions */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	double a, b, c;
	double result;
	
	// Test Data
	//a = b = c = 1;

	//get the values of a,b, and c values from the user
	printf("Enter the values of a, b, and c respectively: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if (a < 0 || b + pow(a, 3) < 0 || 4 * pow(c, 3) + b - a == 0 || c == 0)
		printf("\nThere is an error caused by the values.\n\n");
	else
		//calculate the result by using the given equation and display the result
		printf("\nThe result is %.2f\n\n", ((pow(a, 8. / 5) + sqrt(a) / (2 * c)) / sqrt(b + pow(a, 3)) + fabs(a + c)) / (4 * pow(c, 3) + b - 2 * a));

	return 0;
}

