#define _CRT_SECURE_NO_WARNINGS 1 
#include <stdio.h>

int main(void)
{
	int value, count = 0;

	printf("Enter a positive integer: ");
	scanf("%d", &value);


	while (value < 0)
	{
		printf("Enter a positive integer: ");
		scanf("%d", &value);
	}

	while (value != 1)
	{
		
		if (value % 2 == 1)
			value = value * 3 + 1;	
		else 
			value = value / 2;					

		printf("Next value is %d\n", value); 
		count++;							
	}
	printf("Number of steps is %d\n", count);

	return(0);
}