/* LG11_Q1 -> Display the addresses or values on the screen */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int number = 357;
	int* ptr;

	ptr = &number;

	printf("1.Value of the variable number by using number is : %d\n", number);
	printf("2.Value of the variable number by using ptr is : %d\n", *ptr);

	printf("\n1.Address of the variable number by using number is : %p\n", &number);
	printf("2.Address of the variable number by using ptr is : %p\n", ptr);

	printf("\n1.Address of the pointer ptr by using ptr is : %p\n", &ptr);

	printf("\n1.Value of the pointer ptr by using ptr is : %p\n", ptr);

	*ptr = 711;

	printf("\n1.Value of the variable number by using number is : %d\n", number);
	printf("2.Value of the variable number by using ptr is : %d\n", *ptr);

	return 0;
}

/*
1.Value of the variable number by using number is : 357
2.Value of the variable number by using ptr is : 357

1.Address of the variable number by using number is : 00B5F774
2.Address of the variable number by using ptr is : 00B5F774

1.Address of the pointer ptr by using ptr is : 00B5F768

1.Value of the pointer ptr by using ptr is : 00B5F774

1.Value of the variable number by using number is : 711
2.Value of the variable number by using ptr is : 711
*/