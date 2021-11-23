#include <stdio.h>

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

void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(&a[j], &a[j + 1]);
            }
        }
    }
}

int main()
{
    int n, a[100];
    nhapMang(a, &n);

    printf("Truoc khi sap xep:\n");
    xuatMang(a, n);
    printf("\n\n");
    sort(a, n);
    printf("Sau khi sap xep:\n");
    xuatMang(a, n);

    return 0;
}