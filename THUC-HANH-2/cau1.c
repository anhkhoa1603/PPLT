#include <stdio.h>

int main()
{
    int n, sum, i = 2;
    
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n <= 0);
    /*
    while (i <= n)
    {
        sum = sum + i;
        i += 2;
    }
    */
    
    for (i = 2 ; i <= n ; i += 2)
    {
        sum = sum + i;
    }
    
    
    printf("Ket qua = %d", sum);

    return 0;
}