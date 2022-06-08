#include<stdio.h>

int main(){

    int no;

    printf("Enter Number to print table for: ");
    scanf("%d", &no);

    for (int i=1; i<=10; i++){
        printf("\n%d * %d = %d", no, i, no * i);
    }

    return 0;
}