#include <stdio.h>
#include <stdbool.h>

bool perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
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
        if(perfect(i))
            printf(" %d", i);
    }
    
    return 0;
}