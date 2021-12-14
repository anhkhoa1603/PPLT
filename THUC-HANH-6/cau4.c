#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* chuanHoa(const char* input)
{
    int n = strlen(input);
    char* output = calloc(n, sizeof(char));

    int index = 0;

    for(int i = 0; i < n; i++)
    {
        char x = input[i];
        if(x != ' ')
        {
            if(index == 0 || output[index - 1] == ' ')
            {
                output[index] = toupper(x);
            }
            else
            {
                output[index] = tolower(x);
            }

            index++;
        }
        else if(index != 0 && input[i + 1] != ' ' && i< n - 1)
        {
             output[index++] = x;
        }
    }
    output[index] = 0;

    return output;
}

int main()
{
    char name[] = "    TRUong          duc     aNH   kHoA    ";
    printf("'%s'\n", name);

    char* rename = chuanHoa(name);
    printf("'%s'\n", rename);

    return 0;
}