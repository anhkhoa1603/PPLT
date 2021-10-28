#include <stdio.h>

int main()
{
    int a, b, c;
    do
    {
        printf("Nhap 3 goc cua tam giac: ");
        scanf("%d%d%d", &a, &b, &c);

        while ((a + b + c != 180) || (0 < a < 180) || (0 < b < 180) || (0 < c < 180))
        {
            printf("Moi nhap lai: ");
            scanf("%d%d%d", &a, &b, &c);
        }

        if (a + b + c == 180)
        {
            printf("La 1 tam giac hop le");
        }
        else
        {
            printf("Khong phai 1 tam giac, moi nhap lai");
        }
    } while (a + b + c != 180);

    return 0;
}