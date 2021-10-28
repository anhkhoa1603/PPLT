#include <stdio.h>

int main()
{
    int a, b;
    printf("Nhap 2 so a va b: ");
    scanf("%d%d", &a, &b);

    if (a > b)
    {
        printf("Max = %d",a);
    }
    else
    {
        printf("Max = %d",b);
    }
    
    return 0;
}