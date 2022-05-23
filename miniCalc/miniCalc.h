/**
 * @file miniCalc.h
 * @author Matteo Brachetta (matteo.brachetta@studenti.unicam.it)
 * @brief 
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 */

#include <stdio.h>

#include <ctype.h>

#define SIZEWORD 80
/**
 * @brief salta tutti i caratteri di spaziatura consecutivi presenti nell'attuale buffer di input.
 *  Il primo carattere letto dopo una chiamata a saltaspazi non deve essere un carattere di spaziatura
 * 
 */
void saltaspazi(void);
/**
 * @brief legge un carattere.
 * 
 * @return char restituisce 1 se il carattere letto è di spaziatura, altrimetni restituisce 0.
 */
char leggispazio(void);
/**
 * @brief 
 * 
 * @param word 
 * 
 * @return Restituisce 0 se il il prossimo carattere nel buffer di input non `e alfanumerico. Altrimenti, legge la sequenza di caratteri alfanumerici consecutivi presenti nell’attuale buffer di input e la memorizza nella stringa word (non dimenticate di gestire il carattere di terminazione!). Alla fine restituisce 1. Il primo carattere letto dopo una chiamata a leggiparola non deve essere un carattere alfanumerico.
 */
char leggiparola(char *word);
/**
 * @brief 
 * 
 * @return Restituisce -1 se il il prossimo carattere nel buffer di input non `e una cifra.
Altrimenti legge la sequenza di cifre consecutive presenti nell’attuale buffer di input, calcola il valore
intero corrispondente, e lo restituisce.
Il primo carattere letto dopo una chiamata a legginumero nonnegativo non deve essere una cifra
 */
int legginumero_nonnegativo(void);
/**
 * @brief 
 * 
 * @param msg 
 * @return Stampa la domanda msg (s/n).
Se l’utente immette ’s’ restituisce 1.
Se l’utente immette ’n’ restituisce 0.
Altrimenti, stampa il messaggio: Input non corretto. Ripetere prego., ripete la domanda
msg (s/n) e attende la risposta dell’utente.
Il ciclo viene ripetuto fino a quando l’utente non immette ’s’ oppure ’n’ 
 */
char leggi_si_no(char *msg);