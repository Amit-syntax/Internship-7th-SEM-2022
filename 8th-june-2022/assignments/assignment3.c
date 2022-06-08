#include<stdio.h>

int main(){

    int no, factorial;

    printf("enter no. to calculate factorial for: ");
    scanf("%d", &no);

    // calculating factorial
    for(int i=1; i<no; i++){
        factorial *= i;
    }

    printf("Factorial of %d = %d: ", no, factorial);

    return 0;
}