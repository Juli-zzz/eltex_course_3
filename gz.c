#include <stdio.h>


int main() 
{
    int A;

    printf("Enter positive integer:\n");

    if (scanf("%d",&A) !=1)
    {
        printf("Error!\n");  
        return 0;      
    }

    int chek = getchar();

    if ((chek) == '.')
    {
        printf("Error! This is not an integer\n"); 
        return 0;
    } else if ((chek != '\n') && (chek != EOF))
        {
        printf("Error!!!\n");
        return 0;
        }

        if (A < 0)
        {
        printf("Negativ integer\n");
        printf("\n");     
    }

    printf("%d\n", A);

    return 0;
} 