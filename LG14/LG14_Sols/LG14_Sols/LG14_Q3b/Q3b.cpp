// LG14_Q3b

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int findMax(int count[]);
void dispStar(int n);
void display(int count[]);

int main(void)
{
	FILE *fp = fopen("grades.txt", "r");

	if (fp == NULL)
		printf("The file couldn't be opened.\n");
	else
	{
		int grd, count[SIZE] = { 0 }, i = 0, maxInd;

		while (fscanf(fp, "%d", &grd) != EOF)
			count[grd - 1]++;

		fclose(fp);

		display(count);

		maxInd = findMax(count);

		printf("\nMost of the students(%d students) have got the grade %d\n", count[maxInd], maxInd + 1);
	}

	return(0);
}

int findMax(int count[])
{
	int maxInd = 0;
	for (int i = 1; i < SIZE; i++)
		if (count[i] > count[maxInd])
			maxInd = i;

	return maxInd;
}

void dispStar(int n)
{
	int i;
	for (i = 1; i <= n; i++)
		printf("* ");
}

void display(int count[])
{
	//display the grades and their frequencies
	printf("GRADE     FREQUENCY  HISTOGRAM\n");
	printf("-----     ---------  ---------\n");

	for (int j = 0; j < SIZE; j++)
	{
		printf("%5d %13d  ", j + 1, count[j]);
		dispStar(count[j]);
		printf("\n");
	}
}