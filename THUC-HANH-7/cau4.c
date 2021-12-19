#include <stdio.h>

int mu(int x, int n)
{
    if(n == 1)
        return x;
    return x * mu(x, n - 1);
}

int main()
{
    int x, n;
    printf("Nhap x: ");
    scanf("%d", &x);

    printf("Nhap n: ");
    scanf("%d", &n);

    int kq = mu(x, n);
    printf("Kq = %d", kq);

    return 0;
}