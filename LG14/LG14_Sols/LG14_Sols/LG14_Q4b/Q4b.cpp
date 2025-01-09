// LG14_Q4b

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void display(int nums[], int n);

int main(void)
{
	FILE *fp = fopen("numbers.txt", "r");

	if (fp == NULL)
		printf("The file couldn't be opened.\n");
	else
	{
		int arr[SIZE], i = 0, index;

		while (fscanf(fp, "%d", &arr[i]) != EOF)
			i++;
		fclose(fp);

		int noOfElem = i;

		printf("Array Content BEFORE Delete operation:\n");
		display(arr, noOfElem);

		do {
			printf("Enter the index of the element to be deleted(0-%d):", noOfElem - 1);
			scanf("%d", &index);

			if (index >= 0 && index < noOfElem)
			{

				printf("\nThe value %d which is on the index %d will be deleted!\n", arr[index], index);
				for (i = index; i < noOfElem - 1; i++)
					arr[i] = arr[i + 1];

				//after the delete operation, the number of element will be decreased
				noOfElem--;

				printf("\nArray Content AFTER Delete operation:\n");
				display(arr, noOfElem);
			}
		} while (index >= 0 && index <= noOfElem);
	}

	return(0);
}


void display(int nums[], int n)
{
	printf("There are %d numbers in the array!\n\n", n);
	//display array content
	for (int i = 0; i < n; i++)
		printf("[%2d] %4d\n", i, nums[i]);
}