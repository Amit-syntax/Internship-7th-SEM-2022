#include<stdio.h>

int main(){

    int no, is_prime=1;

    printf("Enter No. to check prime or not: ");
    scanf("%d", &no);

    for(int i=0; i<no/2; i++){
        if(no % i == 0){
            is_prime = 0;
            break;
        }
    }

    if(is_prime){
        printf("\nPrime No.");
    }
    else{
        printf("\nNot Prime.");
    }

    return 0;
}