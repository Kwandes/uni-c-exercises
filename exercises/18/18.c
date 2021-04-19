// Basically, make a bubble sort with pointers
#include <stdio.h>
#include <stdlib.h>
#include "18.h"
#include "../config.h"

void sort(int array[]);
void printArr(int array[], size_t length);
int * duplicate(int ogArr[], size_t size);

void x18()
{
    int arr[] = {1, 3, 2, 4, 7, 6, 5, 3, 1, 8, 9};
    printArr(arr, sizeof(arr)/sizeof(arr[0]));
    int *sortedArrPtr = duplicate(arr, sizeof(arr)/sizeof(arr[0]));
    printArr(sortedArrPtr, ((sortedArrPtr)[1] - &*sortedArrPtr));

}

int * duplicate(int ogArr[], size_t size)
{
    int *arr = malloc(size);
    if (!arr)
    {
        return NULL;
    }

    for ( int i = 0; i < size; i++)
    {
        arr[i] = ogArr[i];
    }

    return arr;
}

void sort(int array[])
{
    return;
}

void printArr(int array[], size_t length)
{
    for (int i = 0; i < length; i++)
    {
        printf(" %d,", array[i]);
    }
    printf("\n");
}