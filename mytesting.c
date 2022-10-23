#include <stdio.h>

int main(void)
{
    // Ok now I'm gonna make the first string here

    printf("Please Enter your name: ");
    char Name[] = "";
    scanf("%s", Name);
    printf("Hello, how are you %s", Name);

    // Yaay, it worked
}