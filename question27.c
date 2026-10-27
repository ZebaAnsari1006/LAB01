#include<stdio.h> 
int main(){
//program to check whether a number is prime or not ;
int n ,  i , flag = 0 ;

printf(" Enter your number =");
scanf("%d",& n );

for (i=2 ; i <= n/2 ; i++)
{
    if(n%i==0){
        flag = 1;
        printf("The number is not prime ");
       break;
    }
    else 
    flag = 0;
    printf("The number is prime ");

    return 0 ;


}




}
