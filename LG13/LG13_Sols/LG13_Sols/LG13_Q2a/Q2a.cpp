// CTIS151-LG13_Q2a
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
		char sentence[MAX];
		int i = 0, j, status;
		FILE *outp = fopen("reverseA.txt", "w");

		//read the first char from the input file
		status = fscanf(inp, "%c", &sentence[i]);
		while (status != EOF) {
			i++;
			status = fscanf(inp, "%c", &sentence[i]);
		}
		fclose(inp);

		//write the reversed sentence
		for (j = i - 1; j >= 0; j--)
			fprintf(outp, "%c", sentence[j]);

		fclose(outp);
		fclose(inp);
	}
	return(0);
}