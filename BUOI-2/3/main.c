#include <stdio.h>

int main()
{
    int year;
    
    printf("Nhap nam:\n");
    scanf("%d",&year);

    switch (year)
    {
    case 1:
        printf("sinh vien nam nhat!");
        break;
    case 2:
        printf("sinh vien nam hai!");
        break;
    case 3:
        printf("sinh vien nam ba!");
        break;
    case 4:
        printf("sinh vien nam tu!");
        break;
    default:
        printf("Tham so khong hop le!");
        break;
    }
}