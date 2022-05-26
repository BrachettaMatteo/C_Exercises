#include <stdio.h>
#include<string.h>
#include <time.h>

#define MAX_FILENAME_SIZE 40
#define MAX_ELEMENT_SIZE 80

/**
 * @brief stampa la lista indicata
 * 
 * @param nameFile percorso del file
 */
void stampaLista(char *nameFile);

/**
 * @brief crea una nuova lista da sero
 * 
 * @param nameFile percorso del file. 
 */
void creaNuovaLista(char *nameFile);

/**
 * @brief verifica l'esistenza di un file
 * 
 * @param file percorso del file da ricercare
 * @return 1 se il file esiste altrimenti 0
 */
int chechFile(char *file);