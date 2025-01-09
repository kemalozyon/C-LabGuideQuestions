//LG5_Q3 -> Purpose is to identfy whether the given keyboard inputs are of uppercase, lowercase or non-letter inputs

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

int main(void)
{
	char input;

	printf("Enter a character: ");
	scanf("%c", &input);

	//if check for the given conditions
	if (input >= 'A' && input <= 'Z')	//A-Z
	{
		printf("The letter '%c' is an uppercase letter\n", input);
		printf("The lowercase form of the letter is '%c'\n", input + ('a' - 'A'));

	}
	else if (input >= 'a' && input <= 'z')	//a-z
	{
		printf("The letter '%c' is a lowercase letter\n", input);
		printf("The uppercase form of the letter is '%c'\n", input - ('a' - 'A'));
	}
	else
		printf("It is NOT a letter\n");
	return 0;
}