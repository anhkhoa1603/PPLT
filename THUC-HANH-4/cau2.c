#include <stdio.h>

int findMax(int a[], int n)
{
    int  max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    return max;
}

void nhapMang(int a[], int *n)
{
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);

    for (int i = 0; i < *n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

int main()
{
    int a[1000], n;
    
    nhapMang(a, &n);

    int max = findMax(a, n);
    printf("Max = %d", max);

    return 0;
    
}