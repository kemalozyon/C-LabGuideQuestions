#include <stdio.h>
int sumOfDigits(int n){
    int sum = 0;
    while (n != 0)
    {   
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
    
}
int main(void){
    int number, result;
    do{
        printf("Enter a valid number: ");
        scanf("%d",&number);
    }while (number < 0);
    result = sumOfDigits(number);
    while(result > 9){
        printf("%d\n",result);
        result = sumOfDigits(result);
    }
    printf("%d\n", result);
}