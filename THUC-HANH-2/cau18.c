#include <stdio.h>

int reverse(int n)
{
    int cong = 0, x;

    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        cong = cong * 10 + x;
    }

    return cong;
}

int main()
{
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    int m = 10;
    int cong = 0;
    int i, x;
    while (n > 0)
    {
        i = n % 2;
        n /= 2;
        x = i * m;
        cong += x;
        m = m * 10;
    }

    printf("%d", reverse(cong));

    return 0;
}