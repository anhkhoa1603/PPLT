#include <stdio.h>

int tongDQ(int n, int i)
{
    if(i > n)
    {
        return 0;
    }

    return (2 * i + 1) + tongDQ(n, i + 1);
}

int tong(int n)
{
    return tongDQ(n, 1);
}

int main()
{
    int kq = tong(10);
    printf("Kq = %d", kq);

    return 0;
}