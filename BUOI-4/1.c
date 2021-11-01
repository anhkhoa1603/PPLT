#include <stdio.h>

int main()
{
    const int n = 5;
    const int size = 15;

    int c[n];
    int invalid = 0;

    for (int i = 0; i < n; i++)
    {
        c[i] = 0;
    }
        
    for (int i = 1; i <= size; i++)
    {
        int x;
        printf("%d. Nhap ma binh chon (1-%d): ", i, n);
        scanf("%d", &x);

        if (x < 1 || x > n) invalid++;
        else c[x - 1]++;        
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Ung vien %d: %d\n", i + 1, c[i]);
    }
    
    printf("So phieu khong hop le: %d", invalid);

    return 0;
}