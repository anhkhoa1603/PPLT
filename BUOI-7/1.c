#include <stdio.h>

int read_numbers(const char path[])
{
    FILE* file = fopen(path, "r");

    if (file == NULL) return -1;

    int sum = 0;
    while (1)
    {
        int n;
        int status = fscanf(file, "%d", &n);
        if (status == -1) break;

        sum += n;
    }

    fclose(file);

    return sum;
}

int main()
{
    int sum = read_numbers("data.txt");

    printf("%d\n", sum);

    return 0;
}