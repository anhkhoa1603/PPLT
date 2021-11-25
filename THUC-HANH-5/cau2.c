#include <stdio.h>

int main()
{
    float d;
    do
    {
        printf("Quang duong di duoc: ");
        scanf("%f", &d);
        if (d<= 0)
        {
            printf("Du lieu khong hop le, moi nhap lai: ");
            scanf("%f", &d);
        }
        
    }while(d <= 0);

    float pay = 0;

    if (d <= 1)
    {
        pay = d * 18000;
    }
    else if (d > 1 && d <= 10)
    {
        pay = 18000 + (d - 1) * 8000;
    }
    else if (d > 10 && d <= 30)
    {
        pay = 18000 + 9 * 8000 + (d - 10) * 6000;
    }
    else if (d > 30)
    {
        pay = 18000 + 9 * 8000 + 20 * 6000 + (d - 30) * 4000;
    }

    printf("So tien ma khach phai tra: %.0fk", pay);
    
    return 0;
}