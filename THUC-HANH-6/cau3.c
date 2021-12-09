#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];

    printf("Nhap ten: ");
    gets(name);

    printf("%s\n", name);

    printf("\nHo: ");

    int i = 0;
    int n = strlen(name);
    while(name[i] != ' ' && i < n)
    {
        printf("%c", name[i++]);
    }

    if(i == n)
    {
        printf("\nTen = Ho");
        return 0;
    }

    i = n - 1;
    while(name[i] != ' ')
    {
        i--;
    }

    printf("\nTen: ");
    for(int j = i + 1; j < n; j++)
    {
        printf("%c", name[j]);
    }

    return 0;
}