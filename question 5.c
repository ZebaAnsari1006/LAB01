#include <stdio.h>


int main()
{
int first, second ,third;

printf("enter first variable=");
scanf("%d",&first);

printf("enter second variable=");
scanf("%d",&second);

printf("\nBefore swapping:");
printf("\nfirst=%d",first);
printf("\nsecond=%d",second);

third = first;
first = second;
second = third;

printf("\nafter swapping:");
printf("\nfirst=%d",first);
printf("\nsecond=%d",second);

return 0;


}