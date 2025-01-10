#include <stdio.h>

int main(void){
    double oldClothes, price;
    printf("Enter the number of old clothes : ");
    scanf("%lf",&oldClothes);
    printf("Enter the price of new clothes (TL) : ");
    scanf("%lf", &price);
    printf("The store saved %.2f TL from recycling.\n\n", 50 * oldClothes);
    printf("You win %.2f discount :)\n", price * (1.0 / 5));
    printf("Please pay %.2f TL.\n", (4.0 / 5) * price);

}