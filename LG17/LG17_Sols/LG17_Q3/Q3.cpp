
#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define ROW 6
#define COL 5

//function read the numbers from text file
void readFromFile(double arr[ROW][COL]);

// function that displays the contents of the array 
void display(double arr[ROW][COL]);

//takes two one-dimensional array as parameters and swaps the contents of the arrays
void swapRows(double row1[], double row2[]);

int main(void)
{
	/* create a two-dim array*/
	double arr[ROW][COL];
	int row1, row2;

	readFromFile(arr);
	printf("The contents of the array is:\n");
	display(arr);

	/* swap two rows */
	printf("\nEnter two row indices to swap: ");
	scanf("%d %d", &row1, &row2);

	while (row1 < 0 || row2 < 0 || row1 > ROW || row2 > ROW)
	{
		printf("\nEnter two row indices to swap: ");
		scanf("%d %d", &row1, &row2);
	}

	swapRows(arr[row1 - 1], arr[row2 - 1]);

	printf("The contents of the array AFTER the swap operation:\n");
	display(arr);

	return (0);
}

/*function read the numbers from text file*/
void readFromFile(double arr[ROW][COL])
{
	FILE *file;
	file = fopen("matrix.txt", "r");
	if (file == NULL)
		printf("Cannot open file.\n");
	else
	{
		int i, j;

		for (i = 0; i < ROW; i++)
			for (j = 0; j < COL; j++)
				fscanf(file, "%lf", &arr[i][j]);

		fclose(file);
	}
}
/* function that displays the contents of the array */
void display(double arr[ROW][COL])
{
	int i, j;

	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
			printf("%6.1f", arr[i][j]);
		printf("\n");
	}
}

//takes two one-dimensional array as parameters and swaps the contents of the arrays
void swapRows(double row1[], double row2[])
{
	double temp;

	for (int i = 0; i < COL; i++)
	{
		temp = row1[i];
		row1[i] = row2[i];
		row2[i] = temp;
	}
}