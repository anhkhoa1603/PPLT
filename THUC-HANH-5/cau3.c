#include <stdio.h>
#include <math.h>

int main()
{
    float x0, y0, x1, y1, R;

    printf("Nhap toa do tam duong tron: \n");
    printf("x: ");
    scanf("%f", &x0);
    printf("y: ");
    scanf("%f", &y0);

    printf("Nhap ban kinh R: ");
    scanf("%f", &R);

    printf("Nhap toa do diem A: \n");
    printf("x: ");
    scanf("%f", &x1);
    printf("y: ");
    scanf("%f", &y1);

    float space;
    space = sqrt(((x1 - x0) * (x1 - x0)) + ((y1 - y0) * (y1 - y0)));

    if (space < R)
        printf("A nam trong");
    else if (space == R)
        printf("A nam tren");
    else
        printf("A nam ngoai");

    return 0;
}