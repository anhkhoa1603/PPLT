#include <stdio.h>

int write_array(int a[], int n, const char path[])
{
    FILE* f = fopen(path, "w");

    if (f == NULL)
        return 0;

    
    for(int i = 0; i < n; i++)
    {
        fprintf(f, i == n - i ? "%d" : "%d\n", a[i]);
    }

    fclose(f);
    return 1;
}

int main()
{
    int a[] = {2, 3, 5, 7, 10, 45};
    int n = sizeof(a) / sizeof(int);
    
    int status = write_array(a, n, "output.txt");

    if (status == 1)
        printf("Success");
    else
        printf("Fail");

    return 0;
}