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
    int a[1000], n, p;
    nhapMang(a, &n);
    printf("Vi tri muon xoa (p < %d)", n);
    scanf("%d", &p);
    
    xuatMang(a, n);
    printf("\n\n");
    xoa(a, &n, p);
    xuatMang(a, n);

    return 0;
}