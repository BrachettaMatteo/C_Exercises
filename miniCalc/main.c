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
#include "miniCalc.h"

void saltaspazi(void)
{
    int c;
    c = getchar();
    //elimino tutti i caratteri di spaziatura
    while (isspace(c) > 0)
    {
        printf("%d", c);
        //prendo un'altro carattere
        c = getchar();
    };
    //aggiungo l'ultimo carattere eliminato
    ungetc(c, stdin);
}

char leggispazio(void)
{
    int c = getchar();
  if(isspace(c))
return '1';
else '0';
}

char leggiparola(char *word)
{
    //TODO: implement
}

int legginumero_nonnegativo(void)
{
    int output;
    int c;
    c = getchar();
    //cintrollo elemento
    if (isdigit(c) < 0)
    {
        //finche sono ci sono cifre
        while (isdigit(c) > 0)
        {
            output+=c;
            c=getchar();
        }
        //aggiungo ultimo 
        ungetc(c,stdin);
        return output;
    }
    else{
        //riaggiungo elemento
        ungetc(c,stdin);
        return -1;}

}

char leggi_si_no(char *msg)
{
    char choice = '\0';
    printf("%s s/n", msg);
    scanf("%c", &choice);
    while (choice != 's' & choice != 'n')
    {
        printf("imput non corretto digitare s/n");
        scanf("%c", &choice);
    }
    if (choice == 's')
        return '1';
    else
        return '0';
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
