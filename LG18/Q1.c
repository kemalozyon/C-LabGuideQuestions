#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void fillPattern(int arr[9][9], int dimension){
    int mid = dimension / 2;
    for(int r = 0; r <= dimension; r++){
        for (int c = dimension - r; c <= dimension + r; c++){
            arr[r][c] = 1;
        }
    }
}
void display(int arr[9][9]){
    for (int r = 0; r < 9; r++){
        for (int c = 0; c < 9; c++){
            printf("%d",arr[r][c]);
        }
        printf("\n");
    }
}
int main(void){
    int dimension = 0;
    srand(time(NULL));
    while (dimension % 2 == 0)
    {
        dimension = rand() % 9 + 1;
        printf("Generated random dimension : %d\n", dimension);
    }
    int arr[9][9] = {0};
    fillPattern(arr,dimension);
    display(arr);
    
}