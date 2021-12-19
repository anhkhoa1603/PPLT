#include <stdio.h>

int factorial(int n)
{
    if(n == 1)
    {
        return 1;
    }

    return n * factorial(n -1);
}


int tongDQ(int n, int i)
{
    if(i > n)
    {
        return 0;
    }

    return factorial(i) + tongDQ(n, i + 1);
}

int tong(int n)
{
    return tongDQ(n, 1);
}

int main()
{
    int kq = tong(5);
    printf("Kq = %d", kq);

    return 0;
}