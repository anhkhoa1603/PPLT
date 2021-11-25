#include <stdio.h>

int main()
{
    int m, h;
    printf("Nhap so gio lam: ");
    scanf("%d", &h);
    printf("Tien moi gio lam (nghin): ");
    scanf("%d", &m);

    float salary = 0;

    if (h <= 40)
    {
        salary = h * m;
    }
    else if (h > 40 && h <= 45)
    {
        salary = 40 * m + (h - 40) * m * 1.8;
    }
    else if (h > 45 && h <= 50)
    {
        salary = 40 * m + 5 * m * 1.8 + (h - 45) * m * 2.5;
    }
    else if (h > 50)
    {
        salary = 40 * m + 5 * m * 1.8 + 5 * m * 2.5 + (h - 50) * m * 2.6;
    }

    printf("So tien nhan vien thu nhan duoc trong 1 tuan: %.0fk", salary);
    
    return 0;
}