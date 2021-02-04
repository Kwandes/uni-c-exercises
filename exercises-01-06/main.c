#include <stdio.h>
#include "exerciseUno/exerciseUno.h"
#include "exerciseDuo/exerciseDuo.h"

void printSeparator();

int main() {
    printf("Hello, World!\n");
    printSeparator();
    exerciseUno();
    printSeparator();
    exerciseDuo();
    return 0;
}

void printSeparator()
{
    printf("--------------------------------\n");
}