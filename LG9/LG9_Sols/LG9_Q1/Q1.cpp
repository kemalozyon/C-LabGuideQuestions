#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define MAX 5

int main(void)
{
	double x, fResult;
	int i;

	for (i = 1; i <= MAX; i++)
	{

		printf("Enter");
		switch (i)
		{
		case 1:
			printf(" first");  break;
		case 2:
			printf(" second"); break;
		case 3:
			printf(" third");  break;
		case 4:
			printf(" fourth"); break;
		case 5:
			printf(" fifth");
		}
		printf(" x value: ");
		scanf("%lf", &x);

		if (x <= 0)
			fResult = 0;
		else if (x <= 10)
			fResult = 3.0 / sqrt(pow(x, 3) + 1);
		else
			fResult = fabs(x) + pow(x, 5);

		printf("f(%.1f) = %0.3f\n\n", x, fResult);
	}

	return(0);
}
