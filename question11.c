#include <stdio.h>

//reac seconds and convert it into time;

int main()

{
    int total_seconds , hours , minutes , seconds;
  printf("Enter total_seconds_passed=");
  scanf("%d",&total_seconds_passed);
  

  hours =( total_seconds )/( 60*60);
  minutes = total_seconds / 60;
  seconds = total_seconds_passed;

  printf("Time in hours minutes and seconds=%d:%d:%d",hours , minutes , seconds);

  return 0;


}