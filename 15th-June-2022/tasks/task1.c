#include<stdio.h>


int pop_stack(int STACK[], int *size){
    int poped_value = STACK[0];

    for(int i=0; i<*size; i++){
        STACK[i] = STACK[i+1];
    }
    *size = *size - 1;

    return poped_value;
}

int main(){

    int STACK_SIZE = 50;
    int STACK[STACK_SIZE];

    int curr_size = 0;
    int option;

    do{
        printf("\n1. Insert Into Stack");
        printf("\n2. List Stack");
        printf("\n3. Delete First Element In Stack");
        printf("\n4. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &option);
        

        switch (option)
        {
        case 1:
            int val;
            printf("Enter value to insert: ");
            scanf("%d", &val);

            STACK[curr_size++] = val;
            break;

        case 2:
            printf("\n:STACK:");
            for(int i=0; i<curr_size; i++){
                printf("\n%d. %d", i, STACK[i]);
            }
            printf("\n:STACK END:\n");
            break;
        
        case 3:
            printf("\n\nPoped Element: %d\n\n", pop_stack(STACK, &curr_size));
            break;
        
        case 4:
            // exit
            break;
        
        default:
            printf("\nInvalid Choice");
            break;
        }
    }while(option != 4);

    
    return 0;
}