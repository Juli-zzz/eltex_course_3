#include <stdio.h>

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *ip = A;

    for(int i = 0; i < 10; i++)
    {
        printf("%3d", *ip + i);
    }
    printf("\n");

    return 0;
}
