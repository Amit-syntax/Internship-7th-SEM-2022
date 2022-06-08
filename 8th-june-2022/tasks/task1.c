#include<stdio.h>


int main(){

    int m1=57, m2=67, m3=89, m4=34;
    int percentage = ((m1+m2+m3+m4)/(4 * 100)) / 100;

    if (percentage < 33){
        printf("you need to repeate the cource ");
    }
    else if(percentage > 50 ){
        if(percentage < 65){
            printf("Percentage: %d -> Third", percentage);
        }
    }
    else if(percentage > 65 ){
        if(percentage < 80){
            printf("Percentage: %d -> Second", percentage);
        }
    }
    else if(percentage > 80 ){
        if(percentage < 100){
            printf("Percentage: %d -> First", percentage);
        }
    }

    return 0;
}