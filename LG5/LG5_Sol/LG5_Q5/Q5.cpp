/* LG5_Q5 -> Calculate the insurance cost according to the gender, accident background and license year */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define BASE 0.10

int main(void)
{
	char gender, accident;
	int year;
	double price, discountedBase, base;

	printf("Enter the information of the driver;\n");
	printf("Car price: ");
	scanf("%lf", &price);

	//calculating base rate
	base = BASE * price;

	discountedBase = base;

	//getting driver's gender from the user
	printf("Gender: ");
	scanf(" %c", &gender);

	//getting license and price information of car from the user
	printf("Years: ");
	scanf("%d", &year);

	//if driver is male
	if (gender == 'M' || gender == 'm')
		//according to the license year of the driver total price changes
		if (year <= 20)
			discountedBase -= base * 0.04;
		else
			discountedBase -= base * 0.06;
	else //if driver is female
		if (year <= 10)
			discountedBase -= base * 0.05;
		else
			discountedBase -= base * 0.07;

	//getting accident background from the user
	printf("Do you have any accident(Y-y/N-n): ");
	scanf(" %c", &accident);

	if (accident == 'N' || accident == 'n')
		discountedBase = discountedBase * 0.90;

	printf("\nThe cost of the insurance is $ %.1f \n", discountedBase);

	return(0);
}