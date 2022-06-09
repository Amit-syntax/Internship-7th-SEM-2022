#include<stdio.h>

int MATRIX_SIZE = 2;

int input_matrix(int arr[MATRIX_SIZE][MATRIX_SIZE]){

    printf("\nEnter new Matrix Values\n");
    int inpt;

    for(int i=0; i<MATRIX_SIZE; i++){
        for(int j=0; j<MATRIX_SIZE; j++){
            printf("Enter matrix[%d][%d] : ", i,j);
            scanf("%d", &inpt);
            arr[i][j] = inpt;
        }
    }
    return 0;
}

int multiply_matrix(int arr1[MATRIX_SIZE][MATRIX_SIZE], int arr2[MATRIX_SIZE][MATRIX_SIZE], int output[MATRIX_SIZE][MATRIX_SIZE]){

    for(int i=0; i<MATRIX_SIZE; i++){
        for(int j=0; j<MATRIX_SIZE; j++){
            output[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

void print_matrix(int matrix[MATRIX_SIZE][MATRIX_SIZE]){
    for(int i=0; i<MATRIX_SIZE; i++){
        for(int j=0; j<MATRIX_SIZE; j++){
            printf("%d, ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(){

    int m1[MATRIX_SIZE][MATRIX_SIZE], m2[MATRIX_SIZE][MATRIX_SIZE];
    int output[MATRIX_SIZE][MATRIX_SIZE];

    input_matrix(m1);
    input_matrix(m2);

    multiply_matrix(m1, m2, output);

    printf("\nOUTPUT:\n");
    print_matrix(output);

    return 0;
}