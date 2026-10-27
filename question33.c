#include<stdio.h>
int main()
{
    // program to find max and min from a set of numbers;
    int n , i ;
    float num , max , min ;

    printf("Enter the number of elements=");
    scanf("%d",& n);

    if(n<=0){
        printf("Invalid number of elements:\n");
        return 1;
    }

    printf("Enter number 1 :");
    scanf("%f",&num);
    max = num ;
    min = num;

    for (i=2 ; i <= n ; i++){
        printf("Enter number %d :",i);
        scanf("%f",&num);

        if(num > max){
            max = num ;
        }
        else if(num < min){
            min = num ;
        }
    }
        printf("Current max = %.2f , Current min = %.2f\n",max,min);
       

        return 0 ;

    
   


} 