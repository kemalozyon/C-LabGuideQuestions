/* LG2_Q4 -> Purpose is to conver the kilometer to inch, feet and mile */

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define USD 0.29
#define EURO 0.90

int main(void)
{
	//variable declaration and initialization
	double lira = 104.8, dollar = 0, euro = 0;

	//calculate the values of dollar and euro
	dollar = USD * lira;
	euro = EURO * dollar;

	return(0);
}