#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(int);

    int x;
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    int y;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            y = i;
            break;
        }
    }
    
    printf("Vi tri cua so %d ban dang tim la a[%d]", x, y);

    return 0;
}