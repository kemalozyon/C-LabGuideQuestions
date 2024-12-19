// CTIS151-LG14_Q2

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define WEEK 7

int
findColdest(int day[]);
void
display(int day[], int night[]);

int
main(void)
{
	FILE	*inp;
	int	i, day[WEEK], night[WEEK], status, coldest;

	inp = fopen("weather.txt", "r");

	if (inp == NULL)
		printf("Error\n");
	else
	{
		i = 0;
		status = fscanf(inp, "%d %d", &day[i], &night[i]);
		while (status != EOF && i < WEEK)
		{
			i++;
			status = fscanf(inp, "%d %d", &day[i], &night[i]);
		}

		display(day, night);
		coldest = findColdest(day);

		printf("\nThe coldest day is ");
		switch (coldest)
		{
		case 0:
			printf("MONDAY. ");
			break;
		case 1:
			printf("TUESDAY. ");
			break;
		case 2:
			printf("WEDNESDAY. ");
			break;
		case 3:
			printf("THURSDAY. ");
			break;
		case 4:
			printf("FRIDAY. ");
			break;
		case 5:
			printf("SATURDAY. ");
			break;
		case 6:
			printf("SUNDAY. ");
		}

		printf("The degree is: %d\n", day[coldest]);
		fclose(inp);
	}
	return (0);

}
int
findColdest(int day[])
{
	int	i, minIndx;

	minIndx = 0;
	for (i = 1; i < WEEK; i++)
		if (day[i] < day[minIndx])
			minIndx = i;

	return minIndx;
}

void
display(int day[], int night[])
{
	int	i;
	printf("DAY NIGHT\n");
	printf("--- -----\n");
	for (i = 0; i < WEEK; i++)
	{
		printf("%3d %5d\n", day[i], night[i]);
	}
}