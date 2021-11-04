#include <stdio.h>

int main()
{
    int n;
    printf("Moi nhap so N > 10 : ");
    scanf("%d", &n);

    int x = n % 10;
    int sum = x;

    while (n > 10)
    {
        n = n / 10;
        x = n % 10;
        sum = sum + x;
    }
    
    printf("Tong cac so = %d", sum);
    
    return 0;
}