#include <stdio.h>
#include "exerciseUno/exerciseUno.h"
#include "exerciseDuo/exerciseDuo.h"
#include "exerciseTres/exerciseTres.h"
#include "exerciseCuatro/exerciseCuatro.h"

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
    exerciseCuatro();
    printSeparator();
    return 0;
}

void printSeparator() {
    printf("\n--------------------------------");
}