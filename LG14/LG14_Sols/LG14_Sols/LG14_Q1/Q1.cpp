// CTIS151-LG14_Q1

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

#define MAX 10

void display(int code)
{
	switch (code)
	{
	case 0: printf("White "); break;
	case 1: printf("Black "); break;
	case 2: printf("Red   "); break;
	case 3: printf("Blue  "); break;
	case 4: printf("Green "); break;
	case 5: printf("Yellow"); break;
	case 6: printf("Purple"); break;
	case 7: printf("Orange"); break;
	case 8: printf("Pink  "); break;
	case 9: printf("Gray  ");
	}
}

int main(void)
{
	//output file
	FILE *inp;
	int status, i = 0, arr[MAX] = { 0 }, code, cnt = 0;

	inp = fopen("bag.txt", "r");

	if (inp == NULL)
		printf("File can not be opened");
	else
	{
		status = fscanf(inp, "%d", &code);
		while (status != EOF)
		{
			cnt++;
			arr[code]++;

			status = fscanf(inp, "%d", &code);
		}

		printf("There are %d balls\n", cnt);

		printf("\nCOLOUR CODE NUMBER  PERCENTAGE TO TOTAL\n");
		for (i = 0; i < MAX; i++)
		{
			display(i);
			printf("%4d %4d %15.2f\n", i, arr[i], arr[i] * 100.0 / cnt);
		}

	}
	return(0);
}
