#include <stdio.h>

int palindrome(int n)
{
    int val1 = n;
    int val2 = 0, x;

    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        val2 = val2 * 10 + x;
    }

    if (val1 == val2)
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
    
    if (palindrome(n) == 1)
    {
        printf("Day la so doi xung!!");
    }
    else
    {
        printf("Day khong phai la so doi xung!!");
    }
    
    return 0;
}