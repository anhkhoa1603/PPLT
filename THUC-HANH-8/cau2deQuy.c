#include <stdio.h>

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int binarySearchRecursion(int a[], int n, int key, int l, int r)
{
    int m = (l + r) / 2;
    if(l <= r)
    {
        if (a[m] == key) return m;
        if(key > a[m]) return binarySearchRecursion(a, n, key, m + 1, r);
        else return binarySearchRecursion(a, n, key, l, m - 1);
    }
    return -1;
}

int binarySearch(int a[], int n, int key)
{
    return binarySearchRecursion(a, n, key, 0, n - 1);
}

int main()
{
    int a[] = {1, 2, 4, 6, 7, 9, 10, 15, 42, 65, 78, 81, 90, 100, 115};
    int n = sizeof(a) / sizeof(int);

    int key = 15;

    printArray(a, n);
    printf("\n\n");

    int index = binarySearch(a, n, key);

    if(index == -1)
    {
        printf("Khong co!");
    }
    else
    {
        printf("Co tai vi tri %d", index);
    }

    return 0;
}