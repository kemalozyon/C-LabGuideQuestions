#include <stdio.h>

int main(void){
    char lower, upper;
    printf("Enter the lower case form of any letter: ");
    scanf(" %c", &lower);
    printf("Enter the upper case form of any letter: ");
    scanf(" %c", &upper);
    printf("ASCII code of lowercase form: %d\n",(int) lower);
    printf("ASCII code of uppercase form: %d\n",(int) upper);
    printf("Difference between the codes is: %d\n", lower - upper);

}