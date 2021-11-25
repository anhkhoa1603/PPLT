#include <stdio.h>

int main()
{
    float d;
    printf("Quang duong di duoc: ");
    scanf("%f", &d);

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