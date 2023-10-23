#include <stdio.h>
#define N 9
int main()
{   int i, corretas =0;
     char respostas[N], gabarito[N];

     scanf("%s", gabarito);
     scanf("%s", respostas);

     for(i = 0; i<N; i++)
     {
         if(gabarito[i]== respostas[i])
         {
            corretas ++;
         }
     }

     printf("%d", corretas);

     return 0;

}
