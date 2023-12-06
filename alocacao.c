#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main()
{
    double *vetor, n;
    int i;

    vetor = (double*) malloc(TAM *sizeof(double));

    for( i =0; i<TAM; i++)
    { scanf("%lf", &n);
        vetor[i] =  n;
    }

     for( i =0; i<TAM; i++)
    {
        printf("%f\n", vetor[i]);
    }

    free(vetor);

    return 0;
}
