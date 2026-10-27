#include<stdio.h>
int main()
{
    //program to find max and second max number from a set of n numbers ;
 int n , i , max , secondmax , num ;
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 printf("Enter the elements: ");
 scanf("%d", &num);
 max = num;
 secondmax = num;
 for(i = 1; i < n; i++)
 {
     scanf("%d", &num);
     if(num > max)
     {
         secondmax = max;
         max = num;
     }
     else if(num > secondmax)
     {
         secondmax = num;
     }
 }
 printf("The maximum number is: %d\n", max);
 printf("The second maximum number is: %d\n", secondmax);
 return 0;
}