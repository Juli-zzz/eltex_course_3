#include <stdio.h>

#define SIZE 100

int length (char * A) // подсчет символов
{
    int length = 0;
    while (A[length] != '\0') 
    {
        length++;
    }
    return length;
}

char* find (char* str, char* sub_str)
{
    int len_str = length(str);
    int len_sub_str = length(sub_str);
    int i, j;

    for (i = 0; i <= len_str - len_sub_str; i++)
    {
        for (j = 0; j < len_sub_str; j++) 
        {
            if (str[i + j] != sub_str[j]) 
            {
                break;
            }
        }
        if (j == len_sub_str) 
        {
            return &str[i];
        }
    }
    return NULL;
}

int main ()
{
    char str[SIZE];
    char sub_str[SIZE];

    printf("Enter string:\n");
    fgets(str, SIZE, stdin);

    printf("Enter sub_string:\n");
    fgets(sub_str, SIZE, stdin);

    char* A = find(str, sub_str);
    
    if (A != NULL) 
    {
        printf("start string: %s\n", A);
    } else {
        printf("NULL\n");
    }

    return 0;
}