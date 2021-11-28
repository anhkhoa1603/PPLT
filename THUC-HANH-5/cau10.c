#include <stdio.h>

int main()
{
    int n, x, m, du;
    
    printf("Nhap so tien: ");
    scanf("%d", &n);
    if (n < 5000)
    {
        printf("Ban khong du tien de mua!!!");
        return 0;
    }

    printf("\n1. Tra xanh C2");
    printf("\n2. Sting");
    printf("\n3. Pepsi");
    printf("\n4. Warrior");
    printf("\n5. Nuoc suoi");
    printf("\nChon: ");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        if (n >= 9000)
        {
            printf("\nNhap so luong can mua: ");
            scanf("%d", &m);
            if (m * 9000 <= n)
            {
                du = n % (m * 9000);
                n /= (m * 9000);
                printf("\nTra xanh C2 - %d chai - Tien du: %d", m, du);
            }
            else
            {
                printf("Loi!");
                return 0;
            }
        }
        else
        {
            printf("Loi!!");
            return 0;
        }        
        break;
    case 2:
        if (n >= 11000)
        {
            printf("\nNhap so luong can mua: ");
            scanf("%d", &m);
            if (m * 11000 <= n)
            {
                du = n % (m * 11000);
                n /= (m * 11000);
                printf("\nSting - %d chai - Tien du: %d", m, du);
            }
            else
            {
                printf("Loi!");
                return 0;
            }
        }
        else
        {
            printf("Loi!!");
            return 0;
        }
        break;
    case 3:
        if (n >= 10000)
        {
            printf("\nNhap so luong can mua: ");
            scanf("%d", &m);
            if (m * 10000 <= n)
            {
                du = n % (m * 10000);
                n /= (m * 10000);
                printf("\nPepsi - %d chai - Tien du: %d", m, du);
            }
            else
            {
                printf("Loi!");
                return 0;
            }
        }
        else
        {
            printf("Loi!!");
            return 0;
        }
        break;
    case 4:
        if (n >= 13000)
        {
            printf("\nNhap so luong can mua: ");
            scanf("%d", &m);
            if (m * 13000 <= n)
            {
                du = n % (m * 13000);
                n /= (m * 13000);
                printf("\nWarrior - %d chai - Tien du: %d", m, du);
            }
            else
            {
                printf("Loi!");
                return 0;
            }
        }
        else
        {
            printf("Loi!!");
            return 0;
        }
        break;
    case 5:
        if (n >= 5000)
        {
            printf("\nNhap so luong can mua: ");
            scanf("%d", &m);
            if (m * 5000 <= n)
            {
                du = n - (m * 5000);
                n /= (m * 5000);
                printf("\nNuoc suoi - %d chai - Tien du: %d", m, du);
            }
            else
            {
                printf("Loi!");
                return 0;
            }
        }
        else
        {
            printf("Loi!!");
            return 0;
        }
        break; 
    }

    return 0;
}