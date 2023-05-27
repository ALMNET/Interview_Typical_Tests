#include <stdio.h>
#include <stdint.h>


/**
 * Prototypes
*/
uint32_t squaresSum(uint16_t integer1, uint16_t integer2);

int main()
{

    uint16_t integer1, integer2;
    uint32_t result;

    printf("Enter 1st number :");
    
    fflush(stdin);
    scanf("%u", &integer1);
    fflush(stdin);

    printf("1st number = %u", integer1);

    printf("\nEnter 2nd number :");
    fflush(stdin);
    
    scanf("%u", &integer2);
    printf("\n\n1st number = %u", integer1);
    printf("\n2nd number = %u", integer2);

    result = squaresSum(integer1, integer2);

    printf("\n\n1st number = %u, 2nd Number = %u", integer1, integer2);
    
    printf("\n\nResult is = %u", result);


    return -1;
}

uint32_t squaresSum(uint16_t integer1, uint16_t integer2)
{
    integer1 *= integer1;
    integer2 *= integer2;

    return (integer1 + integer2);
}