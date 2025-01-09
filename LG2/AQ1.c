#include <stdio.h>
#define CURRENTYEAR 2025
int main(void){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("You are born in %d\n", CURRENTYEAR - age);
}