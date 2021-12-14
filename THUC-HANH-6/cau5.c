#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100], s2[100];

    printf("Nhap 2 mang:\n");
    printf("s1: ");
    fgets(s1, 100, stdin);
    s1[strlen(s1) - 1] = 0;

    printf("s2: ");
    fgets(s2, 100, stdin);
    s2[strlen(s2) - 1] = 0;

    int n1 = strlen(s1);
    int n2 = strlen(s2);

    s1[n1] = ' ';
    for(int i = 0; i <= n2; i++)
    {
        s1[n1 + i + 1] = s2[i];
    }
    printf("%s", s1);

    return 0;
}