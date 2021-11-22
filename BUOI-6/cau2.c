#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    long seconds = time(0);

    srand(seconds);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",10 + rand() % 11);
    }

    return 0;
}