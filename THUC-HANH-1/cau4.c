#include <stdio.h>

int main()
{
    int a, day, week, year;

    printf("Nhap so ngay: ");
    scanf("%d", &a);
    int days = a;

    year = a / 365;
    week = (a - (year * 365)) / 7;
    day = a - (year * 365) - (week * 7);

    printf(" %d ngay = %d nam, %d tuan, %d ngay.", days, year, week, day);

    return 0;
}