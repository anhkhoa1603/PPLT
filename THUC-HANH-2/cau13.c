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
    printf("Moi nhap so N > 0 : ");
    scanf("%d", &n);

    if (amstrong(n) == true)
        printf("Day la so tu man!!");
    else
        printf("Day khong phai la so tu man!!");

}