#include <stdio.h>

char to_uppercase(char letter)
{

    return letter-('b'-'B');
}
int main()
{
    char x = 'k';

    printf("%c", to_uppercase('g'));

    return 0;
}
