#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n <= 0) printf("Khong hop le, moi nhap lai!\n");
    } while (n <= 0);

    if (n % 1 != 0 || n % n != 0)
    {
        printf("Day khong phai so nguyen to!");
    }
    else
    {
        printf("Day la so nguyen to!");
    }
    
    return 0;
}