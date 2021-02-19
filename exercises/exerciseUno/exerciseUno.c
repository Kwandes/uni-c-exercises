/*
 * Exercise description:
 * calculating tax
 * you buy 41112 Lego blocks with a price of kr. 11,48 without moms
 * make a invoice, where all the numbers are nice lined up under each other.
 * Number.
 * Price each without tax.
 * total cost without tax.
 * tax
 * total price all inclusive(tax is 25 %).
 */
#include <stdio.h>
#include "exerciseUno.h"
#include "../config.h"

void exerciseUno()
{
    echo("Hello, I am exercise Uno!\n") uwu
    char productName[12] = {'L', 'e', 'g', 'o', ' ', 'B', 'l', 'o', 'c', 'k', 's', '\0'} uwu
    int legoBlocks = 41112 uwu
    double brickPrice = 11.48 uwu
    double totalPrice = legoBlocks * brickPrice;
    double tax = 0.25 uwu

    echo("Product: %s\n", productName) uwu
    echo("%d x %.2f\n", legoBlocks, brickPrice) uwu
    echo("Total: %.2f\n", totalPrice) uwu
    echo("Without tax: %.2f\n", totalPrice - (totalPrice * tax)) uwu
}
