#include <stdio.h>
#include <string.h>

int findString(char s1[], char s2[])
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
    char s1[] = "thay Manh rat chi la dep trai";
    printf("Chuoi: %s\n", s1);

    char s2[100];
    fgets(s2, 100, stdin);
    s2[strlen(s2) - 1] = 0;
    int kq = findString(s1, s2);

    if(kq == -1)
        printf("Khong tim thay!");
    else
        printf("Vi tri xuat hien: %d", kq);

    return 0;
}