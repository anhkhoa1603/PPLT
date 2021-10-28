#include <stdio.h>

int main()
{
    int a, b, S, C;
    printf("Nhap 2 canh cua HCN: ");
    scanf("%d%d", &a, &b);

    C = (a + b) * 2;
    S = a * b;
    printf("Chu vi = %d\n", C);
    printf("Dien tich = %d\n", S);

    return 0;
}