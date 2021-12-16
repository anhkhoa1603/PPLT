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
    printf("Chuoi: %s\n", s1);

    char s2[100];
    printf("\nNhap tu can tim (khong co dau cach): ");
    int count;
    do
    {
        count = 0;
        fgets(s2, 100, stdin);
        for(int i = 0; i < strlen(s2); i++)
        {
            if(s2[i] == ' ')
            {
                count++;
            }
        }
        if(count != 0)
        {
            printf("Nhap sai, yeu cau nhap lai tu khoa khong co dau cach!\n");
            printf("\nNhap tu can tim (khong co dau cach): ");
        }
    }while(count != 0);
    int kq = findWord(s1, s2);
    printf("\nVi tri xuat hien: %d", kq);

    return 0;
}