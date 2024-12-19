// LG4_Q3 -> Calculate the simple profit
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double cost, value;

	//take input from user cost and value
	printf("Enter cost of the item:($) ");
	scanf("%lf", &cost);

	printf("Enter sales price of the item:($) ");
	scanf("%lf", &value);

	//whether profit exists or not
	if (cost > value)
		printf("\nYou are making a loss of %.2f $ from this sale.\n", cost - value);
	else
		printf("\nYou are making a profit of %.2f $ from this sale.\n", value - cost);

	return 0;
}


