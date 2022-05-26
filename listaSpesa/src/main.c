#include "ListaSpesa.h"

void stampaLista(char *pathfile)
{
    if (chechFile(pathfile) == 1)
    {
        FILE *fp;
        fopen(pathfile, "r");
        char ch;
        while (!feof(fp))
        {
            ch = fgetc(fp);
            printf("%c", ch);
        }
    }
    else
        printf("la lista non esiste.");
}

void creaNuovaLista(char *pathfile)
{
    // get time
    time_t tm;
    time(&tm);
    FILE *fp;
    char element[MAX_ELEMENT_SIZE];
    char choice = 'y';
    //creo nuovo file
    fp = fopen(pathfile, "w");

    printf("Lista della spesa \n");
    fprintf(fp, "Lista della spesa \n date: %s ", ctime(&tm));
    while (choice == 'y')
    {
        printf("elemento: ");
        scanf(" %s", element);
        fprintf(fp, "- %s \n ", element);

        //inizializzo per controllo a null
        choice = '\0';
        while (choice != 'y' && choice != 'n')
        {
            printf("vuoi aggiungere altri elementi? [y/n] ");
            scanf(" %c", &choice);
        }
    }
}

int main(int argc, char const *argv[])
{
    char nameLista[80];

    //richiesta nome lista
    printf("inserisci il nome della lista:\n ");
    scanf(" %s", nameLista);

    //creo path file
     char path[MAX_FILENAME_SIZE] = "\0";
    strcat(path, "./ListeSpesa/");
    strcat(path, nameLista);
    strcat(path, ".txt");

    printf("%s", path);
    //controllo file nella cartella
    
    if (chechFile(path) == 1)
    {
        stampaLista(path);
    }
    else
    {
        creaNuovaLista(path);
    }
    
    return 0;
}

int chechFile(char *file)
{
    FILE *fp;
    if (fp=fopen(file, "r"))
    {
        fclose(fp);
        return 1;
    }
    else
        return 0;
}
