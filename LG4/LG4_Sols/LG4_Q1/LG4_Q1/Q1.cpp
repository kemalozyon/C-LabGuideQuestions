//LG4-Q1
// Do Calculation by getting the values from the user
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main(void)
{
	double t, s, result;
	int k, b;

	// Test Data
	/*k = b = 1; 
	t = s = 1;
	*/
	
	// Get the inputs
	printf("Enter t and s: ");
	scanf("%lf %lf", &t, &s);

	printf("Enter k and b: ");
	scanf("%d %d", &k, &b);
	
	result = fabs((sqrt(t * k) + 4 * b) / (b / sqrt(pow(2, t)) - pow(s, k) / 2 + 7));

	printf("Result is: %.2f", result);

	return 0;
}