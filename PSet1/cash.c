#include <stdio.h>

int get_quarters(int cents);
int get_cents(void);

int main (void)
{
    int cents = get_cents();

    int quarters = get_quarters(cents);
    cents = cents - quarters * 25;

    printf("It is %i quarters, and %i cents. \n", quarters, cents);
}

int get_cents(void)
{
    int cents;
    printf("how many cents? ");
    scanf("%i", &cents);
    return cents;
}
int get_quarters(int cents)
{
    int remainder = cents % 25;
    return (cents - remainder) / 25;
}