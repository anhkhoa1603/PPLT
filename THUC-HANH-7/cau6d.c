#include <stdio.h>
#include <math.h>

float tongDQ(int n, int i)
{
    if(i > n)
    {
        return 0;
    }

    return (float)sqrt(i) + tongDQ(n, i + 1);
}

float tong(int n)
{
    return tongDQ(n, 1);
}

int main()
{
    float kq = tong(5);
    printf("Kq = %.2f", kq);

    return 0;
}