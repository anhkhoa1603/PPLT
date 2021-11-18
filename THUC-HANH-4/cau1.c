#include <stdio.h>

int factorial(int n)
{
    int S = 1;
    for (int i = 2; i <= n; i++)
    {
        S *= i;
    }

    return S;
}

float cau_a(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (i / 2.0);
    }

    return sum;
}

int cau_b(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (2 * i + 1);
    }
    
    return sum;
}

int cau_c(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (factorial(i) + 1);
    }
    
    return sum;
}

int cau_d(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum *= factorial(i);
    }
    
    return sum;
}

float cau_e(int n)
{
    float sum = 1, m;
    for (int i = 1; i <= n; i++)
    {
        m = (2.0 * i) / 3;
        sum *= m;
    }
    
    return sum;
}

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cau a ket qua la: %.2f\n", cau_a(n));
    printf("Cau b ket qua la: %d\n", cau_b(n));
    printf("Cau c ket qua la: %d\n", cau_c(n));
    printf("Cau d ket qua la: %d\n", cau_d(n));
    printf("Cau e ket qua la: %.2f\n", cau_e(n));

    return 0;
}