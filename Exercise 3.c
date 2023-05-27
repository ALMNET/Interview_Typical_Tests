/*+
Exercise 3:
Write a C function to reverse a given string in place. The function should take a string as input and modify it directly.
*/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


/**
 * Prototypes
*/
void stringInverter(char * stringToInvert);

//char * string = "Hello everyone";
char string[30];


int main(){

    uint8_t counter = 0;
    uint8_t charNumber;

    char * buffer2 = "Holaperra";


    stringInverter(buffer2);
    
    

    printf("\n\nResult : %s", buffer2);


    return -1;
}


void stringInverter(char * stringToInvert)
{
    uint8_t charNumber = strlen(stringToInvert);
    uint8_t counter;

    char * buffer;

    strcpy(buffer, stringToInvert);

    for(counter = 0; counter <= charNumber; counter++)
        stringToInvert[counter] = buffer[charNumber - counter];
}


/*

invertedString = (char*) malloc (charNumber * sizeof(char));

    for(counter = 1; counter < charNumber; counter++){
        *invertedString = string[strlen(string) - counter];
        invertedString++;
    }
    */