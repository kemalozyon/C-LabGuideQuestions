#include <stdio.h>
#define SIZE 20
void displayWord(char string[], int size){
    for (int i = 0; i < size; i++){
        printf("%c",string[i]);
    }
}
int isEqual(char string1[], char string2[], int size1, int size2){
    if(size1 == size2){
        for (int i = 0; i < size1; i++){
            if(string1[i] != string2[i]){
                return 0;
            }
        }
        return 1;
    }
    return 0;
}
int main(void){

    char firstWord[SIZE], secondWord[SIZE];
	int size1 = 0, size2 = 0;

	printf("Enter first word: ");
	scanf("%c", &firstWord[size1]);

	while (firstWord[size1] != '\n') //keep reading letters until the user enters '\n'
	{
		size1++;
		scanf("%c", &firstWord[size1]);
	}

	printf("Enter second word: ");
	scanf("%c", &secondWord[size2]);

	while (secondWord[size2] != '\n')
	{
		size2++;
		scanf("%c", &secondWord[size2]);
	}
    if (isEqual(firstWord,secondWord,size1,size2)){
        displayWord(firstWord,size1);
        printf(" and ");
        displayWord(secondWord,size2);
        printf("are not same char.");
    }
}