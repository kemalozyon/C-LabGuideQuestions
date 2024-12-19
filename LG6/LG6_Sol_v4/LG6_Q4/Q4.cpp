#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define BILKENT 0.2
#define KOC 0.15
#define SABANCI 0.1

int
main(void)
{
	char staff; // to store the staff type
	double hour; // to store the staff lunch hour
	double discount = 0, // discount amount
		bill;// bill of the lunch

	//getting university type from the user
	printf("Enter the university you worked for:(Bilkent/B,Koc/K,Sabanci/S):");
	scanf(" %c", &staff);

	if (!(staff == 'b' || staff == 'B' || staff == 'K' || staff == 'k' || staff == 'S' || staff == 's'))
	{
		printf("Invalid Staff Type!");
	}
	else
	{
		printf("Enter your lunch time:");
		scanf("%lf", &hour);

		printf("Enter your bill:");
		scanf("%lf", &bill);

		switch (staff)
		{
		case 'B':
		case 'b':
			printf("You are Bilkent University Staff\n");
			// getting lunch hour and bill from the user
			if (hour >= 11 && hour <= 14)
				discount = BILKENT;
			break;
		case 'K':
		case 'k':
			printf("You are Koc University Staff\n");
			// getting lunch hour and bill from the user
			if (hour >= 11 && hour <= 12)
				discount = KOC;
			break;
		case 'S':
		case 's':
			printf("You are Sabanci University Staff\n");
			// getting lunch hour and bill from the user
			if (hour >= 12 && hour <= 14)
				discount = SABANCI;
			break;
		}
		bill -= bill * discount;
		printf("The final price for the lunch is %.2f", bill);
	}
	return 0;
}