/* LG3_Q5a -> Compute the result for a math equation */

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main(void)
{
	//Declare the variables and initialize the necessary ones with the values
	/* Test Data
	int a, b, c;
	a = b = c = 1;
	double e, r, result;
	e = r = 1;
	*/
	int a = 3, b = 8, c = 9;
	double e = 5.5, r = 2.5, result;
	

	//Perform the computation
	 result = r + sqrt((c + a * r / b) / (r * a / e)) / ((b + 4) / e);

	//Display output
	printf("The result of the equation is %.2f\n", result);

	return 0;
}