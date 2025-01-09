// LG11_Q3 -> Gets real numbers from the user until the sentinel value -999 has been entered
// in order to divide each given number to its integral and fractional parts 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function prototypes, these make managing functions easier before having written their definitions
void divideReal(double num, double* frac, int* integral);
int roundNum(int integral, double frac);

int main(void)
{
	int integral;
	double num, frac, sumIntegral = 0, sumFrac = 0;

	printf("Enter a real number (-999 to stop): ");
	scanf("%lf", &num);

	while (num != -999)
	{
		divideReal(num, &frac, &integral);

		printf("The rounded number is %d\n\n", roundNum(integral, frac));

		sumIntegral += integral;
		sumFrac += frac;

		printf("Enter a real number (-999 to stop): ");
		scanf("%lf", &num);
	}

	printf("\nSum of the integral parts : %.3f\n", sumIntegral);
	printf("Sum of the fractional parts : %.3f\n", sumFrac);

	return 0;
}


//that gets a real number as parameter and divides that into its integral and fractional parts
void divideReal(double num, double* frac, int* integral)
{
	*integral = num;
	printf("The integral part: %d\n", *integral);
	*frac = num - *integral;
	printf("The fractional part: %f\n", *frac);
}

//that gets the fractional part and the integral part as parameters to round it up or down depending on the fractional part of the given number and return the final result.
int roundNum(int integral, double frac)
{
	if (frac >= 0.5)
		return integral + 1;
	return integral;
}
