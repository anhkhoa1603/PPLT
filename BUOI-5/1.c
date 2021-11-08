#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    printf("A = %d, b = %d\n", a, b);
    printf("&A = %p, &B = %p\n", &a, &b);

    int* p1 = &a;
    int* p2 = &b;

    *p1 = *p2;
    *p2 *= 2;

    b = b * 2;

    printf("%d", a);

    return 0;
}