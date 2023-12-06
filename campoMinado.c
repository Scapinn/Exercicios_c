#include <stdio.h>
#define TAM 50

int main()
{
    int i, vetor[TAM], vetorResult[TAM], num, j, total=0;

    scanf("%d", &num);

    for(i =0 ; i< num ; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for(i=0; i < num; i++)
    {
        if(i == 0 )
        {
            for(j= 0; j< 2; j++)
            {
                if (vetor[i+j]>0)
                    total++;

            }
            vetorResult[i]= total;
            total=0;
        }
        else if(i == num -1)
        {
            for(j= 0; j< 2; j++)
            {
                if (vetor[i-j])
                total ++;

            }
            vetorResult[i]= total;
            total=0;

        }
        else
        {
            for(j= 0; j< 3; j++)
            {
                 if (vetor[i+j-1] > 0)
                    total++;

            }
            vetorResult[i]= total;
            total=0;
        }
    }

    for(i=0; i< num; i++)
    {
        printf("%d", vetorResult[i]);
    }

}
