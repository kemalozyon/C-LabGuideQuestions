#include <stdio.h>

int main(void){
    //Declaring Variables: 
    double area, side, height; 
    side = 4;
    height = 2;
    
    //Calculating Area:
    area = side * height;

    //Display area:
    printf("The area of rhombus is: %f\n", area);

    printf("Enter the side of the Rhombus: ");
    scanf("%lf", &side); // It will give the address of the side to the scanf function.

    printf("Enter the height of the Rhombus: ");
    scanf("%lf",&height);

    area = side * height;

    printf("The area is: %f\n",area);

    return 0;
}