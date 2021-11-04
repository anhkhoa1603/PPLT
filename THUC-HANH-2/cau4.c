#include <stdio.h>

int main()
{
    int n, sum, i = 1;
    
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n <= 0) printf("Khong hop le, moi nhap lai!\n");
    } while (n <= 0);
    /*
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    */
    
    for (i = 1 ; i <= n ; i++)
    {
        sum = sum + i;
    }
    
    
    printf("Ket qua = %d", sum);

    return 0;
}