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
    for(int i = 0; i < n - 1; i++)
    {
        int min = a[i];
        int id = i;
        for(int j = i; j < n; j++)
        {
            if(a[j] < min)
            {
                min = a[j];
                id = j;
            }
        }

        int tmp = a[i];
        a[i] = a[id];
        a[id] = tmp;
    }  
}

int main()
{
    int a[] = {42, 24, 35, 6, 18, 49, 50, 15, 42, 65, 27, 11, 90, 10, 25};
    int n = sizeof(a) / sizeof(int);

    sort(a, n);
    printArray(a, n);
    printf("\n\n");

    return 0;
}