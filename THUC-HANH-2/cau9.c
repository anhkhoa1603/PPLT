#include <stdio.h>

int main()
{
    int n;
    printf("Moi nhap so N > 10 : ");
    scanf("%d", &n);

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
    printf("So sau khi doi 2 vi tri: %d", m);

    return 0;
}