/* LG3_Q4 -> Display two character inputs in their ASCII forms together with the difference between their ASCII codes*/
#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main(void)
{
	//Characters
	char first, second;

	//Take the letters for calculation of ASCII codes
	printf("Enter the lowercase form of any letter: ");
	scanf("%c", &first);
	printf("Enter the UPPERCASE form of any letter: ");
	scanf(" %c", &second);

	printf("\nASCII code of lowercase form %d.", first);
	printf("\nASCII code of UPPERCASE form %d.\n", second);
	printf("\nDifference between the codes is %d.\n\n", first - second);

	return 0;
}