/* LG16_Q3 -> Word Question  */

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define ROW 6
#define COL 6

int main(void)
{

	//read the numbers from text file
	FILE *file = fopen("words.txt", "r");

	if (file == NULL)
		printf("Error!! Can NOT open the file!\n");
	else
	{

		//create a two-dim array
		char arr[ROW][COL];
		int numWord, i, j;

		for (i = 0; i < ROW; i++)
			for (j = 0; j < COL; j++)
				fscanf(file, " %c", &arr[i][j]);

		printf("Which word do you want to display? ");
		scanf("%d", &numWord);

		printf("\nThe word -> ");

		for (i = 0; i < ROW; i++)
			printf("%c", arr[i][numWord - 1]);

		printf("\n");

		fclose(file);
	}

	return (0);
}