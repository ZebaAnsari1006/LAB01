#include <stdio.h>

int amin()
{

    //read  three numbers and print the maxx
float a , b , c  , number ;
printf("Enter your numbers :");
printf("a=");
scanf("%f",&a);

printf("b=");
scanf("%f",&b);

printf("c=");
scanf("%f",&c);

if (a>b && a>c){
    printf("a is maxx!");
}

else if (b>c && b>a){
    printf("b is maxx!");
}
else{
    printf("c is maxx!");
}

return 0;
}