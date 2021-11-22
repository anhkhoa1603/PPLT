#include <stdio.h>
#define max_col 10
#define max_row 10

void inMaTran(int a[][max_col], int n, int m)
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

int main()
{
    int n = 3, m = 3;
    int a[][max_col] = { {15, 3, 13}, {4, 45, 3}, {5, 15, 22} };
    int b[][max_col] = { {5, 2, 32}, {45, 5, 29}, {25, 38, 4} };
    int c[max_row][max_col];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }      
    }

    printf("Ma tran (a):\n");
    inMaTran(a, n, m);

    printf("Ma tran (b):\n");
    inMaTran(b, n, m);
    
    printf("Ma tran (c) sau khi lay (a) tru cho (b):\n");
    inMaTran(c, n, m);

    return 0;
}