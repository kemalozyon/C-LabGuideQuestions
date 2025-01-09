#include <stdio.h>
#define PI 3.14
int main(void){
    double volume, r;
    printf("Enter the radius of the sphere: ");
    scanf("%lf", &r);
    volume = (4.0 / 3) * PI * r * r * r;
    printf("Volume is: %f\n", volume);
}