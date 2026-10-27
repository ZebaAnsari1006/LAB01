#include <stdio.h>

int main()
{
    float CheckingTime, Hours , Minutes , Seconds;

    printf("What is the Time:");
    scanf("%f", &CheckingTime);

    Hours = CheckingTime / 3600;
    Minutes = (CheckingTime - Hours * 3600) / 60;
    Seconds = CheckingTime - Hours * 3600 - Minutes * 60;

    printf("Time in HR MINS and SECONDS: %.2f hours, %.2f minutes, %.2f seconds", Hours, Minutes, Seconds);
    return 0;
}
