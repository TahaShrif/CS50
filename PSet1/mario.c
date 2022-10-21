#include <stdio.h>

int main(void)
{
    // Creates these empty integer variables 
    int row, column, spaces, height;
    do
    {
        printf("How high should the stairs be? ");
        scanf("%i", &height);
    }
    while (height <1 || height > 8);
    // Keep asking for the height until User inputs a number between 1 and 8
    for (row = 0; row < height; row++)
    {
        for (spaces = 0; spaces <height - row - 1; spaces++)
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
        printf("#");
        }
        printf("\n");
    }
    
}