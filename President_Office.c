#include <stdio.h>

int len(char *str)
{
    int count = 0;

    if (!*str)
        return count;
    while(*str)
    {
        count++;
        str++;
    }
    return count;
}

int office_no(char **arr)
{
    int i,j;
    for(i = 0; i < len(*arr); i++)
        for(j = 0; j < (**arr); j++)
            printf("%c", i);
    return 0;
}

int main(void)
{
    char **arr = {{'a', 'b'}, {'c', 'd'}};
    office_no(arr);
}