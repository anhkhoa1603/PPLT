#include <stdio.h>
#include <math.h>

int convert(int n)
{
    int x = 0;
    int cong = 0;

    while (n > 0)
    {
        cong = cong + (n % 2) * pow(10, x);
        ++x;
        n = n / 2;
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

    printf("%d chuyen sang so nhi phan = %d", n, convert(n));
    
    return 0;
}