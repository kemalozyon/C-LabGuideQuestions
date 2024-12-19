#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 250

void getAbbreviation(char line[], int size, char abb[], int *abbSize);

int main(void)
{
	FILE *text = fopen("text.txt", "r");

	if (text == NULL)
		printf("The file could not be opened.\n");//check whether the file can be opened or not
	else
	{
		FILE *abbs = fopen("abbreviation.txt", "w");
		char textArr[SIZE], abbArr[SIZE];
		int i = 0, abbSize = 0;

		//until the end of file get data from the input file
		while (fscanf(text, "%c", &textArr[i]) != EOF)
		{
			//getting one line (one sentence) by reaching the '\n' character
			if (textArr[i] != '\n')
				i++;
			else
			{
				getAbbreviation(textArr, i, abbArr, &abbSize);

				for (int k = 0; k <= abbSize; k++)
				{
					fprintf(abbs, "%c", abbArr[k]);
					if (k == abbSize)
						fprintf(abbs, "\n");
				}
				abbSize = 0;
				i = 0;
			}
		}

		fclose(abbs);
		fclose(text);
	}

	return 0;
}

void getAbbreviation(char line[], int size, char abb[], int *abbSize)
{
	abb[*abbSize] = line[*abbSize];
	for (int j = 0; j < size; j++) {
		if (line[j] == ' ')
		{
			*abbSize = *abbSize + 1;
			abb[*abbSize] = line[j + 1];
		}
	}
}