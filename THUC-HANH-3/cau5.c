#include <stdio.h>

int findFirst(int n)
{
    while (n > 10)
    {
        n /= 10;
    }
    
    return n;
}

int findLast(int n)
{
    n %= 10;
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
    
    printf("Chu so dau va chu so cuoi cua n lan luot la %d va %d", findFirst(n), findLast(n));

    return 0;
}