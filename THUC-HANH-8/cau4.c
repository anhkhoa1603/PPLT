#include <stdio.h>

void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void sort(int a[], int n)
{
    for(int i = n - 1; i >= 1; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }  
}

int main()
{
    int a[] = {41, 24, 35, 42, 65, 27, 11, 90, 10, 25, 6, 18, 49, 50, 15};
    int n = sizeof(a) / sizeof(int);

    sort(a, n);
    printArray(a, n);
    printf("\n\n");

    return 0;
}