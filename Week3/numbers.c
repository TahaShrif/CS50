#include <stdio.h>

int main (void)
{
    int numbers[] = {4, 6, 8, 2, 7, 5, 0}, n;
    printf("what number do you want to search for? ");
    scanf("%i", &n);
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("number %i is on the list, it is on numbers[%i] \n", n, i);
            return 1;
        }
    }
    printf("false");
}