#include <stdio.h>

void meow(int e)
    {
        int i;
        for(i =0;i<e; i++)
        {
            printf("Meow\n");
        }
    }
int main(void)
{
    int mws;
    printf("How many times do you want the cat to meow? ");
    scanf("%i", &mws);
    printf("DEBUGGING: i = %i ", mws);
    meow(mws);
}