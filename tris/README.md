# Esercizio Tris

## Specifica

Si tratta di una semplice implementazione del gioco del tris. Su una tavola di dimensioni 3 × 3 due giocatori si alternano nel posizionare le proprie pedine, una per ogni mossa. Vince chi ne mette 3 in fila, in una colonna, o in una riga, o in una delle due diagonali. Se tutte le caselle della tavola sono occupate e nessuno ha ancora vinto, la partita finisce in pareggio.
Ogni casella della tavola è individuata da una coppia di interi (assumiamo che siano short) (i,j) dove 0 ≤ i, j ≤ 2. La coppia (i, j) costituisce la posizione della casella. La casella in posizione (i, j) `e la casella nella i-esima riga e nella j-esima colonna.
Si rappresenti la tavola con un array di 9 char:
```c
char tavola[9];
```

I primi 3 elementi dell’array tavola rappresentano le 3 caselle della prima riga della tavola, i secon- di 3 rappresentano le 3 caselle della seconda riga, gli ultimi 3 rappresentano le 3 caselle della terza riga.
Si consiglia di implementare una macro con parametri:
```c
#define posto(i,j)
```

( o se non siete confidenti con le macro, una funzione short posto(short i, short j) ) tale che posto(i,j) sia l’indice dell’elemento dell’array tavola in cui è rappresentata la casella di posizione (i, j). Ad esem- pio devono valere le seguenti eguaglianze: posto(1,1) == 4, posto(2,2) == 8, posto(0,0) == 0, posto(1,2) == 5.
Ogni casella può essere libera, o essere occupata da una pedina del giocatore 1, rappresentata dal carattere ’*’, o essere occupata da un pedina del giocatore 2, rappresentata dal carattere ’o’.
Quindi si osserva che lo stato di ogni casella della tavola è completamente specificato assegnando all’ele- mento corrispondente nell’array tavola un valore x ∈ {0,1,2} (dunque ogni possibile valore di x è memorizzabile già in un char).

Si richiede di implementare le seguenti funzioni:

- `void stampatavola(char * tavola)`

  Stampa a video lo stato attuale della tavola tavola come nell’esempio seguente:
  Supponiamo che il giocatore 1 abbia occupato solo le due caselle nelle posizioni (1, 1) e (0, 2), e che il giocatore 2 abbia occupato solo le due caselle nelle posizioni (1, 0) e (2, 0), allora la tavola andr`a visualizzata come segue:
```c
|-----|
|x| |o|
| |x|o|
|x|o|x|
|-----|
```

- `void puliscitavola(char *tavola)`

  Prepara la tavola per iniziare una nuova partita, vale a dire, libera ogni casella della tavola.
- `void eseguimossa(char *tavola, char giocatore, short i, short j)`

  Se la casella in posizione (i,j) è libera, viene occupata da una pedina del giocatore giocatore,
  altrimenti non compie alcuna operazione.
  Non si richiede che eseguimossa debba necessariamente controllare che (i, j) sia la posizione di una
  casella (vale a dire, eseguimossa non è tenuta a controllare che 0 ≤ i, j ≤ 2).
- ` char mossalegale(char *tavola, short i, short j)`

  Restituisce 1 se 0 ≤ i, j ≤ 2 e la casella di posizione (i, j) `e libera. Restituisce 0 altrimenti.
- `  void inputmossa(char *tavola, char giocatore, ___ , ___ )`

  Stampa sul video il messaggio:

  **Giocatore g: muovi:**
  dove g è 1 se giocatore == 1, 2 altrimenti.

  Successivamente, legge dalla tastiera due valori interi i e j, separati da caratteri di spaziatura, che rappresentano la mossa del giocatore g, vale a dire la richiesta di posizionare una delle sue pedine nella casella di posizione (i,j). L’informazione sui valori i e j letti va conservata e passata alla funzione chiamante (specificamente la funzione partita, vedi sotto) in modo che tale funzione possa di seguito invocare eseguimossa(tavola, giocatore, i, j);
  A tale scopo è necessario simulare il passaggio per riferimento delle due variabili short i,j a inputmossa. Fa parte dell’esercizio il compito di stabilire i tipi da attribuire al terzo e quarto parametro di inputmossa al fine di simulare il passaggio per riferimento.
  Si ricorda che le specifiche da inserire nella stringa formato in una chiamata del tipo scanf(formato, ...) sono:

    - %d per leggere un intero e memorizzarlo in un int.
    - %hd per leggere un intero e memorizzarlo in uno short.
    - %c per leggere un carattere e memorizzarlo in un char.

  A questo stadio dell’esercitazione non si richiede di eseguire alcun controllo sulla correttezza del- l’input.
- `char havinto(char *tavola)`

  Restituisce 1 se lo stato attuale della tavola contiene un tris del giocatore 1, 2 se lo stato attuale della tavola contiene un tris del giocatore 2, 0 se nessuno dei due giocatori ha ancora realizzato un tris.
- `char tavolapiena(char *tavola)`

  Restituisce 1 se la tavola non ha caselle libere, 0 altrimenti.
- `void partita(void)`

  Lancia una partita. Vale a dire:
    1. Prepara la tavola nello stato iniziale.
    2. Stampa la tavola.
    3. Alterna le mosse dei due giocatori fino a quando uno dei due vince, oppure la tavola si riempie senza vincitori.
    4. Dopo ogni mossa di ognuno dei giocatori, stampa la tavola aggiornata.
    5. Se alla fine della partita il giocatore 1 ha vinto, stampa il messaggio: Ha vinto il giocatore 1!, se invece ha vinto il giocatore 2, stampa: Ha vinto il giocatore 2!, altrimenti stampa: Partita conclusa in pareggio.
- La funzione main si limita a lanciare una partita.

Tutte le variabili usate devono essere locali, vale a dire, dichiarate (concetto che in questi casi coincide con definite) nel corpo di qualche funzione. In particolare, la dichiarazione dell’array char tavola[9] deve essere locale alla funzione partita.

## Struttura

Il progetto è composto da due file:
- [main.c](./main.c) che contiene l'implementazione del gioco;
- [tris.h](./tris.h) che contiene la librerie dei comandi necessari al gioco con la relativa documentazione;
