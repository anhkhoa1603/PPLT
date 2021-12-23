#include <stdio.h>

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int binarySearchRecursion(int a[], int l, int r, int key) 
{
    if (r >= l) 
    {
        int m = (r + l) / 2;

        if (a[m] == key)
            return m;
 
        if (a[m] > key)
            return binarySearchRecursion(a, l, m - 1, key);
 
        return binarySearchRecursion(a, m + 1, r, key);
    }
 
    return -1;
}

int binarySearch(int a[], int r, int key)
{
    return binarySearchRecursion(a, 0, r, key);
}

int main()
{
    int a[] = {1, 2, 4, 6, 7, 9, 10, 15, 42, 65, 78, 81, 90, 100, 115};
    int n = sizeof(a) / sizeof(int);

    printArray(a, n);
    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        int result = binarySearch(a, n - 1, a[i]);
        
        if(result != -1)
        {
            printf("\n%d nam tai vi tri so %d", a[i], result);
        }
        else
        {
            printf("\n%d khong co trong mang!", a[i]);
        }
    }

    int x = binarySearch(a, n - 1, 999);
    printf("%d", x);

    return 0;
}