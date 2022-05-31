#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <pwd.h>

#define MAX 100000
 char* proprietario(char * file);
int main()
{
    int fd;
    char *path;
    char buffer[MAX];
    path = "/home/muser/Desktop/dati.txt";
    fd = open(path, O_RDONLY);
    read(fd, buffer, MAX);
    printf("caratteri: %d \n", contaCaratteri(buffer));
    printf("dimensione: %d bytes \n", dimensioneFile(fd));
    char diritti[30];
    if (access(path, 01) == 0)
    {
        strcat(diritti, "EXECUTE, ");
    }
    if (access(path, 02) == 0)
    {
        strcat(diritti, "WRITE ");
    }
    if (access(path, 04) == 0)
    {
        strcat(diritti, "READ ");
    }
    printf("permesi: %s \n", diritti);
    printf("numero righe: %d \n", numeroRighe(buffer));
    char * owner= proprietario(path);
    printf("proprietario: %s \n", owner);
    close(fd);
    return 0;
}
int contaCaratteri(char *buffer)
{
    return strlen(buffer);
}
int dimensioneFile(int fd)
{
    return lseek(fd, 0, SEEK_END);
}
int numeroRighe(char *buffer)
{
    int count = 0;
    int max = strlen(buffer);
    for (int i = 0; i <= max; i++)
    {
        if (buffer[i] == '\n')
        {
            count++;
        }
    }
    return count;
}
char *proprietario(char *file)
{
    struct stat buf;
    struct passwd *pwd;
    //ottengo informazioni file
    stat(file, &buf);
    //convero l'id in nome utente
    pwd = getpwuid(buf.st_uid);

    return pwd->pw_name;
}