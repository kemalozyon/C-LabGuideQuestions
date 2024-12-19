// CTIS151-LG13_Q1a

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SIZE 10

int main(void)
{
	//declare and initialize
	int arr[SIZE] = { 78, 43, 1, 12, 90, 34, 55, 65, 75, 99 };

	printf("The array contents are: ");

	//parse the entire array once and print out its values
	for (int i = 0; i < SIZE; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
