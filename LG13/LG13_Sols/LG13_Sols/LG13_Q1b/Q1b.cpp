// CTIS151-LG13_Q1b
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SIZE 10
void main()
{
	int arr[SIZE], i;

	printf("Enter %d numbers: ", SIZE);
	for (i = 0; i < SIZE; i++)
		scanf("%d", &arr[i]);

	printf("The array contents are: ");
	for (i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");
}