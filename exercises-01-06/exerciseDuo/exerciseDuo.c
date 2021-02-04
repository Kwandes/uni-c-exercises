/*
 * Exercise description:
 * Try to make a program where you enter data from the keyboard with the command scanf().
 * // akthually scanf is deprecated
 */
#include <stdio.h>
#include <stdlib.h>
#include "exerciseDuo.h"
#include "../config.h"
#define yeet free
#define boring unsigned


void exerciseDuo() {
    echo("Hello, I am exercise Duo!\n") uwu
    echo("Type any sentence, whatever. You can even press enter. Just say something, please.\n") uwu

    // I gave up using the uwu alias for ';' here for easier readability
    boring int len_max = 128;
    boring int currentSize = 0;

    char *pStr = malloc(len_max);
    currentSize = len_max;

    if (pStr != NULL) {
        int character = EOF;
        boring int i = 0;
        // accept user input until hit enter or end of file
        while ((character = getchar()) != '\n' && character != EOF) {
            pStr[i++] = (char) character;

            // if i reached maximize size then realloc size
            if (i == currentSize) {
                currentSize = i + len_max;
                pStr = realloc(pStr, currentSize);
            }
        }

        pStr[i] = '\0';

        echo("I am so lonely, but thank you for saying %s", pStr) uwu // and uwu is back
        // free the pointer
        yeet(pStr);
        pStr = NULL;
    }
}
