#include <stdio.h>

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int binarySearch(int a[], int n, int key)
{
    int l = 0;
    int r = n - 1;

    while(l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == key) return m;
        if (key > a[m]) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

int main()
{
    int a[] = {1, 2, 4, 6, 7, 9, 10, 15, 42, 65, 78, 81, 90, 100, 115};
    int n = sizeof(a) / sizeof(int);

    printArray(a, n);
    printf("\n\n");

    int i = binarySearch(a, n, 10);

    printf("Resutl: %d", i);

    return 0;
}