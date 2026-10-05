#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    //printf("%d\n", sizeof(int));
    //printf("%d\n", sizeof(float));
    //printf("%d\n", sizeof(char));

    int *ptr;
    
    ptr = (int *) calloc (5,sizeof(int));
    
    for(int i = 0; i<5 ; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc (ptr, 8);
    printf("\nEnter numbers(8) : ");
    for(int i = 0; i<8 ; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("\nnumber %d is %d",i , ptr[i]);
        /* code */
    }
    
    return 0;
}