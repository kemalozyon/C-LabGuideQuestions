#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SHAKE_CNT 3

int main(void)
{
	int gift, cnt = 1;
	char shakeAgain;

	do {
		srand(time(0));
		printf("\nShake & Win ;)\n");
		gift = rand() % 4 + 1;


		printf("You won ");
		switch (gift)
		{
		case 1:
			printf("DAILY 1 GB Spotify\n");
			break;
		case 2:
			printf("WEEKLY 10 GB YouTube\n");
			break;
		case 3:
			printf("MONTHLY 1000 mins. call package\n");
			break;
		case 4:
			printf("1 GB for 12 HOURS\n");
			break;
		}

		if (cnt < SHAKE_CNT)
		{
			printf("\nShake again? (y/n): ");
			scanf(" %c", &shakeAgain);
		}
		cnt++;

	} while ((shakeAgain == 'Y' || shakeAgain == 'y') && cnt <= SHAKE_CNT);

	return(0);
}