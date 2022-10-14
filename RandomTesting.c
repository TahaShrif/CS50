#include <stdio.h>

int main(void)
{
    int value = 13%2;
    // printf("The remainder of the equation 13/2 is equal to: %i ",value);

    // printing variables
    int i1 = 1;
    int i2 = -2;
    int i3 = 3;
    char LetA = 'A';
    float ie = 12.2;
    // printf("i1 = %i, i2's value is = %i", i1, i2);
    //Notes:
//  The order of placeholders and variables written after the
//  is what determines what will be where
   
   
//using scanf() to get input from user: 
    //assigning an empty variable to user later
    char a;
    printf("please enter 'y' for a surprise \nAnd n if you don't want one  ");
    scanf("%c", &a);
    printf("DEBUGGING: the input is '%c'\n", a);
    if(a == 'y')
    {
        printf("I love You\n");
    }
    else if(a == 'n')
    {
        printf("oh...okay");
    }
    else
    {
        printf("dude enter either 'y' or 'n' (in lowercase)");
    }
}

