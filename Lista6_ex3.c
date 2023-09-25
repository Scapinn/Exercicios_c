#include <stdio.h>

int main()
{
    float  nota, maiorNota, menorNota, soma;
    int i ;
    soma = 0;
    maiorNota = 0;
    menorNota =11;
    for(i = 0; i<6; i++)
        {
            printf("digite a nota");
            scanf("%f", &nota);
            if(nota > maiorNota)
                {
                    maiorNota = nota;
                }
            if( nota < menorNota)
                {
                    menorNota = nota;
                }
            soma += nota;
        }
        printf(" a media eh: %f", (soma -(maiorNota + menorNota))/4);
    return 0;
}
