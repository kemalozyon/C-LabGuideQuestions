// CTIS151-LG10_Q2
// Purpose: Write a modular C program that gets a number from the user, and displays whether the number is a prime number or not, using another function


#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int isPrime(int n);

int main(void)
{
	int num, primeOrNot;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num >= 1) {
		primeOrNot = isPrime(num);

		if (primeOrNot)
			printf("%d is a prime number.\n\n", num);
		else 
			printf("%d is not a prime number.\n\n", num);

		printf("Enter a number: ");
		scanf("%d", &num);
	}

	printf("Goodbye!");

	return 0;

}

//prime number or not
int isPrime(int n) {

	if (n == 1)
		return 0;

	int  i = 2;	//2 is smallest prime number

	for (i = 2; i <= n / 2; ++i) {
		// condition for nonprime number
		if (n % i == 0)
			return 0;
	}

	return 1;

}
