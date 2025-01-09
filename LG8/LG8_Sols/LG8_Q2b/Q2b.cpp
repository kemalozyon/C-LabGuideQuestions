#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main(void) {
	int i, n, sign = -1;
	double x, res, power;

	printf("Enter a value for n: ");
	scanf("%d", &n);

	while (n <= 0)
	{
		printf("Enter a value for n: ");
		scanf("%d", &n);
	}

	printf("Enter x value: ");
	scanf("%lf", &x);

	res = x;
	power = x;

	for (i = 3; i <= (2 * n + 1); i = i + 2)
	{
		power *= x * x;
		res += sign * power / (i - 1);
		sign = sign * -1;
	}

	printf("\nThe result is %.2f", res);
	return (0);
}