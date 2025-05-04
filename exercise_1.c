#include <stdio.h>

int main() 
{
    int first_number;
    unsigned char second_number;

    printf("Enter positive number (int):\n");
    scanf("%d", &first_number);

    printf("Enter second number 0 to 255:\n");
    scanf(" %hhu", &second_number);

    unsigned char *byte_one = (unsigned char*)&first_number;

    byte_one[2] = second_number;

    printf("Chenge number: %d\n",first_number);

    return 0;
}