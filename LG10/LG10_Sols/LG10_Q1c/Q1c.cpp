//LG10-Q1c
// Purpose: Program that displays a menu on the screen
// first choice displays n number of a character which is get from the user
// second choice displays n x m rectangle with the given symbol
// third choice exits from the program

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void dispLine(char symbol, int n);
void dispRectangle(int side1, int side2, char symbol);
void dispParallelogram(int side1, int side2, char symbol);
void menu(void);

int
main(void)
{
	int	choice, side1, side2, n;
	char	symbol;

	do {

		menu();
		do {
			printf("Enter your choice: ");
			scanf("%d", &choice);
		} while (choice < 1 || choice >4);

		printf("\n");

		//after getting the choice
		//then user enter the values of the related choice
		//program display the lines/rectangle
		switch (choice)
		{
		case 1:
			printf("Enter a symbol: ");
			scanf(" %c", &symbol);

			printf("Enter the number of symbols to be displayed: ");
			scanf("%d", &n);

			dispLine(symbol, n);
			break;
		case 2:
			printf("Enter a symbol: ");
			scanf(" %c", &symbol);

			printf("Enter the side1: ");
			scanf("%d", &side1);

			printf("Enter the side2: ");
			scanf("%d", &side2);

			dispRectangle(side1, side2, symbol);
			break;

		case 3:
			printf("Enter a symbol: ");
			scanf(" %c", &symbol);

			printf("Enter the side1: ");
			scanf("%d", &side1);

			printf("Enter the side2: ");
			scanf("%d", &side2);

			dispParallelogram(side1, side2, symbol);
		}

	} while (choice != 4);

	return(0);
}


//function that displays n  number of symbols in 1 line
// gets the values as a parameter
void
dispLine(char symbol, int n)
{
	int i;
	for (i = 1; i <= n; i++)
		printf("%c", symbol);

	printf("\n");
}

//function that displays a rectangle with the given symbol n x m times
void
dispRectangle(int side1, int side2, char symbol)
{
	int i;
	for (i = 1; i <= side1; i++)
		dispLine(symbol, side2);
}
//function that displays a paralellogram
void dispParallelogram(int side1, int side2, char symbol)
{
	int i, j;
	for (i = 1; i <= side1; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		dispLine(symbol, side2);
	}
}

//function that displays a menu on the screen
void
menu(void)
{
	printf("\nMENU");
	printf("\n1. Draw a single line");
	printf("\n2. Draw a rectangle");
	printf("\n3. Draw a parallelogram");
	printf("\n4. EXIT\n");
}
