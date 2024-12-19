/* LG2_Q3 -> Purpose to find the mistakes and rewrite the code */

#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>

int main(void)
{
	//variable declaration and initialization
	int megabyte = 379;
	double bit = 0, byte = 0, kilobyte = 0;

	/*
	1 byte = 8 bits
	1 kilobyte = 1024 bytes
	1 megabyte = 1024 kilobytes or 1024*1024 bytes
	*/

	//calculate the values of kilobyte, byte and bit
	kilobyte = 1024 * megabyte;

	//byte = 1024*1024*megabyte;
	byte = 1024 * kilobyte;

	//bit = 8*1024*1024*megabyte;
	bit = 8 * byte;

	//printf("\n%d mebabyte is %f kilobyte, %f byte, %f bit",megabyte,kilobyte,byte,bit);

	return(0);
}