/*
Exercise 5:
Write a C function that takes an array of integers and its length as parameters. The function should return the maximum difference between any two elements in the array.
*/

#include <stdio.h>
#include <string.h>

int maximumDifference(int arrayArg[], int arraySize);

int main()
{
    int array[] = {2, 5, 8, 9, 5, 14, 8, 20, 115};
    int arraySize;
    int result;

    arraySize = sizeof(array) / sizeof(int);


    result = maximumDifference(array, arraySize);

    printf("\n\nResult: %d", result);


    return -1;
}

int maximumDifference(int arrayArg[], int arraySize)
{
    int result = 0;
    int tempLow = 35565, tempHigh = 0;
    int i;

    for(i = 0; i < arraySize; i++)
    {
        if(tempHigh < arrayArg[i])
            tempHigh = arrayArg[i];
        if(tempLow > arrayArg[i])
            tempLow = arrayArg[i];
    }
    
    result = tempHigh - tempLow;

    return result;

}