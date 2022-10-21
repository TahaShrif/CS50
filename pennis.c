#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    printf("What is the amount of Dollars? \n");
    scanf("%f", &dollars);
    int pennis;
    pennis = round(dollars * 100);
    printf("The amount of pennis: %i", pennis);
}