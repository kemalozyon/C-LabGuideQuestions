/* LG2_Q2 -> Finding the volume of a Sphere */

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#define PI 3.14

int main(void)
{
	//Declaring the variables
	double radius, volume;

	//Get input values from the user
	printf("Enter radius of the Sphere : ");
	scanf("%lf", &radius);

	//Calculating the volume
	volume = (4.0 / 3) * PI * radius * radius * radius;

	//Display the result
	printf("The Volume of Sphere is : %f\n", volume);

	return(0);
}
