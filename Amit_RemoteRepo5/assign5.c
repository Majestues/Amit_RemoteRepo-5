#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;   //5
    int num2;   //7

    printf("Please enter two number to swap \n");
    printf("First number: ");
    scanf("%d",&num1);

    printf("\n");

    printf("Second number: ");
    scanf("%d",&num2);

    printf("\n");

    printf("Numbers before swapping are num1=%d , num2 =%d",num1,num2);
    printf("\n");

    swap_add_sub(&num1,&num2);

    return 0;
}

void swap_add_sub(int *a,int *b){

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("num1 is now = %d",*a);
    printf("\n");
    printf("num2 is now = %d",*b);
}
