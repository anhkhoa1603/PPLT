#include <stdio.h>

void rev_aray(int a[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
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

void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int a[1000], n;
    
    nhapMang(a, &n);
    xuatMang(a, n);
    printf("\n\n");
    rev_aray(a, n);
    xuatMang(a, n);

    return 0;
}