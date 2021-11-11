#include <stdio.h>

int sumEven(int n)
{
    int i = 2, sum = 0;
    while (i <= n)
    {
        sum += i;
        i += 2;
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

    printf("Tong cac so chan tu 2 - n = %d", sumEven(n));

    return 0;
}