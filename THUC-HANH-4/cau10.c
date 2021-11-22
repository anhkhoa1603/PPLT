#include <stdio.h>

void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

void xoa(int a[], int *n, int p)
{
    for (int i = p + 1; i < *n; i++)
    {
        a[i-1] = a[i];
    }
    *n = *n - 1;
}

int main()
{
    const int max = 1e4;
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Mang truoc khi thay doi: ");
    xuatMang(a, n);

    int count[max];
    for (int i = 0; i < max; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 0; i <= n; i++)
    {
        count[a[i]]++;
        if (count[a[i]] > 1)
        {
            xoa(a, &n, i);
        }
    }

    printf("\nMang sau khi thay doi: ");
    xuatMang(a, n);

    return 0;
}