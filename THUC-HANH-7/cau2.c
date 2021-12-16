#include <stdio.h>

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n * factorial(n -1);
}

int main()
{
    printf("Nhap n: ");
    int n;
    scanf("%d", &n);
    printf("Kq = %d", factorial(n));

    return 0;
}