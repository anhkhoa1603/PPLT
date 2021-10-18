#include <stdio.h>
#include <math.h>

float congThucHeron(float a, float b, float c)
{
    float p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
// Ham check dieu kien de la 1 tam giac
void checkTamGiac(float a, float b, float c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("La 1 tam giac hop le");
    }
    else
    {
        printf("Khong phai 1 tam giac hop le");
    }
}
int main()
{
    printf("nhap 3 canh cua tam giac: ");
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    printf("Dien tich tam giac = %.2f\n", congThucHeron(a, b, c));
    checkTamGiac(a, b, c);
    return 0;
}
