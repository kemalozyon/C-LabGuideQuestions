#include <stdio.h>
void menu(){
    printf("MENU\n1. Draw a single line\n2. Draw a rectangle\n3.Draw a paralelogram\n4. Exit\n");
}
void putBlank(int n){
    for(int i = 0; i < n; i++){
        printf(" ");
    }
}
void displayLine(int n, char c){
    for (int i = 0; i < n; i++){
        printf("%c", c);
    }
    printf("\n");
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
    int choice = 0;
    char c; 
    int size1, size2;
    while (choice != 4)
    {
        menu();
        do{
            printf("Enter your choice: ");
            scanf("%d", &choice);
        }while(choice < 0 || choice > 4);
        switch (choice)
        {
        case 1:
            printf("Enter a symbol: ");
            scanf(" %c", &c);
            printf("Enter side: ");
            scanf("%d",&size1);
            displayLine(size1, c);
            break;
        case 2:
            printf("Enter a symbol: ");
            scanf(" %c", &c);
            printf("Enter side: ");
            scanf("%d",&size1);
            printf("Enter side: ");
            scanf("%d",&size2);
            displayRectange(size1,size2,c);
            break;
        case 3:
            printf("Enter a symbol: ");
            scanf(" %c", &c);
            printf("Enter side: ");
            scanf("%d",&size1);
            printf("Enter side: ");
            scanf("%d",&size2);
            displayParallelograph(size1,size2,c);
            break;
        
        default:
            break;
        }
    }
    

}