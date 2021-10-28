#include <stdio.h>

int main()
{
    char a;
    printf("Nhap ki tu: ");
    scanf("%c", &a);

    int dk1 = a >= 'A' && a <= 'Z';
    int dk2 = a >= 'a' && a <= 'z';
    int dk3 = a >= '0' && a <= '9';

    if (dk1 || dk2 || dk3)
    {
        printf("Day la ki tu thuong!!");
    }
    else
    {
        printf("Day la ki tu dac biet!!");
    }
    
    return 0;
}