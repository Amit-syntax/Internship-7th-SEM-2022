#include<stdio.h>

int main(){

    int array[10];
    int size;


    printf("Enter Size : ");
    scanf("%d", &size);

    for(int i=0; i<size; i++){
        printf("enter a[%d]: ", i);
        scanf("%d", &array[i]);
    }

    for(int i=0; i<size; i++){
        printf("\n array[%d] = %d", i, array[i]);
    }

    return 0;
}