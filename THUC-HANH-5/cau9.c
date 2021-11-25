#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Nhap ma khach hang: ");
        scanf("%d", &n);
        if (n < 10000 || n > 99999)
        {
            printf("Ma loi. Vui long nhap lai: ");
            scanf("%d", &n);
        } 
    } while (n < 10000 || n > 99999);

    n %= 10000;
    n /= 1000;

    switch (n)
    {
    case 0:
    case 1:
    case 2:
        printf("\nHang: Dong");
        break;
    case 3:
    case 4:
    case 5:
        printf("\nHang: Bac");
        break;
    case 6:
    case 7:
        printf("\nHang: Vang");
        break;
    case 8:
    case 9:
        printf("\nHang: Bach Kim");
        break;
    default:
        break;
    }
    printf("\n\n");

    return 0;
}