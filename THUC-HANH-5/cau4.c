#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Moi nhap 3 canh cua tam giac:\n");
    printf(" a= ");
    scanf("%d", &a);
    printf(" b= ");
    scanf("%d", &b);
    printf(" c= ");
    scanf("%d", &c);
    while (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Moi nhap lai!!!\n");
        printf(" a= ");
        scanf("%d", &a);
        printf(" b= ");
        scanf("%d", &b);
        printf(" c= ");
        scanf("%d", &c);
    }

    int C = a + b + c;
    float S = (1 / 4.0) * sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b));
    printf("\nChu vi cua tam giac: %d\n", C);
    printf("\nDien tich cua tam giac: %.2f\n", S);

    if (a == b && a == c)
    {
        printf("\nDay la tam giac deu!");
    }
    else if (a == b || a == c || b == c)
    {
        printf("\nDay la tam giac can!");
    }
    else
    {
        printf("\nDay la tam giac thuong!");
    }

    return 0;
}