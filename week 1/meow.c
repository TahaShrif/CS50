#include <stdio.h>


    //making it a function
    void meow(int inp)
    {
        for(int h = 0; h< inp; h++)
        {
            printf("meow\n");
        }
    }

int main(void)
{
//Using a while loop
    // int i = 0; 

    // while (i <= 5)
    //     {
    //         printf("Meow\n");
    //         i += 1;
    //     }
// Using a for loop:
    // for(i; i<5; i++)
    // {
    //     printf("meow\n");
    // }
    
//Using a function
    int a;
    printf("How many times does the cat meow? ");
    scanf("%i", &a);
    meow(a);
}


