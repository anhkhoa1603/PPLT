#include <stdio.h>

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n * factorial(n -1);
}


int tichDQ(int n, int i)
{
    if(i > n)
    {
        return 1;
    }

    return factorial(i) * tichDQ(n, i + 1);
}

int tich(int n)
{
    return tichDQ(n, 1);
}

int main()
{
    int kq = tich(4);
    printf("Kq = %d", kq);

    return 0;
}