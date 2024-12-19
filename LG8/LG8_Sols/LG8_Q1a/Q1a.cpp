#define _CRT_SECURE_NO_WARNINGS 1 

#include <stdio.h>

int main(void)
{
	int value;

	printf("Enter a positive integer: ");
	scanf("%d", &value);


	while (value <= 0)
	{
		printf("%d is not a positive value!\n\nEnter a positive integer: ", value);
		scanf("%d", &value);
	}


	if (value % 2 == 1)
		printf("The number is odd.\n");
	else
		printf("The number is even.\n");


	return(0);
}