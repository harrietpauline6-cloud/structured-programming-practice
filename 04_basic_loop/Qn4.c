#include <stdio.h>
#include <stdlib.h>

int main()
{
// Question 4.9 SUM AND AVERAGE OF INTEGERS
float sum = 0;
int counter, values;
float average;
printf("First integer is: ");
scanf("%d", &counter);
for(int i = 1; i <= counter; i++)
{
    printf("\nEnter value: ");
    scanf("%d", &values);
    printf("\n");
    sum += values;
}
if (counter > 0)
{
    average = sum/counter;
    printf("Average is: %.2f", average);
    printf("\n");
}
printf("\n");
return 0;
}
