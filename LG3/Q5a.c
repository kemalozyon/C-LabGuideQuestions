#include <stdio.h>
#include <math.h>
int main(void){
    double a = 3, b = 8, c = 9, e = 5.5, r = 2.5;
    double result = sqrt((c + a * r / b) /  (r * a / e)) / ((b + 4) / e) + r;
    printf("%.2f",result);
}