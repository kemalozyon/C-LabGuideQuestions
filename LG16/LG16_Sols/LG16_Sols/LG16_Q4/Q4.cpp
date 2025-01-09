#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int
main(void)
{
	FILE *inp = fopen("gamers.txt", "r");
	if (inp == NULL)
		printf("FILE ERROR");
	else
	{
		int arr[5][5], i, j, scores[5], sum = 0;
		//getting file content to two-dim array
		for (i = 0; i < 5; i++)
		{
			sum = 0;
			for (j = 0; j < 5; j++)
			{
				fscanf(inp, "%d", &arr[i][j]);
				sum += arr[i][j];
			}
			//calculate the scores of each gamer
			scores[i] = sum;
		}
		//check third game score, according to that score make update
		for (i = 0; i < 5; i++)
		{
			if (arr[i][2] >= 8)
				scores[i] += 5;
		}

		//displaying the scores of ech gamer
		for (i = 0; i < 5; i++)
		{
			printf("%d. player score: %d\n", i + 1, scores[i]);
		}

	}


	return 0;
}