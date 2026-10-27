#include<stdio.h>
int main()
{
    //program to find the value of y 
    int x , n , i ;
   int  power =1 ;
   float y ;

    printf("Enter x and n=");
    scanf("%d %d ",&x ,&n);

    if(n==1)
    {
        y=1+x;
    }

    else if(n==2)
    {
        y=1+(x/n);

    }
    else if (n==3)
    {
        y=1+x*x*x;

    }
    else{
        y=1+n*x;

    }
    printf("Y=%.2f",y);
    return 0;
}