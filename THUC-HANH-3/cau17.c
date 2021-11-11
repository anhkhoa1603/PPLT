#include <stdio.h>

int perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
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

    printf("Cac so hoan thien nam trong khoang tu 1 den %d la: \n", n);
    for (int i = 1; i <= n; i++)
    {
        if(perfect(i))
            printf(" %d", i);
    }
    
    return 0;
}