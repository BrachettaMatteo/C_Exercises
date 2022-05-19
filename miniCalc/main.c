/**
 * @file main.c
 * @author Matteo Brachetta (matteo.brachetta@studenti.unicam.it)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "miniCalc.h"

#define SIZEWORD 80

void saltaspazi(void)
{
    //TODO: implement
}

char leggispazi(void)
{
    //TODO: implement
}

char leggiparola(char *word)
{
    //TODO: implement
}

int legginumero_nonnegativo(void)
{
    //TODO: implement
}

char leggi_si_no(char *msg)
{
    //TODO: implement
}

int main(void)
{
    int x;
    char w[SIZEWORD + 1];

    if (!leggi_si_no("Procediamo?"))
        return -1;

    saltaspazi();
    x = legginumero_nonnegativo();
    if (!leggispazio())
    {
        printf("x = %d.\n", x);
        return 0;
    }
    saltaspazi();
    if (leggiparola(w))
        printf("x = %d, w = %s. \n", x, w);
    else
        printf("x = %d. \n", x);
    return 0;
}
