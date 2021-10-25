#include <stdio.h>

int laySoDauTien(int n)
{
    return n / 1000;
}

int main()
{
    int zipcode = 1284;
    //Chia lấy dư
    switch (laySoDauTien(zipcode))
    {
    case 1:
        printf("Khach nhan tai cua hang");
        break;

    case 2:
        printf("Ship qua buu dien");
        break;

    case 3:
        printf("ship nhanh qua buu dien");
        break;

    default:
        printf("Khong hop le");
        break;
    }

    return 0;
}