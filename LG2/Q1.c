#include <stdio.h>

int main(void){
    //Declaring variables
    double side, area, height;

    //Calculating Area
    side = 2; 
    height = 4; 
    area = side * height;

    //Display the Area
    printf("Area of the rhombus is: %f\n",area);

    //Get input value for one side of the rhombus from the user:
    printf("Enter one side of the Rhombus: ");
    scanf("%lf",&side);

    //Get input value for height from the user 
    printf("Enter height of the rhombus: ");
    scanf("%lf", &height);

    area = side * height;

    printf("Area of the rhombus is : %f\n",area);

    return 0;
}