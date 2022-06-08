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

    int odd=0, even=0;
    // counting even and odd
    for(int i=0; i<size; i++){
        if(array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }

    printf("\nEven: %d, Odd: %d", even, odd);

    return 0;
}