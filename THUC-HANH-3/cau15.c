#include <stdio.h>
#include <math.h>

int prime(int n)
{
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        return 1;
    else
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

    printf("Cac so nguyen to nam trong khoang tu 1 den %d la: \n", n);
    for (int i = 1; i <= n; i++)
    {
        if(prime(i) == 1)
            printf(" %d", i);
    }
    
    return 0;
}