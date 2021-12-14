#include <stdio.h>

int main()
{
    FILE* f = fopen("output.txt", "w");

    if (!f)
        printf("Khong the mo file de ghi");
        return 0;

    fprintf(f, "%s", "Welcome to C Programming");

    fclose(f);

    return 0;
}