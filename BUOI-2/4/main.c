#include <stdio.h>

int timSoNgay(int thang, int nam)
{
    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

        return 31;

    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    
    case 2:

    if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
    {
        return 29;
    }
    else return 28;
    
    default:
        return 0;
    }
}
int main()
{
    printf("%d",timSoNgay(2,2020));
}
