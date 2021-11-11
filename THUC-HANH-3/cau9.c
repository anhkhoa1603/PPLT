#include <stdio.h>

int swap(int n)
{
    int x = n % 10;
    n = n / 10;
    int dem = 1, cong = 0, y;

    while (n > 10)
    {
        y = n % 10;
        n = n / 10;
        dem = dem * 10;
        cong = cong + y * dem;
    }
    
    int m = (x * dem * 10) + cong + n;
    
    return m;
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
    
    printf("N sau khi dao so dau va so cuoi la: %d", swap(n));

    return 0;
}