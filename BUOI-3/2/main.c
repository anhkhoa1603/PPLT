#include <stdio.h>

int tong(int n)
{
    int i = 1, S = 0;
    while (i <= n)
    {
        S = S + i;
        i = i + 1;
    }
    return S;
}

int main()
{
    int n;
    printf("Nhap 1 so nguyen duong: ");
    scanf("%d", &n);

    while (n <= 0)
    {
        printf("\nSo khong hop le, yeu cau nhap lai: ");
        scanf("%d", &n);
    }

    printf("So hop le!");

    printf("\n\nTong tu 1 den %d = %d", n, tong(n));

    

    return 0;
}