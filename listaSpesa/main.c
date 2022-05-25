#include <stdio.h>
#include <time.h>

#define MAX_SIZE 80

int main(int argc, char const *argv[])
{
    // get time
    time_t tm;
    time(&tm);

     FILE *fp;
    char choice = 'y';
    char element [MAX_SIZE];

    fp = fopen("listaSpesa.txt", "w");
    printf("Lista della spesa \n");
    fprintf(fp, "Lista della spesa \n date: %s \n",ctime(&tm));
    while (choice == 'y')
    {
        printf("elemento: ");
        scanf(" %s",element);
        fprintf(fp,"- %s \n ",element);

        //inizializzo per controllo a null
        choice = '\0';
        while (choice != 'y' && choice != 'n')
        {
            printf("vuoi aggiungere altri elementi? [y/n] ");
            scanf(" %c",&choice);
        }
        
    }
    printf("Lista spesa creata \n");
    fclose(fp);

    return 0;
}
