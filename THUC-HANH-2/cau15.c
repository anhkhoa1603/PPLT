#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool prime(int n)
{
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 0)
        return true;
    else
        return false;
}

int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n <= 0) printf("Khong hop le, moi nhap lai!\n");
    } while (n <= 0);

    for (int i = 1; i <= n; i++)
    {
        if(prime(i))
            printf(" %d", i);
    }
    
    return 0;
}