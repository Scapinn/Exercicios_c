#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFLEN 1240
char* concatenaStrings (char* s1, char* s2)
{
    char* string;
    int tam1, tam2,i, j=0 ;

    tam1 =strlen(s1);
    tam2 = strlen(s2);

    string = (char*) malloc((tam1 + tam2 + 1) * sizeof(char));

    for(i =0; i<tam1; i++)
    {
        string[i]= s1[i];
    }

    for(i = tam1; i<  (tam1 +tam2); i++)
    {
        string[i]= s2[j];
        j++;
    }
    string[tam1 + tam2]= '\0';
     return string;


}

 int main()
 {
     char string1[BUFLEN], string2[BUFLEN], *string;
     int i;
     scanf("%s", string1);
     scanf("%s", string2);
     int  tamanho = strlen(string1) + strlen(string2);
   string =  concatenaStrings(string1, string2);

   for(i = 0; i < tamanho ; i ++)
    {
        printf("%c", string[i]);
    }
   free(string);

     return 0;
 }
