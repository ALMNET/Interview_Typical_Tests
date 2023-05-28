/*
Exercise 6:
Implement a C program that sorts an array of integers using the bubble sort algorithm. The program should take the array and its length as input and modify the array directly.
*/

#include <stdio.h>
#include <string.h>

int maximumDifference(int arrayArg[], int arraySize);

int main()
{

    // printf("Enter a value: ");
    // fgets(str, sizeof(str), stdin);


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
    int temp, *tempArray;
    int i;

    for()

    for(i = 0; i < (arraySize - 1); i++)
    {
        if(arrayArg[i] > arrayArg[i+1]
            tempHigh = arrayArg[i];
    }
    
    result = tempHigh - tempLow;

    return result;

}