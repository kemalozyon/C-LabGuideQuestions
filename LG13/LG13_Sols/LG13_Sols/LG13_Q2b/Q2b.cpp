// CTIS151-LG13_Q2b
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MAX 500

int main(void)
{
	FILE *inp = fopen("sentence.txt", "r");

	if (inp == NULL)
		printf("The file couldn't be opened.\n");
	else
	{
		char word[MAX];
		int i = 0, j, status;
		FILE *outp = fopen("reverseB.txt", "w");

		//reversing word by word

		status = fscanf(inp, "%c", &word[i]);

		while (status != EOF)
		{
			while (status != EOF && word[i] != ' ')
			{
				i++;
				status = fscanf(inp, "%c", &word[i]);
			}
			//end of a word is reached after this while

			//write its reverse
			for (j = i - 1; j >= 0; j--)
				fprintf(outp, "%c", word[j]);

			fprintf(outp, " ");
			i = 0;
			status = fscanf(inp, "%c", &word[i]);
		}
		fclose(inp);
		fclose(outp);
	}
	return (0);
}