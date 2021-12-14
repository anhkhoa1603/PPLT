#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* findAll(char input[], char key, int* n)
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
        return NULL;
    }

    *n = count;

    int* result = calloc(count, sizeof(int));
    int index = 0;

    for(int i = 0; i < strlen(input); i++)
    {
        if(key == input[i])
        {
            result[index] = i;
            index++;
        }
    }

    return result;
}

int main()
{
    char mess[] = "Truong Duc Anh Khoa";
    int n;
    int *kq = findAll(mess, 'a', &n);

    for(int i = 0; i < n; i++)
    {
        printf("%d ", kq[i]);
    }

    return 0;
}