#include <stdio.h>
int isPrime(int n){
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            return 0;
        }
    }
    return 1;
}
int get_int(char* prompt){
    int result;
    printf("%s",prompt);
    scanf("%d",&result);
    return result;
}
int main(void){
    int n = get_int("Enter the value: ");
    while (n > 0)
    {
        if (isPrime(n)){
            printf("It is prime\n");
        }
        else{
            printf("It is not prime\n");
        }
        n = get_int("Enter the value: ");
    }
    
}