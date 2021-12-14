#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int findAll(char input[], char key)
{
    int count = 0;
    for(int i = 0; i < strlen(input); i++)
    {
        if(key == input[i])
        {
            count++;
        }
    }
    if(count == 0)
    {
        return -1;
    }

    int result = 0;

    for(int i = 0; i < strlen(input); i++)
    {
        if(key == input[i])
        {
            result = i;
            break;
        }
    }

    return result;
}

int main()
{
    char mess[] = "Truong Duc Anh Khoa";
    char n;
    printf("Nhap key: ");
    scanf("%c", &n);
    int kq = findAll(mess, n);

    if(kq != 0)
    {
        printf("Vi tri key: %d", kq);
    }
    else
    {
        printf("Khong có key ma ban tim kiem!");
    }

    return 0;
}