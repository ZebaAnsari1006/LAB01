#include  <stdio.h>

int main()
{ 
    int subject1 , subject2 , subject3 , subject4 , subject5 , Total , Percentage ;
    
    printf("subject 1 =");
    scanf("%d",& subject1 );

    printf("\nsubject 2 =");
    scanf("%d",& subject2 );

    printf("\nsubject 3 =");
    scanf("%d",& subject3 );

    printf("\nsubject 4 =");
    scanf("%d",& subject4);
     
    printf("\nsubject 5 = ");
    scanf("%d",& subject5);

    Total = subject1 + subject2 + subject3 + subject4 + subject5;
    Percentage = Total * 100 / 500;
    

    printf("\nTotal marks = %d", Total);
    printf("\nPercentage = %d", Percentage);

    return 0;
}