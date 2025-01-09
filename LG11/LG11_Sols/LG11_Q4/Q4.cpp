/* LG11_Q4 -> Greatest Common Divisor */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void gcdLCM(int a, int b, int* lcm, int* gcd);

int main(void)
{
	int	i, n1, n2, lcm, gcd;
	i = 1;

	printf("Enter a pair(0 to end):");
	scanf("%d %d", &n1, &n2);

	while (n1 != 0 && n2 != 0)
	{
		printf("\n%d. pair : %d %d\n", i++, n1, n2);

		//calling the function
		gcdLCM(n1, n2, &lcm, &gcd);

		printf("GCD is %d\n", gcd);
		printf("LCM is %d\n\n", lcm);

		printf("Enter a pair(0 to end): ");
		scanf("%d %d", &n1, &n2);
	}

	return 0;
}

void gcdLCM(int a, int b, int* lcm, int* gcd)
{
	int start;
	*gcd = 0;

	//to find gcd
	if (a > b)
		start = b;
	else
		start = a;

	while (start >= 1 && *gcd == 0)
	{
		if (a % start == 0 && b % start == 0)
			*gcd = start;
		start--;
	}

	//to find lcm
	*lcm = (a * b) / *gcd;
}