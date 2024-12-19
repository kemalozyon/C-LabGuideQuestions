// CTIS151-LG15_Q1
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#define SIZE 30

int readFromFile(FILE* inp, int bookId[], char genre[], double rate[]);
void displayBook(int bookId, double rate, char genre);
void display(int bookId[], double rate[], char genre[], int n);
int searchBook(int bookId[], int n, int srchId);

int main(void)
{
	FILE* inp = fopen("books.txt", "r");

	if (inp == NULL)
		printf("Error: file does not exist\n");
	else
	{
		int bookId[SIZE];
		char genre[SIZE];
		double rate[SIZE];
		int noOfElem;
		int srch;

		noOfElem = readFromFile(inp, bookId, genre, rate);
		display(bookId, rate, genre, noOfElem);

		printf("\nEnter a book ID to search (negative ID to stop): ");
		scanf("%d", &srch);

		while (srch > 0)
		{
			int pos = searchBook(bookId, noOfElem, srch);

			if (pos == -1)
				printf("The searched book ID %d is NOT found\n", srch);
			else
				displayBook(bookId[pos], rate[pos], genre[pos]);

			printf("\nEnter a book ID to search (negative ID to stop): ");
			scanf("%d", &srch);
		}
		fclose(inp);
	}

	return 0;
}

int readFromFile(FILE* inp, int bookId[], char genre[], double rate[])
{
	int i = 0;

	while (fscanf(inp, "%d %lf %c", &bookId[i], &rate[i], &genre[i]) != EOF && i < SIZE)
		i++;

	return i;
}

void displayBook(int bookId, double rate, char genre)
{
	printf("%7d", bookId);
	printf("%6.1f   ", rate);

	switch (genre)
	{
	case 'F':
		printf("Fiction\n");
		break;
	case 'N':
		printf("Non-Fiction\n");
		break;
	case 'M':
		printf("Mystery\n");
		break;
	}
}

void display(int bookId[], double rate[], char genre[], int n)
{
	printf("There are %d books in the array\n\n", n);
	printf("Book ID  Rate   Genre\n");
	printf("*******  ****   ******\n");

	for (int i = 0; i < n; i++)
		displayBook(bookId[i], rate[i], genre[i]);
}

int searchBook(int bookId[], int n, int srchId)
{
	for (int i = 0; i < n; i++)
		if (bookId[i] == srchId)
			return i;

	return -1; // Book not found in the array
}
