#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int generatedNum, num, seed;

	printf("Enter a seed value to test your program: ");
	scanf("%d", &seed);

	srand(seed);
	generatedNum = rand() % 10 + 1;

	printf("\nPlease guess, the randomly generated number (1-10): ");
	scanf("%d", &num);

	if (num == generatedNum)
		printf("Congratulations! You have guessed the number correctly :)\n");
	else
		printf("You couldn't guess correctly! The number was %d, See you again next time.\n", generatedNum);

	return 0;
}
