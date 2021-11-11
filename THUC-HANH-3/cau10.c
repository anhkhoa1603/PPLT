#include <stdio.h>

int reverse(int n)
{
    int cong = 0, x;

    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        cong = cong * 10 + x;
    }

    return cong;
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
    
    printf("N sau khi lat nguoc lai: %d", reverse(n));

    return 0;
}