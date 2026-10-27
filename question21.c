#include<stdio.h>
#include<math.h>

int main()
{int  a , b , result;
    char ch , operator;


printf("Enter a and b =");
scanf("%d , %d",&a ,&b);

printf("Enter your operator:");
scanf("%c",&operator);

switch(operator){
    case'+':
    printf("%d + %d = %d",a , b, result);
    break;

    case'-':
    printf("%d - %d = %d" , a , b , result);
    break;

    case'*':
    printf("%d * %d=%d", a , b , result);
    break;

    case'/':
    printf("%d / %d = %d",a , b , result);
    break;

    printf("result is =%d", result);
    return 0 ;




}





}