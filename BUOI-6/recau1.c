#include <stdio.h>

int findMaxIndex(int a[][3], int n, int m)
{
    int max = a[0][0];
    int maxIndex = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxIndex = i * m + j;
            }
        }
    }

    return maxIndex;
}

void inMang(int a[][3], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 3, m = 3;
    int a[][3] = { {15, 32, 13}, {24, 45, 39}, {5, 18, 22} };

    inMang(a, n, m);

    int id = findMaxIndex(a, n ,m);
    printf("Max at row %d, at col %d", id / m, id % m);

    return 0;
}