#include <stdio.h>

int sumAll(int n)
{
    int i = 1, sum = 0;
    while (i <= n)
    {
        sum += i;
        i += 1;
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
    
    printf("Tong cac chu so tu 1 - n = %d", sumAll(n));

    return 0;
}