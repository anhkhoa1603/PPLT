#include <stdio.h>

void soLonNhat (int a,int b,int c)
{

    if (a > b && a > c)
    {
        printf("a la so lon nhat");
    }
    else if (b > a && b > c)
    {
        printf("b la so lon nhat");
    }
    else 
    {
        printf("c la so lon nhat");
    }
}
int main()
{
    int a, b, c;

    printf("nhap 3 so a b c:\n");
    scanf("%d%d%d",&a,&b,&c);

    soLonNhat(a,b,c);

    return 0;
}