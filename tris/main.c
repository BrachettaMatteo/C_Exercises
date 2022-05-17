#include <stdio.h>
#include <math.h>
#include "tris.h"

#define  dimTav 9
#define posto(i, j) ( \
    (i)==0 ? (j): (        \
        (i)==1&&(j)==0 ? 3 : \
            ((i)==1&&j==1?4: \
                (i==1 && j==2?5: \
                    (i==2&&j==0?6: \
                        (i==2&&j==1?7 :8))))) \
    )


void stampatavola(char *tavola) {
    //linea divisoria per rappresentare il tris
    char line[11] = "\n-------\n";
    //scorro gli elementi del tavolo
    for (int i = 0; i < dimTav; i++) {
        //controllo riga
        if (i % 3 == 0) {
            printf("%s", line);
            //inserisco il primo separatore se sono andato a capo ma non ho raggiunto il limite massimo definito
            if (i < dimTav)
                printf("|");
        }
        // \0 indica che non contiene nulla
        if (tavola[i] == '\0') {
            printf(" |");
        } else
            printf("%c|", tavola[i]);

    }
    printf("%s", line);

}

void puliscitavola(char *tavola) {
    for (int i = 0; i < dimTav; i++) {
        tavola[i] = '\0';
    }
}

void eseguimossa(char *tavola, char giocatore, short i, short j) {
    //controllo indici tramte mossa legale
    if (mossalegale(tavola, i, j) == '1') {
        tavola[posto(i, j)] = giocatore;
    } else
        printf("Errore mossa");

}

char mossalegale(char *tavola, short i, short j) {
    //controllo corretteza ondici
    if ((i >= 0 && i <= 2) && (j >= 0 && j <= 2)) {
        //controllo se il posto &egrave; disponibile
        if (tavola[posto(i, j)] == '\0') {
            return '1';
        } else {
            return '0';
        }
    } else
        return '0';
}

char tavolapiena(char *tavola) {
    //scorro l'array e cerco una casella vuota
    for (int i = 0; i <= dimTav; i++)
        if (tavola[i] == '\0')
            return '1';
    return '0';
}

char havinto(char *tavola) {
    /*la vittoria è determinata da:
     * -) una riga intera con lo stesso valore
     * -) una colonna intera con lo stesso valore
     * -) posizione 0-0, 1-1, 2-2
     * -) posizione 0-2,1-1,2-0
     * */

    //controllo righe
    for (int i = 0; i < dimTav; i += 3) {
        //controllo che la casella non sia vuota
        if (tavola[i] != '\0') {
            //controllo righe
            if (tavola[i] == tavola[i + 1] && tavola[i] == tavola[i + 2])
                return '1';
        }
    }
    //controllo colonne
    for (int i = 0; i <= sqrt(dimTav); i++) {
        if (tavola[i] != '\0') {
            if (tavola[i] == tavola[i + 3] && tavola[i] == tavola[i + 6])
                return '1';
        }
    }
    //controllo incroci
    if ((tavola[0] == tavola[4] && tavola[0] == tavola[8]) && tavola[0] != '\0')
        return '1';

    if ((tavola[2] == tavola[4] && tavola[2] == tavola[6]) && tavola[2] != '\0')
        return '1';

    return '0';
}

void partita(void) {
    //creo tavolo
    char tavolo[dimTav] = "";
    //creo indici
    short i, j;
    //creo giocatori
    char logoPlayer1, logoPlayer2;

    //richiesta carattere giocatore
    printf("inserisci carattere primo giocatore:");
    scanf(" %c", &logoPlayer1);

    printf("inserisci carattere secondo giocatore:");
    scanf(" %c", &logoPlayer2);
    /*
     *variabile di 'lavoro', per gestire il corretto funzionamento del gioco e la verifica ad ogni
     * mano necessito di una varibili incrementale in cui se è pari è il turno del giocatore uno altrimenti del giocartore 2.
     */
    int player = 0;
    //finchè il tavolo non è pieno e un giocatore non ha vinto

    while (havinto(tavolo) == '0' || tavolapiena(tavolo) == '0') {

        stampatavola(tavolo);
        //verifico il turno
        if (player % 2 == 0) {
            //chiedo cordinate
            printf("giocatore %c inserisci la tua cordinata", logoPlayer1);
            scanf(" %hd %hd", &i, &j);
            //verifico cordinata
            while (mossalegale(tavolo, i, j) == '0') {
                printf("Cordinata non valida %c inserisce una nuova cordinata", logoPlayer1);
                scanf(" %hd %hd", &i, &j);
            }
            eseguimossa(tavolo, logoPlayer1, i, j);
        } else {
            printf("giocatore %c inserisci la tua cordinata", logoPlayer2);
            scanf(" %hd %hd", &i, &j);
            while (mossalegale(tavolo, i, j) == '0') {
                printf("Cordinata non valida %c inserisce una nuova cordinata", logoPlayer2);
                scanf(" %hd %hd", &i, &j);
            }
            eseguimossa(tavolo, logoPlayer2, i, j);
        }
        //aggiorno turno
        player++;
    }
    printf("end game \n");
    stampatavola(tavolo);

}

int main() {
    partita();
    return 0;
}


