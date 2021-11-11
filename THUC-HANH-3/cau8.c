#include <stdio.h>

int countNum(int n)
{
    int count = 1;
    while (n > 10)
    {
        n = n / 10;
        count++;
    }

    return count;
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
    
    printf("So cac chu so cua n = %d", countNum(n));

    return 0;
}