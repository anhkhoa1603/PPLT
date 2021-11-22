#include <stdio.h>

void inMang(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int a[] = {8, 4, 5, 3, 6, 1, 8};
    int b[] = {5, 2, 7, 6, 4, 9, 7};
    int n = sizeof(a)/sizeof(int);
    int m = sizeof(b)/sizeof(int);

    int count = 0, c[n + m];

    for (int i = 0; i < n; i++)
    {
        c[count] = a[i];
        count++;
    }

    for (int i = 0; i < m; i++)
    {
        c[count] = b[i];
        count++;
    }
    
    printf("Mang a: ");
    inMang(a, n);

    printf("Mang b: ");
    inMang(b, m);

    printf("Mang c sau khi hop nhat 2 mang o tren: ");
    inMang(c, n + m);

    return 0;
}