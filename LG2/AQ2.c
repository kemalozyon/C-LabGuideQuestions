#include <stdio.h>

int main(void){
    double a = 3.5, b = 4.2, c = 7;
    double result = (a + b * b) / a * c - b * c / 2 / a; 
    printf("Result: %.2f",result);
}