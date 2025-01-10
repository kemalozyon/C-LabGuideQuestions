#include <stdio.h>
#include <math.h>
int main(void){
    double a, b, c, r, e;
    printf("Enter a: ");
    scanf("%lf",&a);
    printf("Enter b: ");
    scanf("%lf",&b);
    printf("Enter c: ");
    scanf("%lf",&c);
    printf("Enter r: ");
    scanf("%lf",&r);
    printf("Enter e: ");
    scanf("%lf",&e);
    double result = sqrtf((c + a * r / b) /  (r * a / e)) / ((b + 4) / e) + r;
    printf("Result: %.2f", result);
}