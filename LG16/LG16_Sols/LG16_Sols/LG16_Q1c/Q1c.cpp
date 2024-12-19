/* LG16_Q1c -> read numbers from the file and inserts the numbers into a two-dimensional array and display array content */

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define SIZE 8

int main(void)
{
	FILE *inp = fopen("nums.txt", "r");
	if (inp == NULL)
		printf("Error\n");
	else
	{
		int array[SIZE][SIZE], i, j;

		for (i = 0; i < SIZE; i++)
			for (j = 0; j < SIZE; j++)
				fscanf(inp, "%d", &array[i][j]);

		printf("The content of the matrix is:\n");
		for (i = 0; i < SIZE; i++)
		{
			for (j = 0; j < SIZE; j++)
				printf("%4d", array[i][j]);
			printf("\n");
		}
	}

	return 0;
}