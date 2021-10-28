#include <stdio.h>

int main()
{
    float Toan, Li, Hoa, Sinh, Tin, Tong;
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

    Tong = Toan + Li + Hoa + Sinh + Tin;

    if (Tong > 45)
    {
        printf("Phan loai: Lop A");
    }
    else if (Tong > 40)
    {
        printf("Phan loai: Lop B");
    }
    else if (Tong > 35)
    {
        printf("Phan loai: Lop C");
    }
    else if (Tong > 30)
    {
        printf("Phan loai: Lop D");
    }
    else if (Tong > 20)
    {
        printf("Phan loai: Lop E");
    }
    else
    {
        printf("Phan loai: Lop F");
    }
    
    return 0;
}