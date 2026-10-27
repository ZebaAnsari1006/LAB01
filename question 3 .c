#include <stdio.h>
int main()
{
    float Gross_salary , allowance , basic_salary  ;
    
    printf("allowance=");
    scanf("%f",&allowance);
    printf("\n basic_salary =");
    scanf("%f",&basic_salary);
    
    Gross_salary = basic_salary + allowance;

    printf("\nGross_salary = %f",Gross_salary);

    return 0 ;


}