#include <stdio.h>
#include <string.h>

void noiChuoi(char s1[], char s2[], int position)
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    int i;
    if(position < 0 || position >= n1)
    {
        return;
    }

    for(i = n1 + n2 + 1; i >= position + n2; i--)
    {
        s1[i] = s1[i - n2 - 1];
    }

    for(i = 0; i < n2; i++)
    {
        s1[position + i] = s2[i];
    }
    s1[position + n2] = ' ';
}

int main()
{
    char s1[100] = "Phuong lap trinh";
    printf("Before: %s\n", s1);
    noiChuoi(s1, "phap", 7);

    printf("After: %s", s1);

    return 0;
}