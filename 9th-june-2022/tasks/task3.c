#include<stdio.h>


int add(int a, int b){
    return a+b;
}

void function_without_return(){
    printf("\nThis is a function without `argument` and without `return`");
}

void function_with_params_without_return(char msg[10][10]){
    printf("\nThis is function With `parameter` without `return` ");
    printf("\nyour message : %s", msg);
}

int main(){

    int a, b;

    printf("Enter Value of a: ");
    scanf("%d", &a);
    printf("Enter Value of b: ");
    scanf("%d", &b);

    int res = add(a, b);
    printf("\nResult of `a+b` using functions : %d", res);

    function_with_params_without_return("Hello there !");
    function_without_return();

    return 0;
}