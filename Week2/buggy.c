#include <stdio.h>

int get_int(void);

int main(void)
{
    int i = get_int();
    printf("i is %i", i);
}

int get_int(void)
{
    int n;
    do
    {
        printf("What is i? \n");
        scanf("%i", &n);    
    } while (n < 0);    
    return n;

}