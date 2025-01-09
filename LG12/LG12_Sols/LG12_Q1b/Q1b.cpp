/* LG12_Q1b -> C program to read read until the end of the file, and display the number of odds and their average*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("data.txt", "r");

	if (fp == NULL)
		printf("The file data.txt couldn't be opened.\n");
	else
	{
		int num, sum = 0, cntOdds=0, cntAll=0;
		double avg;

		while (fscanf(fp, "%d", &num) != EOF)
		{
			//Check the numbers
			if (num % 2 == 1)
			{
				printf("\n %2d is odd!", num);
				sum += num;
				cntOdds++;
			}

			cntAll++;
		}
		printf("\n-------------------\n");
		printf("\nThe file contains %d integer numbers.\n", cntAll);

		avg = sum*1.0 / cntOdds;
		printf("%d of them are ODD numbers, and average of these odd numbers is: %.2f\n\n", cntOdds, avg);

		//close file pointer as soon as it is done being processed
		fclose(fp);
	}
	return 0;
}