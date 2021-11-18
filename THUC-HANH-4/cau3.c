#include <stdio.h>

int timMin(int a[], int n)
{
    int  min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    return min;
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

    int min = timMin(a, n);
    printf("Max = %d", min);

    return 0;
    
}