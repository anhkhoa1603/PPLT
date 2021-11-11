#include <stdio.h>

int pod(int n)
{
    int x = n % 10;
    int sum = x;

    while (n > 10)
    {
        n = n / 10;
        x = n % 10;
        sum = sum * x;
    }

    return sum;
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

    printf("Tich cac chu so cua n = %d", pod(n));

    return 0;
}