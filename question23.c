#include <stdio.h>
int main()
{
    //program to read two numbers and calculate power;
    int a, b , i ,power=1 ;

    printf("Enter base and power=  ");
    scanf("%d  %d", &a ,&b );

    for(i=1;i<=b; i++)
    {
        power=power*a;
    }

    printf("Answer =%d", power);

    return 0;

}