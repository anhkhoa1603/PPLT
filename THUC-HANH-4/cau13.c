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
    int a[] = {15, 4, 5, 8, 16, 23, 79, 46, 82, 19};
    int n = sizeof(a) / sizeof(int);
    int odd[10], even[10];
    int cO = 0, cE = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[cE] = a[i];
            cE++;
        }
        else
        {
            odd[cO] = a[i];
            cO++;
        }
    }
    
    printf("Mang truoc khi tach: ");
    inMang(a, n);

    printf("Mang chan: ");
    inMang(even, cE);

    printf("Mang le: ");
    inMang(odd, cO);

    return 0;
}