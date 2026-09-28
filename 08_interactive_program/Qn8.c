#include <stdio.h>
#include <stdlib.h>

int main(void) {
// Question 5.19 RECTANGLE OF ASTRISKS
int i, j, side1 = 4, side2 = 5;

for (i = 0; i < side1; i++)
    {

    for (j = 0; j < side2; j++)
    {
        printf("*");
    }

    printf("\n");
}
return 0;
}
