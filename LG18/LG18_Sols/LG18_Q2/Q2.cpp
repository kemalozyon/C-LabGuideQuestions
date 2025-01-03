// LG18_Q2 -> Check if two words are exactly same or not 

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define SIZE 20

//checks if the words are the same or not
int isEqual(char w1[], char w2[], int s1, int s2);

//displays a given word
void displayWord(char w[], int size);

int main(void)
{
	
	char firstWord[SIZE], secondWord[SIZE];
	int size1 = 0, size2 = 0;

	printf("Enter first word: ");
	scanf("%c", &firstWord[size1]);

	while (firstWord[size1] != '\n') //keep reading letters until the user enters '\n'
	{
		size1++;
		scanf("%c", &firstWord[size1]);
	}

	printf("Enter second word: ");
	scanf("%c", &secondWord[size2]);

	while (secondWord[size2] != '\n')
	{
		size2++;
		scanf("%c", &secondWord[size2]);
	}

	printf("\n");
	displayWord(firstWord, size1);

	printf(" and ");
	displayWord(secondWord, size2);

	int result = isEqual(firstWord, secondWord, size1, size2);

	if (result != -1)
		printf(" are NOT the same words.\nFirst different character in between was after the character #%d.\n\n", result);
	else
		printf(" are the same words.\n");

	return (0);
}

int isEqual(char w1[], char w2[], int s1, int s2)
{
	int i = 0, length = s1;

	if (s2 > s1)
		length = s2;

	while (i < length)
	{
		if (w1[i] != w2[i])
			return i;
		i++;
	}

	return -1;
}

void displayWord(char w[], int size)
{
	int i;

	for (i = 0; i < size; i++)
		printf("%c", w[i]);
}