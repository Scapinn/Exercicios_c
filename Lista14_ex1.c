#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#define N 20
int main()
{

     int vetor[20], i, media= 0;

     for(i = 0; i< N; i++)
     {
      vetor[i]= 20+(rand()%80);
      media+= vetor[i];
     }
     media = media/N;
     printf(" A media foi :%d \n", media);

     for(i= 0; i< N; i++)
    {
        if(vetor[i]< media)
        {
            printf(" Valor %d menor que a media, sua nota foi: %d \n", i+1, vetor[i]);

        }
        else
        {
            printf("Valor %d maior que a media, sua nota foi: %d \n", i+1, vetor[i]);
        }
    }
     return 0;
}
