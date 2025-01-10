#include <stdio.h>
#define CURRENTYEAR 2025
int main(void){
    int enteranceYear;
    double salary;
    printf("Enter your enterance year: ");
    scanf("%d",&enteranceYear);
    printf("Enter your current salary: ");
    scanf("%lf",&salary);
    printf("Your compensation is %.2f TL",salary * (CURRENTYEAR - enteranceYear));
    
}