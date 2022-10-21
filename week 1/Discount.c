#include <stdio.h>
float discount(float price, float percentage);

int main(void)
{
    float op;
    printf("The original price is: ");
    scanf("%f", &op);
    // printf("DEBUGGING, op: %.2f \n", op);
    printf("The percentage off is: ");
    float percent_off;
    scanf("%f", &percent_off);
    // printf("DEBUGGING, percentage_off: %.2f \n", percent_off);
    float sale = discount(op, percent_off);
    printf("The price of the product after discount is %.2f", sale);
    
}


float discount(float price, float percentage)
{
    return price * (100 - percentage)/ 100;
}