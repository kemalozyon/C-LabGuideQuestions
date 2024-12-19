/* LG12_Q1a -> C program to read 10 of the given numbers from a text file in order to
			   calculate their total and display them on the screen */

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("data.txt", "r");

	//if the can not be opened give the message for the user.
	if (fp == NULL)
		printf("The file data.txt couldn't be opened.\n");
	else
	{
		int num, res = 0;

		printf("Numbers read from the file are: ");
		for (int i = 1; i <= 10; i++)
		{
			fscanf(fp, "%d", &num);
			printf("%d ", num);
			res += num;
		}

		fclose(fp);
		printf("\nThe total of these numbers is: %d\n", res);
	}

	return 0;
}