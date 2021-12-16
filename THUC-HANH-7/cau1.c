#include <stdio.h>
#include <math.h>

int is_prime_recursive(int n, int i)
{
    if(n < 2)
        return 0;

    if(i > sqrt(n))
        return 1;

    if(n % i == 0)
        return 0;

    return is_prime_recursive(n, i + 1);
}

int is_prime(int n)
{
    return is_prime_recursive(n, 2);
}

int main()
{
    for(int i = 1; i <= 50; i++)
    {
        if(is_prime(i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}