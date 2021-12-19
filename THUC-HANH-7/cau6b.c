#include <stdio.h>

float tongDQ(int n, int i)
{
    if(i > n)
    {
        return 0;
    }

    return (i / 2.0) + tongDQ(n, i + 1);
}

float tong(int n)
{
    return tongDQ(n, 1);
}

int main()
{
    float kq = tong(10);
    printf("Kq = %.2f", kq);

    return 0;
}