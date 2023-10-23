#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#define N 20
 int main()
 {
     int num, i, media=0, vetor[20], posicao=0;
     srand(time(NULL));


     for(i = 0; i< N ; i++)
    {
        num =  -40 +  (rand()/RAND_MAX) *40;
        if( num > 0)
        {
            vetor[posicao]= num;
            posicao++;
            media+= num;
        }
        media = media/(posicao+1);
    printf("%d", media);
    }
      return 0;
 }
