#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("Nhap so a: ");
    scanf("%d", &a);

    if (a > 0)
    {
        printf("Gia tri tuyet doi cua %d = %d", a, a);
    }
    else
    {
        printf("Gia tri tuyet doi cua %d = %d", a, 0 - a);
    }

    return 0;
}