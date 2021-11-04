#include <stdio.h>

int main()
{
    int n;
    printf("Moi nhap so N > 10 : ");
    scanf("%d", &n);

    int count = 1;

    while (n > 10)
    {
        n = n / 10;
        count++;
    }
    
    printf("So chu so = %d", count);
    
    return 0;
}