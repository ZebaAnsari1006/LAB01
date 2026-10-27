#include<stdio.h>
int main()
{
    //program to print sum of all and even numbers from 1 to 10 ;
    int i , odd = 0 , even = 0;

    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        even = even +i;
        else 
        odd = odd + i;
    }
printf("Sum of even numbers = %d\n", even );
printf("Sum of all odd numbers = %d\n",odd);
return 0;


        
    
       




}