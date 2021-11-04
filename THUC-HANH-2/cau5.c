#include <stdio.h>

int main()
{
    int n;
    printf("Moi nhap so N > 10 : ");
    scanf("%d", &n);

    int x = n % 10;
    while (n > 10)
    {
        n = n / 10;
    }
    
    printf("So dau va so cuoi cua N lan luot la %d va %d", n, x);
    
}