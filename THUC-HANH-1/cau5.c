#include <stdio.h>

int main()
{
    int C;
    double F;
    printf("Nhap do C: ");
    scanf("%d", &C);
    F = C * 33.80;
    printf(" %d do C = %.2f do F", C, F);

    return 0;
}