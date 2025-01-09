// LG18_Q1 -> Filling the matrix according to the dimension generated randomly

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 9

//fills the array according to the given dimension
void fillPattern(int mat[][SIZE], int dim);

//displays the content of two dimensional array
void display(int mat[][SIZE]);

int main(void)
{
	//initializes the two dim array
	int mat[SIZE][SIZE] = { 0 };
	int dim;

	//generates a random number for the dimension
	srand(time(0));

	do {
		dim = 1 + rand() % SIZE;
		printf("Generated random dimension : %d\n", dim);
	} while (dim % 2 == 0);

	fillPattern(mat, dim);
	display(mat);

	return(0);
}

void fillPattern(int mat[][SIZE], int dim)
{
	int midDim = dim / 2, i, j;

	//fills the array according to the dimension generated randomly
	for (i = 0; i <= midDim; i++)
	{
		for (j = midDim - i; j <= midDim + i; j++)
			mat[i][j] = 1;
	}
}

void display(int mat[][SIZE])
{
	printf("\n      MATRIX\n");

	int i, j;

	//displays the content of math array
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
			printf("%2d", mat[i][j]);
		printf("\n");
	}
}
