/* LG16_Q1a -> initialize two-dimensional array and display its content */

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define SIZE 3

int main(void)
{
	int array[SIZE][SIZE] = { {75, 20, 77},
							  {71, 23, 45},
							  {67, 89, 98} };

	int i, j;

	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
			printf("%d ", array[i][j]);
		printf("\n");
	}

	return 0;
}