#include <stdio.h>

int get_quarters(int cents);
int get_cents(void);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);


int main (void)
{
    int cents = get_cents();

    int quarters = get_quarters(cents);
    cents = cents - quarters * 25;

    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);

    int nickels = calculate_nickels(cents);
    cents = cents - (nickels * 5);

    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);

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
int calculate_dimes(int cents)
{
    int remainder = cents % 10;
    return (cents - remainder) / 10;
}
int calculate_nickels(int cents)
{
    int remainder = cents % 5;
    return (cents - remainder) / 5;
}
int calculate_pennies(int cents)
{
    return cents;
}