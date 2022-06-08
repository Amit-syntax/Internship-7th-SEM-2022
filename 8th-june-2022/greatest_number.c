
#include<stdio.h>

int main(){
    int a=100, b=45, c=32;
    int big;

    if (a> b){
        if (a> c){
            big = a;
        }
        else{
            big = c;
        }
    }
    else if (b> c){
        big = b;
    }
    else{
        big = c;
    }
    printf("Biggest No: %d", big);

    return 0;
}