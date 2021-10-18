#include "stdio.h"

void ham(char letter)
{
   int a;

   printf("nhap %c:", letter);
   scanf("%d",&a);

   printf("%c = %d\n",letter,a);
   printf("%c^2 = %d\n",letter,a*a);
   printf("%c^3 = %d\n",letter,a*a*a);
}

float trung_binh_cong(float a,float b,float c)
{
    float sum = a+b+c;
    float avg = sum/3.0;

    a = a*100;
    printf("a inside funcsion: %f\n",a);

    return avg;
}

int main()
{
    float x = 5.5;
    float y = 7.0;
    float z = 9.0;

    printf("Diem TB = %.2f", trung_binh_cong(x,y,z));

    printf("\nX = %.2f",x);

    return 0;
}