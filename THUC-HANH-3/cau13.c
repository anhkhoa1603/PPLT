#include <stdio.h>
#include <math.h>

int count(int n)
{
    int dem = 0;
    while (n > 0)
    {
        n /= 10;
        ++dem;
    }
    return dem;
}

int amstrong(int n)
{
    int num = count(n);
    int val1 = n, val2 = 0, x;

    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        val2 += pow(x, num);
    }

    if(val1 == val2)
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

    if (amstrong(n) == 1)
        printf("Day la so tu man!!");
    else
        printf("Day khong phai la so tu man!!");
    
    return 0;
}