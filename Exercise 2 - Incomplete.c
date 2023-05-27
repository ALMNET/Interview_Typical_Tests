#include <stdio.h>
#include <stdint.h>


/**
 * Prototypes
*/


int main(){

    double average = 0;
    uint8_t counter = 0;
    uint8_t input = 0;

/*
    do{
        printf("\nEnter number %u :", counter);
        fflush(stdin);
        scanf("%u", &input);
        average += input;
        counter++;
    }while(input >= 0);
    */

    for(counter = 0; input >= 0; counter++)
    {
        printf("\nEnter number %u :", counter);
        gets(input);

        input = atoi(input);
        
        //scanf("%d", &input);
        //fflush(stdout);
        average += input;
    }
    
    average /= counter;

    printf("Result : %f", average);


    return -1;
}