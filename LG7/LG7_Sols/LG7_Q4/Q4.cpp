#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define UNITPRICE 112.50
#define DISCOUNTRATE 65

int main(void)
{

	int luckyNum;
	int custCount;
	double carpetArea, price, totalSell = 0;


	printf("Enter the number of waiting customers: ");
	scanf("%d", &custCount);

	srand(time(NULL));
	luckyNum = rand() % custCount + 1; 

	for (int i = 1; i <= custCount; i++) {
		printf("\nEnter the area of your carpet: ");
		scanf("%lf", &carpetArea);

		price = carpetArea * UNITPRICE;

		if (i == luckyNum) {
			price = price * (100 - DISCOUNTRATE) / 100;
			printf("CONGRATULATIONS!! YOU WON AN EXTRA %%%d DISCOUNT!!!\n", DISCOUNTRATE);
		}

		printf("You should pay %.2fTL\n", price);

		totalSell += price;
	}

	printf("\nThe company earned %.2f TL from the opening day.", totalSell);

}