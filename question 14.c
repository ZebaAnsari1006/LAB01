#include <stdio.h>
int main ()
{
    //program to check whether a given charcteristic is Capital, small , a digit or a symbol

    char character ,  Capital_letter , Small_case_letter , Digit , Symbol;
    printf("Enter your character=");
    scanf("%c",&character);

    printf("\n ASCII code =%d",character );


    
    if (character>=65&&character<=97){
        printf("/nCapital letter!");

    }
 else if(character>=97&& character<=122){
    printf("/nLower case letter!");
 }
 else if(character>=48 && character<=57){
    printf("/nDigit!");
}
 else {
    printf("/nSymbol!");
 }
 return 0;


}
