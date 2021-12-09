#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    printf("Nhap chuoi: ");
    gets(name);

    int n = strlen(name);
    printf("%d", n);
    char rename[100];
    for(int i = 0; i < n; i++)
    {
        rename[0] = name[n - i - 1];
    }

    printf("%s", rename);
}