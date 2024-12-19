#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main(void)
{
	double y, sum = 0, fact;
	int i, k, sign = -1;

	printf("Enter the value of y: ");
	scanf("%lf", &y);

	while (y == 2)
	{
		printf("Division by zero!\n\n");

		printf("Enter the value of y: ");
		scanf("%lf", &y);
	}

	for (i = 2; i <= 14; i += 2)
	{
		fact = 1;
		for (k = 2; k <= i; k++)
			fact *= k;
		sum = sum + sign * fact / pow(y - 2, i + 1);

		sign *= -1;
	}

	printf("\nThe result is %.4f\n\n", sum);

	return 0;
}
