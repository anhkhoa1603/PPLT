#include <stdio.h>

int main()
{
    int n;
    printf("Moi nhap so N > 0 : ");
    scanf("%d", &n);

    int val1 = n;
    int val2 = 0, x;

    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        val2 = val2 * 10 + x;
    }

    if (val1 == val2)
    {
        printf("Day la so doi xung!!");
    }
    else
    {
        printf("Day khong phai la so doi xung!!");
    }

    return 0;
}