#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    int x = 0;
    int cong = 0;

    while (n > 0)
    {
        cong = cong + (n % 2) * pow(10, x);
        ++x;
        n = n / 2;
    }

    printf("%d", cong);

    return 0;
}