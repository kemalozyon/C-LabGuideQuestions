// LG12_Q3 -> Finds the number of lower case letters, upper case letters and digits in a file */

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int isUpper(char ch);
int isLower(char ch);
int isDigit(char ch);

int main(void)
{
	FILE *inp = fopen("choco.txt", "r");

	//check whether the input file can be opened successfully or not; if not, display an error message
	if (inp == NULL)
		printf("The file lines.txt could not be opened!\n");
	else
	{
		//declare the necessary variables for the rest of the operations only if the file has been successfully opened
		char ch;
		int	cntUpper , cntLower , cntDigits , i = 1, status;

		//input till reaching the end of file
		status = fscanf(inp, "%c", &ch);
		while (status != EOF)
		{
			//reset the counters
			cntLower = 0;
			cntUpper = 0;
			cntDigits = 0;

			//Repeat until the end of a line
			while (ch != '\n' && status != EOF)
			{
				//Increment the corresponding counter
				if (isUpper(ch))
					cntUpper++;
				else if (isLower(ch))
					cntLower++;
				else if (isDigit(ch))
					cntDigits++;
				
				status = fscanf(inp, "%c", &ch);
			}

			//Display the counters for the current line
			printf("\n%d. line contains:\n%d uppercase letter(s), ", i++, cntUpper);
			printf("%d lowercase letter(s), ", cntLower);
			printf("and %d digit(s).\n", cntDigits);

			status = fscanf(inp, "%c", &ch);
		}

		//close the files
		fclose(inp);
	}
	return 0;
}

int isUpper(char ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return 1;
	return 0;
}

int isLower(char ch)
{
	if (ch >= 'a' && ch <= 'z')
		return 1;
	return 0;
}

int isDigit(char ch)
{
	if (ch >= '0' && ch <= '9')
		return 1;
	return 0;
}