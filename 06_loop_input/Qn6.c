#include <stdio.h>
#include <stdlib.h>

int main()
{
// Question 4.19 CALCULATING SALES
int choice, quantity;
float total, retail_price;
int i = 0;
while (i<1)
    {
    printf("\nEnter product number: ");
    scanf("%d", &choice);
    printf("\nEnter quantity number: ");
    scanf("%d", &quantity);
    switch (choice)
        {
        case 0:
            i +=1;
            break;

        case 1:
            retail_price = 2.98;
            total = quantity*retail_price;
            printf("\nTotal Retail Value: $%1.2f\n", total);
            break;

        case 2:
            retail_price = 4.5;
            total = quantity*retail_price;
            printf("\nTotal Retail Value: $%1.2f\n", total);
            break;

        case 3:
            retail_price = 9.98;
            total = quantity*retail_price;
            printf("\nTotal Retail Value: $%1.2f\n", total);
            break;

        case 4:
            retail_price = 4.49;
            total = quantity*retail_price;
            printf("\nTotal Retail Value: $%1.2f\n", total);
            break;

        case 5:
            retail_price = 6.87;
            total = quantity*retail_price;
            printf("\nTotal Retail Value: $%1.2f\n", total);
            break;

        default:
            printf("\nInvalid Input\n");
            i += 1;
        }
    }
return 0;
}
