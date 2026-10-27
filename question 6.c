#include <stdio.h>
//program to swap two variables without using a third variable;


int main()
{
    int first, second;
    printf("enter first variable=");
    scanf("%d",&first);

    printf("enter second variable=");
    scanf("%d",&second);

    printf("\n Before swapping:");
    printf("\n first variable=%d",first);
    printf("\n second variable=%d",second);

    first = first + second;
    second = first - second;
    first = first - second;
    
    printf("\n After swapping:");
    printf("\n first variable=%d",first);
    printf("\n second variable=%d",second);

    return 0;
}