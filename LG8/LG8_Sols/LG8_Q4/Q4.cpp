//LG8-Q3
//simulation of movie ticket booking
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define REGULAR 450
#define VIP 900
#define CHILD 150
#define DISC 0.15
#define EXIT 4
int main(void) {
	int	choice,
		age,
		noOfEarlyBookings = 0;
	double	totalAmount = 0;
	double	ticketPrice,
		bookingAmount;


	printf("\nMOVIE TICKET BOOKING\n");
	printf("--------------------\n");
	printf("1. Regular Ticket\n");
	printf("2. VIP Ticket\n");
	printf("3. Child Ticket (age 6-12)\n");
	printf("4. EXIT\n");

	printf("Enter your choice: ");
	scanf("%d", &choice);

	while (choice != EXIT) {

		switch (choice) {
		case 1:
			ticketPrice = REGULAR;
			printf("Regular Ticket\n");
			break;
		case 2:
			ticketPrice = VIP;
			printf("VIP Ticket\n");
			break;
		case 3:
			printf("CHILD Ticket\n");

			printf("Enter age: ");
			scanf("%d", &age);

			if (age >= 6 && age <= 12)
				ticketPrice = CHILD;
			else
			{
				printf("Free Ticket for children aged 0-5 :)\n");
				ticketPrice = 0;
			}

			break;
		}

		bookingAmount = ticketPrice;

		if (bookingAmount != 0)
		{
			int discount = 0;
			char earlyPayment;
			printf("Is the booking done before the deadline? (y/n): ");
			scanf(" %c", &earlyPayment);

			if (earlyPayment == 'y' || earlyPayment == 'Y')
			{
				bookingAmount -= DISC * ticketPrice;
				noOfEarlyBookings++;
			}
		}
		printf("Booking successful! Payment: %.2f TL\n", bookingAmount);

		totalAmount += bookingAmount;

		printf("\nMOVIE TICKET BOOKING\n");
		printf("--------------------\n");
		printf("1. Regular Ticket\n");
		printf("2. VIP Ticket\n");
		printf("3. Child Ticket\n");
		printf("4. EXIT\n");

		printf("Enter your choice: ");
		scanf("%d", &choice);
	}

	printf("Total booking amount: %.2f TL\n", totalAmount);
	printf("No of tickets sold with an early payment discount: %d\n", noOfEarlyBookings);

	return 0;
}