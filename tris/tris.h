//
// Created by Matteo Brachetta on 12/05/22.
//

/**
 * Stampa a video lo stato attuale della tavola tavola come nell’esempio seguente:
Supponiamo che il giocatore 1 abbia occupato solo le due caselle nelle posizioni (1, 1) e (0, 2),
 e che il giocatore 2 abbia occupato solo le due caselle nelle posizioni (1, 0) e (2, 0),
 allora la tavola andr`a visualizzata come segue:
  -------
  | | |*|
  -------
  |o|*| |
  -------
  |o| | |
  -------
 * @param tavola
 *
 */
void stampatavola(char *tavola);

/**
 * Prepara la tavola per iniziare una nuova partita, vale a dire,
 * libera ogni casella della tavola.
 * @param tavola tavolo da pulire
 */
void puliscitavola(char *tavola);

/**
 * Se la casella in posizione (i,j) `e libera, viene occupata da una pedina del giocatore giocatore,
altrimenti non compie alcuna operazione.
Non si richiede che eseguimossa debba necessariamente controllare che (i, j) sia la posizione di una
casella (vale a dire, eseguimossa non `e tenuta a controllare che 0 ≤ i, j ≤ 2).

 * @param tavola tavolo del giico
 * @param giocatore simbolo del giocatore
 * @param i cordinata x
 * @param j cordinata y
 */
void eseguimossa(char *tavola, char giocatore, short i, short j);
/**
 * Verifica la corretteza degli indici e verifica se una casella e occupata o meno
 * @param tavola
 * @param i
 * @param j
 * @return1 se 0 ≤ i, j ≤ 2 e la casella di posizione (i, j) `e libera. Restituisce 0 altrimenti.
 */
char mossalegale(char *tavola, short i, short j);

/**
 * Restituisce 1 se lo stato attuale della tavola contiene un tris del giocatore 1, 2 se lo stato attuale della tavola contiene un tris del giocatore 2, 0 se nessuno dei due giocatori ha ancora realizzato un tris.

 * @param tavola
 * @return
 */
char havinto(char *tavola);
/**
 *
Restituisce 1 se la tavola non ha caselle libere, 0 altrimenti.
 * @param tavola
 * @return
 */
char tavolapiena(char *tavola);
/**
 * Lancia una partita. Vale a dire:
* 1. Prepara la tavola nello stato iniziale.
2. Stampa la tavola.
3. Alterna le mosse dei due giocatori fino a quando uno dei due vince, oppure la tavola si riempie senza vincitori.
4. Dopo ogni mossa di ognuno dei giocatori, stampa la tavola aggiornata.
5. Se alla fine della partita il giocatore 1 ha vinto, stampa il messaggio: Ha vinto il giocatore 1!, se invece ha vinto il giocatore 2, stampa: Ha vinto il giocatore 2!, altrimenti stampa: Partita conclusa in pareggio.
 */
void partita(void);
/**
 * Stampa sul video il messaggio:
Giocatore g: muovi:
dove g `e 1 se giocatore == 1, 2 altrimenti.
Successivamente, legge dalla tastiera due valori interi i e j, separati da caratteri di spaziatura, che rappresentano la mossa del giocatore g,
 vale a dire la richiesta di posizionare una delle sue pedine nella casella di posizione (i,j).
 L’informazione sui valori i e j letti va conservata e passata alla funzione chiamante (specificamente la funzione partita, vedi sotto)
 in modo che tale funzione possa di seguito invocare eseguimossa(tavola, giocatore, i, j);
A tale scopo `e necessario simulare il passaggio per riferimento delle due variabili short i,j a inputmossa
 . Fa parte dell’esercizio il compito di stabilire i tipi da attribuire al terzo e quarto parametro di inputmossa
 al fine di simulare il passaggio per riferimento.
Si ricorda che le specifiche da inserire nella stringa formato in una chiamata del tipo scanf(formato, ...) sono:
– %d per leggere un intero e memorizzarlo in un int.
– %hd per leggere un intero e memorizzarlo in uno short. – %c per leggere un carattere e memorizzarlo in un char.
A questo stadio dell’esercitazione non si richiede di eseguire alcun controllo sulla correttezza del- l’input.
 */
//void inputmossa(char *tavola, char giocatore, , )
