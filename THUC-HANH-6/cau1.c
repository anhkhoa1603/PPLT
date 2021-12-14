#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];

    printf("Nhap chuoi: ");
    gets(name);

    int count = 0;
    int i = 0;
    while(name[i] != '\0')
    {
        count++;
        i++;
    }

    printf("Do dai cua chuoi la %d", count);
}