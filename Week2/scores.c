#include <stdio.h>

// This is the program where arrays in c are introduced 

void scores(int n);

int main(void)
{
    int f;
    printf("How many tests did you take? ");
    scanf("%i", &f);
    scores(f);
}

// This is the function I created to calculate the Average of scores scored on a test
void scores(int n)
{
    int Total = 0, Average;
    for (int i = 0; i < n; i++)
    {
        int scores[n];
        printf("Your score test number [%i] is: ", i + 1);
        int j;
        scanf("%i", &j);
        scores[i]= j;
        Total += scores[i];
    }
    Average = Total / n;
    printf("Your average is %i\n", Average);
}