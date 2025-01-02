#include <stdio.h>
void menu(){
    printf("MENU\n1. Draw a single line\n2. Draw a rectangle\n3. Draw a parallelogram\n4. EXIT\n");
}
void displayRectangle(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 10; j++){
            printf("*");
        }
        printf("\n");
    }
}
void displayParalleogram(){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        for (int n = 0; n < 10; n++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main(void){
    int choice = 0;
    while(choice != 4){
        menu();
        do{
        printf("Enter your choice: ");
        scanf("%d", &choice);
        }while(choice < 0 || choice > 4); 
        if(choice == 1){
            for (int i = 0; i < 10; i++){
                printf("*");
            }
            printf("\n");
        }
        else if(choice == 2){
            displayRectangle();
        }
        else if(choice == 3){
            displayParalleogram();
        }
    }
    
}