#include<stdio.h>

int main(){

    printf("\n\nFor Loop:");
    for(int i=1; i<=10; i++){
        printf("\n%d", i);
    }

    printf("\n\nWhile Loop:");
    int i=1;
    while(i <= 10){
        printf("\n%d", i);
        i++;
    }

    printf("\n\nDo While Loop:");
    i = 1;
    do
    {
        printf("\n%d", i);
        i++;
    } while (i <= 10);
    
    return 0;
}