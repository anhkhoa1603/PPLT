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
    printf("Nhap N: ");
    scanf("%d", &n);

    if (perfect(n) == true)
        printf("Day la so hoan thien!!");
    else
        printf("Day khong phai so hoan thien!!");
}