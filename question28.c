#include<stdio.h>
int main()
{
    //program to check whether a number is armstrong or not ;
    int n , rem , sum =0 , temp ;
    printf("Enter your number =");
    scanf("%d",& n);
    temp = n ;
    for(;temp > 0 ; temp = temp/ 10){
        rem = temp %10;
        sum = sum +rem*rem*rem;}

        if(sum == n)
        printf("Armstrong number ");
        else
        printf("Not an armstrong number ");
        return 0;

    

}