#include <stdio.h>

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

    int count[max];
    for (int i = 0; i < max; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    
    for (int i = 0; i < max; i++)
        if (count[i] > 0)
            printf("Gia tri %d xuat hien %d lan\n", i, count[i]);
    
    return 0;
}