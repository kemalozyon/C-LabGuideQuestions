#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int	score, min = 9999, max = -1;


	printf("Enter the scores (a negative score to stop):\n");
	scanf("%d", &score);


	while (score >= 0)
	{

		if (score < min)
			min = score;


		if (score > max)
			max = score;

		scanf("%d", &score);
	}

	printf("\nMaximum score: %d\n", max);
	printf("Minimum score: %d\n\n", min);

	return(0);
}
