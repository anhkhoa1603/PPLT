#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];

    printf("Nhap chuoi: ");
    gets(name);

    int n = strlen(name);
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        count++;
    }

    printf("Do dai cua chuoi la %d", count);
}