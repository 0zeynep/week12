#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

    char first[50], second[50];
    int i;
    char reversedFirst[50];
    
    
    printf("Enter first word: ");
    scanf("%s", first);

    printf("Enter second word: ");
    scanf("%s", second);

    int len = strlen(first);
    
    
    for ( i = 0; i < len; i++) {
        reversedFirst[i] = first[len - 1 - i];
    }
    reversedFirst[len] = '\0';

    strcat(second, reversedFirst);

    printf("Sonuc: %s\n", second);

    return 0;}
