#include  <stdio.h>
int main()
{
    float period_of_revolution,  days ,  hours ,  minutes;

    period_of_revolution = 31558150;

    printf("Earth's period of revolution = %f seconds", period_of_revolution);
    days=period_of_revolution / (24*60*60);
    hours = period_of_revolution / (60*60);
    minutes = period_of_revolution / 60;

    printf("\n number of days = %f", days);
    printf("\n number of hours = %f", hours);
    printf("\n number of minutes = %f", minutes);

    return 0;

}