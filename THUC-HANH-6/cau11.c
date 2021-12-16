#include <stdio.h>
#include <string.h>

void xoaChuoi(char s1[], char s2[], int position)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int i;
    if(position < 0 || position >= n1)
    {
        return;
    }

    for(i = position; i < n1 - n2; i++)
    {
        s1[i] = s1[i + n2 + 1];
    }
}

int main()
{
    char s1[100] = "Phuong phap lap trinh";
    printf("Before: %s\n", s1);
    xoaChuoi(s1, "phap", 7);

    printf("After: %s", s1);

    return 0;
}