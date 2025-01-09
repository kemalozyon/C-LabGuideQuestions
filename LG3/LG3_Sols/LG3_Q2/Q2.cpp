//LG3_Q2
/*
Program gets the entrance year and last salary of an employee,
then calculates the compensation of the employee and displays the result
*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define CURRENTYEAR 2024

int
main(void)
{
	//varibale declaration
	double salary, comp;
	int entrance;
	//getting entrance year
	printf("Enter your entrance year: ");
	scanf("%d", &entrance);
	//getting last salary
	printf("Enter your last salary: ");
	scanf("%lf", &salary);
	//calculating  compensation
	comp = (CURRENTYEAR - entrance) * salary;
	//displaying result
	printf("\nYour compensation is %.2f TL", comp);

	return 0;
}