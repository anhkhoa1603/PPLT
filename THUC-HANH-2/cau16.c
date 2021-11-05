#include <stdio.h>
#include <stdbool.h>
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

bool amstrong(int n)
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
        return true;
    else
        return false;
}

int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n <= 0) printf("Khong hop le, moi nhap lai!\n");
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        if(amstrong(i))
            printf(" %d", i);
    }
    
    return 0;
}