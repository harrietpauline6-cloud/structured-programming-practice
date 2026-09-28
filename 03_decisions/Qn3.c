#include <stdio.h>
#include <stdlib.h>

int main()
{
// Question 3.17 MORTGAGE CALCULATOR
int mortgage, year, monthly_payable_interest;
float IR, total_amount_payable, Total_IR;
printf("Enter mortgage amount in Dollars: $");
scanf("%d", &mortgage);
printf("\nEnter mortgage term (in years): ");
scanf("%d", &year);
printf("\nEnter Interest Rate: ");
scanf("%f", &IR);
Total_IR = IR * mortgage * year;
total_amount_payable = mortgage + Total_IR;
monthly_payable_interest = total_amount_payable/(year * 12);
printf("\nThe Monthly Payable Interest is: $%d", monthly_payable_interest);
return 0;
}
