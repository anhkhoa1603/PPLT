#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    char *student[] = {"duy", "khanh", "minh", "hoa", "khoa", "toan"};
    int n;

    int index = rand() % n;
    printf("%s", student[index]);

    return 0;
}