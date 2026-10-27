#include<stdio.h>
int main()
{
    //program to calculate simple interest;
printf("Enter principal amount =");
    float p , r , t , si ;
    scanf("%f",&p);

    printf("Enter rate of interest =");
    scanf("%f",&r);

    printf("Enter time period =");
    scanf("%f",&t);

    si = (p * r * t)/100 ;
    printf("Simple interest = %.2f",si);
}