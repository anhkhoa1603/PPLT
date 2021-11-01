#include <stdio.h>

void nhapMang(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
}

void inMang(int arr[100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}

int tongChan(int arr[100], int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            S = S + arr[i];
        }
        
    }

    return S;
}

int main()
{
    int n, arr[100];
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    nhapMang(arr, n);

    inMang(arr, n);

    printf("\nTong cac so chan la %d", tongChan(arr[100], n));

    return 0;
}