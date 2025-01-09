#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

#define MAXROW 5
#define MAXCOL 5

void readFromFile(FILE *inp, int ar[][MAXCOL]);
void displayRowWise(int ar[][MAXCOL]);
void displayColumnWise(int ar[][MAXCOL]);

int main(void)
{
	FILE *inp = fopen("nums.txt", "r");

	if (inp == NULL)
		printf("Error! File NOT Found!\n");
	else
	{
		int ar[MAXROW][MAXCOL]; // Input - two-dim.array to keep numbers

		// read elements of the array from the input file
		readFromFile(inp, ar);
		fclose(inp);

		//display the original array 
		printf("\nOriginal array, row-wise format:\n");
		displayRowWise(ar);

		printf("\nYour array, column-wise format:\n");
		displayColumnWise(ar);
	}

	return(0);
}

void readFromFile(FILE *inp, int ar[][MAXCOL])
{
	int i, j; //loop control counter
	for (i = 0; i < MAXROW; i++)
		for (j = 0; j < MAXCOL; j++)
			fscanf(inp, "%d", &ar[i][j]);
}

void displayRowWise(int ar[][MAXCOL])
{
	int i, j;
	for (i = 0; i < MAXROW; i++)
	{
		for (j = 0; j < MAXCOL; j++)
			printf("%4d", ar[i][j]);
		printf("\n");
	}
}

void displayColumnWise(int ar[][MAXCOL])
{
	int i, j;
	for (j = 0; j < MAXCOL; j++)
	{
		for (i = 0; i < MAXROW; i++)
			printf("%4d", ar[i][j]);
		printf("\n");
	}
}