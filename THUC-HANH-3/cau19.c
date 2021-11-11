#include <stdio.h>

int factorial(int n)
{
    int tich = 1;
    for (int i = 2; i <= n; i++)
    {
        tich = tich * i;
    }

    return tich;
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

    printf("Giai thua cua %d = %d", n, factorial(n));
    
    return 0;
}