#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n <= 0) printf("Khong hop le, moi nhap lai!\n");
    } while (n <= 0);

    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        printf("Day la so nguyen to!!");
    else
        printf("Day khong phai so nguyen to!!");

    return 0;
}