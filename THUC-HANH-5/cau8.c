#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Nhap so tien muon doi: ");
        scanf("%d", &n);
        if (n % 10000 != 0)
        {
            printf("So tien phai chia het cho 10000. Moi nhap lai: ");
            scanf("%d", &n);
        }
    } while (n % 10000 != 0);

    int t500, t100, t50, t20, t10;

    do
    {
        if (n >= 500000)
        {
            t500 = n / 500000;
            n %= 500000;
        }
        else if (n >= 100000)
        {
            t100 = n / 100000;
            n %= 100000;
        }
        else if (n >= 50000)
        {
            t50 = n / 50000;
            n %= 50000;
        }
        else if (n >= 20000)
        {
            t20 = n / 20000;
            n %= 20000;
        }
        else
        {
            t10 = n / 10000;
            n %= 10000;
        }
    } while (n > 0);

    printf("Doi: %d to 500000, %d to 100000, %d to 50000, %d to 20000, %d to 10000", t500, t100, t50, t20, t10);

    return 0;
}