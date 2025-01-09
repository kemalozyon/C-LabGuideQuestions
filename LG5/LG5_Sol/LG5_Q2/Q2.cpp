/* LG5_Q4 -> Calculating the water bill */

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

#define DEFAULT 5
#define BASE 10.00
#define WATER_UNIT_PR 3.25
#define WASTE_PERC 50
#define VAT_PERC 8

int main(void)
{
	double bill, waterUsage, wasteCharge, waterCharge, wasteCons, vat;

	//get the consumption of water from the user
	printf("Enter the water usage (in m3): ");
	scanf("%lf", &waterUsage);

	waterCharge = BASE;

	//check the consumption
	if (waterUsage > DEFAULT)
		waterCharge += (waterUsage - DEFAULT) * WATER_UNIT_PR;

	wasteCharge = waterCharge * WASTE_PERC / 100;

	//calculate bill
	bill = waterCharge + wasteCharge;

	//calculate vat amount
	vat = bill * VAT_PERC / 100;

	//calculate the total bill including vat
	bill = bill + vat;

	//display the result
	printf("\nWater Charge      : %6.2f TL\n", waterCharge);
	printf("Waste Water Charge: %6.2f TL\n\n", wasteCharge);
	printf("VAT (%% %d)         : %6.2f TL\n", VAT_PERC, vat);
	printf("\nTotal bill is %.2f TL\n", bill);

	return(0);
}