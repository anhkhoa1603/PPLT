#include <stdio.h>

int muDeQuy(int x, int n)
{
    if(n == 1)
        return x;
    return x * muDeQuy(x, n - 1);
}

int mu(int n)
{
    return muDeQuy(2, n);
}

int main()
{
    printf("Nhap mu n: ");
    int n;
    scanf("%d", &n);
    int kq = mu(n);
    printf("Kq = %d", kq);

    return 0;
}