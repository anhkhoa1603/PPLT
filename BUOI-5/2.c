#include <stdio.h>

int main()
{
    int a[] = {5,2,78,4,-9,6,2};
    int n = sizeof(a)/ sizeof(int);

    for (int i = 0; i < n; i++)
    {
        printf("%d\t%p\n", a[i], &a[i]);
    }

    printf("\nA = %p\n", a);
    printf("\nA = %d\n", *a + 3);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }

    return 0;
}