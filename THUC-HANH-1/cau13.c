#include <stdio.h>

int main()
{
    float Toan, Li, Hoa, Sinh, Tin, Tb;
    printf("Vui long nhap diem cua tung mon\n");
    printf("Toan: ");
    scanf("%f", &Toan);
    printf("Li: ");
    scanf("%f", &Li);
    printf("Hoa: ");
    scanf("%f", &Hoa);
    printf("Sinh: ");
    scanf("%f", &Sinh);
    printf("Tin: ");
    scanf("%f", &Tin);

    Tb = (Toan + Li + Hoa + Sinh + Tin) / 5.0;

    if (Tb > 9)
    {
        printf("Phan loai: Lop A");
    }
    else if (Tb > 8)
    {
        printf("Phan loai: Lop B");
    }
    else if (Tb > 7)
    {
        printf("Phan loai: Lop C");
    }
    else if (Tb > 6)
    {
        printf("Phan loai: Lop D");
    }
    else if (Tb > 4)
    {
        printf("Phan loai: Lop E");
    }
    else
    {
        printf("Phan loai: Lop F");
    }
    
    return 0;
}