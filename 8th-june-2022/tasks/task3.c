#include<stdio.h>

int main(){
    int a, b;
    char op;


    printf("Enter operator: ");
    scanf("%d", &a);

    printf("Enter operator: ");
    scanf("%d", &b);

    printf("Enter operator: ");
    scanf(" %c", &op);

    switch (op)
    {
        case '+':
            printf("result: %d", (a + b) );
                break;
        
        case '-':
            printf("result: %d", (a - b) );
                break;
        
        case '/':
            printf("result: %d", (a / b) );
                break;
        
        case '*':
            printf("result: %d", (a * b) );
            break;
        
        default:
            printf("\noperator not implemented");
            break;
    }
}