#include <stdio.h>

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int search(int a[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int searchLast(int a[], int n, int key)
{
    for(int i = n; i >= 0; i--)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {12, 24, 41, 65, 78, 93, 60, 15, 42, 65, 78, 81, 90, 100, 115};
    int n = sizeof(a) / sizeof(int);

    printArray(a, n);
    printf("\n\n");

    int id1 = search(a, n, 78);
    int id2 = searchLast(a, n, 78);

    printf("First: %d", id1);
    printf("\nLast: %d", id2);

    return 0;
}