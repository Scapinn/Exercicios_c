#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 8
int main()
{

    int notas[N], media= 0, i;
     srand(time(0));
    for(i =0; i< N; i ++)
    {
        notas[i]= 20 +(rand()%61);
        media += notas[i];
    }
    media = media/N;

    for(i= 0; i<N; i++)
    {
        if(notas[i]> media)
        {
            printf(" a nota %d  foi: %d e esta acima da media \n", i, notas[i]);
        }

        else
        {
            printf(" a nota %d  foi: %d e esta abaixo da media \n", i, notas[i]);

        }
    }

}
