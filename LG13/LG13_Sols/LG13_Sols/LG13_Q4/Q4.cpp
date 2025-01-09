// CTIS151-LG13_Q4
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 100

void swap(int* x, int* y);
int main()
{
	int arr[MAX], n, i;

	do {
		printf("Enter the number of elements: ");
		scanf("%d", &n);

		//value of n must be even
		if (n <= 0 || n % 2 != 0)
			printf("The number of elements should be EVEN and POSITIVE.\n\n");
	} while (!(n > 0 && n % 2 == 0));

	//read array elements
	printf("\nEnter array elements:\n", n);
	for (i = 0; i < n; i++)
	{
		printf("Enter element on index [%d]:", i);
		scanf("%d", &arr[i]);
	}

	//swap adjacent elements
	for (i = 0; i < n; i += 2)
		swap(&arr[i], &arr[i + 1]);

	printf("\nArray elements after swapping adjacent elements:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}

	return (0);
}
void swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
