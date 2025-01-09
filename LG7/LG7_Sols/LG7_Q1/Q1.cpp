#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main(void)
{
	double y, sum = 0.0;	
	int i;


	printf("Enter the value of y: ");
	scanf("%lf", &y);


	for (i = 1; i <= 56; i++)
	{
		sum = sum + pow(y, i) / (2 * i);
	}


	printf("The result is %.2f\n", sum);

	return(0);
}
