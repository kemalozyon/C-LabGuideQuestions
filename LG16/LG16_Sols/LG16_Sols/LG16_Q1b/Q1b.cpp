/* LG16_Q1b -> read numbers from the user and inserts the numbers into a two-dimensional array and display array content */

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define SIZE 3

int main(void)
{
	int array[SIZE][SIZE], i, j;

	for (i = 0; i < SIZE; i++)
		for (j = 0; j < SIZE; j++)
		{
			printf("Enter the value for cell [%d][%d]: ", i, j);
			scanf("%d", &array[i][j]);
		}

	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
			printf("%4d", array[i][j]);
		printf("\n");
	}
	return 0;
}