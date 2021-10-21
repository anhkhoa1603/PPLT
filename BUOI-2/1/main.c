#include <stdio.h>

int main()
{
    int n;

    printf("nhap so tuoi: \n");
    scanf("%d",&n);

    if (n,18)
    {
        printf("So vua nhap khong hop le\nVui long nhap lai\n");
        scanf("%d",&n);
    }

    printf("So vua nhap khong hop le\nVui long nhap lai\n");
    scanf("%d",&n);

    if (n>=18)
    {
        printf("Chuc mung ban da du tuoi!!!\n");
    }
    else if (0<n)
    {
        printf("Ban chua du tuoi de truy cap!\n");
    }
    else
    {
        printf("So vua nhap khong hop le!\n");
    }


    return 0;
}