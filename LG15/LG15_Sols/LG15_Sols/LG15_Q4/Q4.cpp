// CTIS151-LG15_Q4 -> purpose is reading a key from key.txt and a ciphered text from ciphered.txt, deciphering the text according to the key,and writing it into another file
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define ALPHABET_SIZE 26

void readFromFile(FILE* inp, char arr[]);

void decipherChar(FILE* out, char key[], char ch);

int findLetterIndex(char key[], char letter);

int main(void)
{
	FILE* inp1 = fopen("key.txt", "r");

	if (inp1 == NULL)
		printf("Error reading key!\n");
	else
	{
		FILE* inp2 = fopen("ciphered.txt", "r");
		if (inp2 == NULL)
			printf("Error reading ciphered text!");
		else
		{
			char key[ALPHABET_SIZE];
			readFromFile(inp1, key);
			FILE* out = fopen("deciphered.txt", "w");
			char ch;
			while (fscanf(inp2, "%c", &ch) != EOF)
				decipherChar(out, key, ch); // find find the deciphered equivalent of the ciphered character

			fclose(inp2);
		}
		fclose(inp1);
	}
	return(0);
}

void readFromFile(FILE* inp, char arr[]) {

	int i = 0;

	while (fscanf(inp, "%c", &arr[i]) != EOF)
		i++;

}

void decipherChar(FILE* out, char key[], char ch) {

	int letterIndex;

	if (ch == ' ')
		fprintf(out, " ");
	else
	{
		letterIndex = findLetterIndex(key, ch);  // find the index of the character in the key array and print it
		fprintf(out, "%c", 'a' + letterIndex);
	}

}

int findLetterIndex(char key[], char letter) {

	for (int i = 0; i < ALPHABET_SIZE; i++) //iterate over the array until the index of the letter is found
		if (key[i] == letter)
			return i;

	return -1;

}