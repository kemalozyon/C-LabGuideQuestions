#define _CRT_SECURE_NO_WARNINGS  

#include<stdio.h>
#define SIZE 20
#define NEW_LINE '\n'

void readFromFile(char arr[][SIZE], FILE *p, int *size);
void displayTwoDim(char arr[][SIZE], int size);
void displayMajorMinor(char arr[][SIZE], int dim);

int main(void)
{
	FILE *inp = fopen("words.txt", "r");
	if (inp == NULL)
		printf("Error.Cannot be openned.\n");
	else {
		char arr[SIZE][SIZE] = { 0 };
		int size, dim;

		readFromFile(arr, inp, &size);
		fclose(inp);

		displayTwoDim(arr, size);
		do {
			printf("\n");
			do
			{
				printf("Enter the dimension:[1-9] ");
				scanf("%d", &dim);
			} while (dim < -1 || dim>9);

			//to exit
			if (dim != -1)
				displayMajorMinor(arr, dim);

		} while (dim != -1);
		printf("EXIT!\n");

	}	//else
	return 0;
}

void readFromFile(char arr[][SIZE], FILE *p, int *size) {
	//int *cols will be used for minor diagonal word
	int r = 0, c = 0;

	while (fscanf(p, "%c", &arr[r][c]) != EOF)
	{
		if (arr[r][c] == NEW_LINE)
		{
			r++;
			c = 0;
		}	//if
		else
			c++;
	}	//while

	*size = c;
}

void displayTwoDim(char arr[][SIZE], int size) {
	//Display on the screen
	int r, c;

	for (r = 0; r < size; r++) {
		for (c = 0; c < size; c++)
			printf("%c", arr[r][c]);
		printf("\n");
	}
	printf("\n");
}

void displayMajorMinor(char arr[][SIZE], int dim) {
	int	r;

	//Major
	printf("Dimension for %d, MAJOR elements of the file is: ", dim);

	for (r = 0; r < dim; r++)
		printf("%c", arr[r][r]);

	//Minor
	printf("\nDimension for %d, MINOR elements of the file is: ", dim);

	for (r = 0; r < dim; r++)
		printf("%c", arr[r][dim - 1 - r]);

	printf("\n");
}