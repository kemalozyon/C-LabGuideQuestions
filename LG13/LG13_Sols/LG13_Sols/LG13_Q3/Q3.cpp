//151_LG13_Q3
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 15

int main() {
	int minValue = 13;
	int maxValue = 100;
	int randomArray[SIZE];
	FILE *out = fopen("output.txt", "w");
	// Seed the random number generator with the current time
	srand(time(NULL));

	//Create random generated array
	for (int i = 0; i < SIZE; i++) {
		randomArray[i] = rand() % (maxValue - minValue + 1) + minValue;
	}

	// Print the generated array
	printf("Randomly Generated Array:\n");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", randomArray[i]);
	}
	printf("\n");

	fprintf(out, "Adding 20 to each then ASCII Equivalent\n");
	for (int i = 0; i < SIZE; i++) {
		fprintf(out, "%d %c\n", randomArray[i] + 20, randomArray[i] + 20);
	}
	printf("\n");
	return 0;
}
