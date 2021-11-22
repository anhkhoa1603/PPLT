#include <stdio.h>
#define max_col 10

void inMang(int a[][max_col], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void viTriSLN(int a[][max_col], int n, int m)
{
    int max, x, y;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("Max = a[%d][%d] = %d", x, y, max);
}

int main()
{
    int n = 3, m = 3;
    int a[][max_col] = { {15, 32, 13}, {24, 45, 39}, {5, 18, 22} };

    inMang(a, n, m);

    viTriSLN(a, n, m);

    return 0;
}