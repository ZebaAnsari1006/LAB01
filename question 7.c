#include <stdio.h>
//area of the triangle;

int main()
{

    float base, height, area;
    printf("enter base of the triangle=");
    scanf("%f", &base);

    printf("enter height of the triangle=");
    scanf("%f", &height);

    area = 0.5 * base * height;
    
    printf("area of the triangle=%f", area);
    return 0;
}