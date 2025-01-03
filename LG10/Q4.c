#include <stdio.h>
int powd(int n, int m){
    int result = 1; 
    for(int i = 0; i < m; i++){
        result *= n;
    }
    return result;
}
int convertToDecimal(int base, int number){
    int digit, power = 0, decimal = 0;
    while (number != 0)
    {
        digit = number % 10;
        decimal += powd(base,power) * digit;
        number /= 10;
        power++;
    }
    return decimal;
}

int main(void){
    int base, number;
    do{
        printf("Enter the base: ");
        scanf("%d",&base);
    }while(base <= 0 || base >= 10);
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("The value of the number %d in base %d is %d",number,base,convertToDecimal(base,number));
}