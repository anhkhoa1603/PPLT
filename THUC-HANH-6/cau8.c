#include <stdio.h>
#include <string.h>

int findWord(char s1[], char s2[])
{
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    for(int i = 0; i < n1 - n2 + 1; i++)
    {
        if(s1[i] == s2[0])
        {
            int j = 1;
            while(s1[i + j]  = s2[j] && j < n2)
            {
                j++;
            }
            if(j == n2)
            {
                return i;
            }
        }
    }

    return -1;
}

int main()
{
    char s1[] = "thay Manh dep trai";
    char s2[] = "Manh";
    printf("s1 = %s\n", s1);
    int kq = findWord(s1, s2);
    printf("%d", kq);

    return 0;
}