#include <stdio.h>

int main()
{
    int a[] = {7,8,15,4,3};
    int n = sizeof(a)/sizeof(int);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%p: %d\n", &a[i], a[i]);
    }

    printf("\n\n");

    int *p = a;
    printf("P = %p\n", p);

    for (int i = 0; i < n; i++)
    {
        printf("%p\n", p + i);
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));
    }

    return 0;
}