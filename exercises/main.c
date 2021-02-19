#include <stdio.h>
#include "exerciseUno/exerciseUno.h"
#include "exerciseDuo/exerciseDuo.h"
#include "exerciseTres/exerciseTres.h"
#include "exerciseCuatro/exerciseCuatro.h"
#include "17/17.h"

void exercises1_6();
void exercises17_22();
void printSeparator();

int main()
{
    printf("Hello, World!\n");
    exercises1_6();
    exercises17_22();
    return 0;
}

void exercises1_6()
{
    printSeparator();
    exerciseUno();
    printSeparator();
    exerciseDuo();
    printSeparator();
    exerciseTres();
    printSeparator();
    exerciseCuatro();
    printSeparator();
}

void exercises17_22()
{
    printSeparator();
    x17();
    printSeparator();
}

void printSeparator()
{
    printf("\n--------------------------------");
}