
#include<stdio.h>

int main(){

    int array[3][3];
    int upper_sum=0, lower_sum=0;

    // entering numbers in array by user
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("enter array[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);

            if(i < j){
                upper_sum += array[i][j];
            }
            else if(i > j){
                lower_sum += array[i][j];
            }
        }
    }


    printf("\nupper sum : %d", upper_sum);
    printf("\nlower sum : %d", lower_sum);

    return 0;
}