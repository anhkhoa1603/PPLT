#include <stdio.h>

int main()
{
    int i, j;

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%dx%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}