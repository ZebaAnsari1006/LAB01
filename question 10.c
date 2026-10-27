#include <stdio.h>

int main()
{
    int M,P,C,E,CM;

    printf("M=");
    scanf("%d", &M);

    printf("\nP=");
    scanf("%d",&P);

    printf("\nC=");
    scanf("%d",&C);

    printf("\nE=");
    scanf("%d",&E);

    CM = (M + P + C )/2 + E ;

    printf("\nCM=%d",CM);

    return 0;
}