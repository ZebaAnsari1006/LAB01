#include <stdio.h>
#include <math.h>

int main()
{
//read marks of five subject and orint division
float marks , subject1 , subject2 , subject3, subject4 , subject5 , division , Percentage ;
printf("Marks in subject1=");
scanf("%f",& subject1);

printf("\nMarks in subject2=");
scanf("%f",& subject2);

printf("\nMarks in subject3  =");
scanf("%f",& subject3);

printf("\nMarks in subject4  =");
scanf("%f",& subject4);

printf("\nMarks in subject5  =");
scanf("%f",& subject5);

Percentage = ((subject1 + subject2 + subject3 + subject4 + subject5) / 500)*100;
printf("\n Percentage=%f",Percentage);


if(Percentage>=40 && Percentage<=60){
    printf("\n Passed!");
}
else if (Percentage<=39){
    printf("\nFailed!");

}
else if (Percentage>=61 && Percentage<=75){
    printf("\nSecond Divion!");
}

else if  (Percentage>=76){
    printf("\nFirst Division!");

}
return 0;


}