// CTIS151-LG10_Q1a
//Purpose: Program that displays 10 line of star by using void function

#include <stdio.h>
#define STAR 10

//function that displays 10 lines of star
void dispLine(void);

int
main(void)
{
	//calling the function to display 10 line of star
	dispLine();

	return(0);
}

void
dispLine(void)
{
	int i;
	printf("\n");
	for (i = 1; i <= STAR; i++)
		printf("*");

	printf("\n");
}
