#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap a va b: \n");
    scanf("%d%d", &a, &b);

    printf(" a addition b = %d\n", (a + b));
    printf(" a subtraction b = %d\n", (a - b));
    printf(" a multiplication b = %d\n", (a * b));
    printf(" a divisionr b = %.2f\n", ((float)a / b));
    printf(" a remainder b = %d\n", (a % b));

    return 0;
}