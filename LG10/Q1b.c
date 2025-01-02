#include <stdio.h>

void putBlank(int n){
    for(int i = 0; i < n; i++){
        printf(" ");
    }
}
void displayLine(int n, char c){
    for (int i = 0; i < n; i++){
        printf("%c", c);
    }
}
void displayRectange(int n, int m, char c){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%c",c);
        }
        printf("\n");
    }
}
void displayParallelograph(int n, int m, char c){
    for(int i = 0; i < n; i++){
        putBlank(n - i - 1);
        for (int j = 0; j < m; j++){
            printf("%c",c);
        }
        printf("\n");
    }
}

int main(void){
    displayParallelograph(4,5,'a');
}