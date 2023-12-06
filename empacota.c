#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFLEN 1024
char* empacotaString (char* string)
{
    int i=0, num=0 ;
    char *vetor;

    while(string[i] != '\0')
    {
        num++;
    }

    vetor = (char *) malloc((num +1) * sizeof(char));
    for(i=0; i< num; i++)
    {
        vetor[i]= string[i];
    }
    return vetor;
}

int main()
{

    char buffer [BUFLEN];
    fgets (buffer, BUFLEN, stdin);

}
