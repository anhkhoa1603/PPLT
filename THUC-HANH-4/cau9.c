#include <stdio.h>

int main()
{
    const int max = 1000;
    int n, dem = 0;

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
    {
        if (count[i] > 1)
            dem++;
    }

    printf("So cac so trung nhau la %d", dem);

    return 0;
}