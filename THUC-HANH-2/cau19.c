#include <stdio.h>

int main()
{
    int n;
    printf("Nhap N: ");
    scanf("%d", &n);

    int tich = 1;
    for (int i = 2; i <= n; i++)
    {
        tich = tich * i;
    }
    
    printf("%d! = %d", n, tich);

    return 0;
}