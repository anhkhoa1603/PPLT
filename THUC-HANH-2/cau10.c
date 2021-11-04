#include <stdio.h>

int main()
{
    int n;
    printf("Moi nhap so N > 10 : ");
    scanf("%d", &n);

    int cong = 0, x;

    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        cong = cong * 10 + x;
    }

    printf("So sau khi doi vi tri: %d", cong);
}