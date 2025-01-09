#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>    

int main(void)
{
	int num;
	srand(time(NULL));

	num = 1 + rand() % 26;
	printf("Randomly generated line number: %d\n", num);

	char ch = 'A';
	int i, j;

	for (i = 1; i <= num; i++)
	{
		for (j = 0; j < i; j++)
			printf("%c", ch + j);

		printf("\n");
	}

	return 0;
}
