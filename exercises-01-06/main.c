#include <stdio.h>
#include "exerciseUno/exerciseUno.h"
#include "exerciseDuo/exerciseDuo.h"
#include "exerciseTres/exerciseTres.h"

void printSeparator();

int main() {
    printf("Hello, World!\n");
    printSeparator();
    exerciseUno();
    printSeparator();
    exerciseDuo();
    printSeparator();
    exerciseTres();
    printSeparator();
    return 0;
}

void printSeparator() {
    printf("\n--------------------------------");
}