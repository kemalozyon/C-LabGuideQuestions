#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int	count = 0;
	int sum = 0, score, min = 9999, max = -1;
	double avg;

	printf("Enter the scores (a negative score to stop):\n");
	scanf("%d", &score);

	while (score >= 0)
	{
		if (score < min)
			min = score;

		if (score > max)
			max = score;

		sum = sum + score;
		count++;

		scanf("%d", &score);
	}

	printf("There are %d players.\n", count);

	printf("\nMaximum score: %d\n", max);
	printf("Minimum score: %d\n\n", min);

	avg = 1.0 * (sum - max - min) / (count - 2);
	printf("Average score excluding the max and min scores: %.1f\n", avg);

	return(0);
}
