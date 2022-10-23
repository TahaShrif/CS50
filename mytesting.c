#include <stdio.h>

int main(void)
{
    // Just saw how arrays are written in W3School
    // Trying it:
    int scores[] = {982, 231, 79};
    for (int i = 0; i < 3; i++)
    {
        printf("score number  %i is: %i\n ", i + 1, scores[i]);
    }
    
}