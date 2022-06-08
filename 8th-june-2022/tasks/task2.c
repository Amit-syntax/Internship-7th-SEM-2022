#include<stdio.h>

int main(){
    char ch;

    printf("Enter char to find weather vowel/consonent: ");
    scanf(" %c", &ch);

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nVowel");
            break;
        
        default:
            printf("\nConsonent");
            break;
    }
}