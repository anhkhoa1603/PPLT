#include <stdio.h>

int main()
{
    int year;
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("Nam %d la nam nhuan!", year);
    }
    else
    {
        printf("Nam %d khong la nam nhuan!", year);
    }

    return 0;
}