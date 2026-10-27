#include <stdio.h>
//converting farenheit to centigrade;


int main()
{
   float farenheit, centigrade;

   printf("temperature in farenheit=");
   scanf("%f",&farenheit);

   centigrade=(farenheit-32)*5/9;
   printf("temperature in centigrade=%f",centigrade);

   return 0;
   
}