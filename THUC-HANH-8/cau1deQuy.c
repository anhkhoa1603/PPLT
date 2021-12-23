#include <stdio.h>

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int searchRecursion(int a[], int n, int i, int key)
{
    if (n <= i) return -1;
    if (a[i] == key) return i;
    return searchRecursion(a, n, ++i, key);
}

int search(int a[], int n, int key)
{
    return searchRecursion(a, n, 0, key);
}

int main()
{
    int a[] = {12, 24, 41, 65, 78, 93, 60, 15, 42, 65, 78, 81, 90, 100, 115};
    int n = sizeof(a) / sizeof(int);

    int key = 78;

    printArray(a, n);
    printf("\n\n");

    int index = search(a, n, key);

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