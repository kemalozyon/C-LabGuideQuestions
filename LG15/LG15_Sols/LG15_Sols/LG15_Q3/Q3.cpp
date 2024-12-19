// CTIS151-LG15_Q3 -> purpose is reading words from a txt file, finding the palindromes and writing them into another file
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE 10

int isPalindrome(char word[], int length);

void writeToFile(FILE* out, char word[], int length);


int main(void)
{
	FILE* inp = fopen("words.txt", "r");
	FILE* out = fopen("palindromes.txt", "w");


	if (inp == NULL)
		printf("Error reading file!\n");
	else
	{
		char word[SIZE]; //array to read each word into
		char ch; //temporary character variable
		int length = 0; //length of the current word being read
		int status;

		do {
			status = fscanf(inp, "%c", &ch); // read each character
			if (ch == ' ' || status == EOF) { //if space character or EOF is reached, check if the word is a palindrome or not

				if (isPalindrome(word, length))
					writeToFile(out, word, length); //if its a palindrome, write into file

				length = 0; //reset word length
			}
			else {
				word[length] = ch; // assign read character to array index
				length++; // increase length
			}

		} while (status != EOF);

		fclose(inp);
		fclose(out);
	}

	return(0);
}

int isPalindrome(char word[], int length) {

	for (int i = 0; i < length / 2; i++)  // iterate both from the front and the back until the half of the word to check if its a palindrome or not
		if (word[i] != word[length - i - 1])
			return false;


	return true;
}

void writeToFile(FILE* out, char word[], int length) {

	for (int i = 0; i < length; i++)
		fprintf(out, "%c", word[i]);

	fprintf(out, " ");

}
