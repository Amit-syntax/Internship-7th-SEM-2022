#include<stdio.h>

int main(){

    int no;

    printf("Enter Number: ");
    scanf("%d", &no);

    int sum=0, cur_no=no;

    while(!(cur_no < 1)){
        sum += (cur_no % 10); 
        cur_no = cur_no / 10;
    }

    printf("Sum of %d digits is : %d", no, sum);

    return 0;
}