#include <stdio.h>
#include <stdlib.h>

int main()
{
// Question 2.18 COMPARING RAINFALL
float Highest_rainfall, Current_rainfall;
printf("What is the highest rainfall ever recorded in country a?\n");
scanf("%f", &Highest_rainfall);
printf("What is the current rainfall recorded in country a?\n");
scanf("%f", &Current_rainfall);
if (Current_rainfall > Highest_rainfall)
{
    printf("\nThe current rainfall levels of this year in Vietnam are the highest.\n");
    Highest_rainfall = Current_rainfall;
}
return 0;
}
