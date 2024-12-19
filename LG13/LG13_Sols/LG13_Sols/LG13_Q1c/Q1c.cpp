// CTIS151-LG13_Q1c
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SIZE 10

void main()
{
	FILE* fp = fopen("values.txt", "r");

	if (fp == NULL)
		printf("The file couldn't be opened.\n");
	else
	{
		int arr[SIZE], i;
		printf("Reading contents of the file, the %d numbers are: ", SIZE);

		for (i = 0; i < SIZE; i++) {
			fscanf(fp, "%d", &arr[i]);
			printf("%d ", arr[i]);
		}

		printf("\nThe array contents are: ");
		for (i = 0; i < SIZE; i++)
			printf("%d ", arr[i]);

		printf("\n");
		fclose(fp);
	}
}