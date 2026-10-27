#include <stdio.h>
int main()
{
    //program to calculate the factorial of a number
    int n, i , factorial , fact=1;

    printf("Enter your number=");
    scanf("%d",&n);
 



    for (i=1;i<=n;i++)
    {
        fact= fact* i;

    } printf("factorial of the number=%d",fact);
    return 0;



}