#include <stdio.h>
#include <stdlib.h>

int main()
{
// Question 4.13 NATURAL NUMBERS ARITHMETIC
int i, sum = 0;
float square = 0, cube = 0, sum_square = 0, sum_cube = 0;
printf("ENTER A VALUE: ");
scanf("%d", &i);

for (int j = 1; j <= i; j++)
{
    square = (j*j);
    cube = (j*j*j);
    sum += j;
    sum_square += square;
    sum_cube += cube;
    printf("For %d, Sum is %d\n", j, sum);
    printf("For %d, Square is %.4f\n", j, square);
    printf("For %d, Cube is %.4f\n", j, cube);
}
return 0;
}
