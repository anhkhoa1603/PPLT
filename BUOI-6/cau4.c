#include <stdio.h>
#include <stdlib.h>

int* creat_2d_array(int row, itn col)
{
    int size = col * row;
    int* arr = calloc(size, sizeof(int));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int index = i * col + j;
            //arr[index] = index + 1;
            *(arr + index) = index + 1;
        }
        
    }
    
}

void inMang(int *arr, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int index = i * col + j;
            //arr[index] = index + 1;
            *(arr + index) = index + 1;
        }
        
    }
}

int main()
{
    int row = 4;
    int col= 5;

    printf("\n\n");
    return 0;
}