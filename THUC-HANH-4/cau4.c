#include <stdio.h>

int tong(int a[], int n)
{
    int  sum = a[0];
    for (int i = 1; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
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

    int sum = tong(a, n);
    printf("Max = %d", sum);

    return 0;
    
}