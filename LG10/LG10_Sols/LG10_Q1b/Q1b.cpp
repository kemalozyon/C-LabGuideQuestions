//LG10-Q1b
//Purpose: Program that displays a menu on the screen
// first choice displays 10 lines of star
// second choice displays 4 X 10 rectangle
// third exits from the program

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define STAR 10


void dispLine(void);
void dispRectangle(void);
void dispParallelogram(void);
void menu(void);

int
main(void)
{
	int	choice;

	do {

		//getting right choice from the user by making data validation
		menu();
		do {
			printf("Enter your choice: ");
			scanf("%d", &choice);
		} while (choice < 1 || choice > 4);

		//according to user's choice call the related function
		printf("\n");
		switch (choice)
		{
		case 1:
			dispLine();
			break;
		case 2:
			dispRectangle();
			break;
		case 3:
			dispParallelogram();
		}

	} while (choice != 4);

	return(0);
}


//function that displays 10 lines of star
void
dispLine(void)
{
	for (int i = 1; i <= STAR; i++)
		printf("*");

	printf("\n");

}

//function that displays the rectangle by using first function
// 4 X 10
void
dispRectangle(void)
{
	int i;
	for (i = 1; i <= 4; i++)
		dispLine();
}

void dispParallelogram(void)
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		dispLine();
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
