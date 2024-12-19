/* LG16_Q2 -> Major and Minor Diagonal */

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define SIZE 4

int main(void)
{
	//initialize the matrix
	int arr[SIZE][SIZE] = { 0 };
	int i, j;

	printf("MAJOR DIAGONAL\n");
	printf("**************\n");

	//set the major diagonal to 1
	for (i = 0; i < SIZE; i++)
		arr[i][i] = 1;

	//display the matrix on the screen
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}

	printf("\nMAJOR AND MINOR DIAGONAL\n");
	printf("************************\n");

	//set the minor diagonal to 1
	for (i = 0; i < SIZE; i++)
		arr[i][SIZE - 1 - i] = 1;

	//display the matrix on the screen
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
			printf("%3d", arr[i][j]);

		printf("\n");
	}

	return 0;
}