#include <stdio.h>

int table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%dx%d=%d\t", j, i, i * j);
        }
        printf("\n");
    }

    return 0;
}

int main()
{
    int n;
    printf("Nhap n > 0: ");
    scanf("%d", &n);
    while(n < 1)
    {
        printf("So khong hop le, moi nhap lai!!\n");
        printf("Nhap n > 0: ");
        scanf("%d", &n);
    }
    
    printf("Bang cuu chuong tu 1 den %d:\n", n);
    table(n);

    return 0;
}