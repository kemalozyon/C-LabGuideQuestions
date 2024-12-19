#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int	score, min = 9999, max = -1, i;


	i = 1;
	while (i <= 5)
	{
		printf("Enter score: ");
		scanf("%d", &score);


		if (score < min)
			min = score;

		if (score > max)
			max = score;

		i++;
	}

	printf("\nMaximum score: %d\n", max);
	printf("Minimum score: %d\n\n", min);

	return(0);
}
