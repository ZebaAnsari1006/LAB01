#include<stdio.h>
int main()
{
    //program to check whther a number is  palindrome or not ;
    int n , temp , digit , rev = 0;
    printf("Enter your number : ");
    scanf ("%d",& n );
    temp = n ;

   while(temp > 0){
    digit = temp % 10 ;
    rev = rev *10+digit;

    temp = temp / 10;
   }
    if(rev == n)
        printf("Palindrome number ");
    else
        printf("Not a palindrome number ");
    return 0;
    
}