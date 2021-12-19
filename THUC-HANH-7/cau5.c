#include <stdio.h>

int countDigit(long n)
{
    if(n < 10)
    {
        return 1;
    }
    return countDigit(n / 10) + 1;
}

int main()
{
    int long n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int count = countDigit(n);
    printf("Kq = %d", count);

    return 0;
}