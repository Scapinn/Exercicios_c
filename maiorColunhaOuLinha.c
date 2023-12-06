#include <stdio.h>
#define N_LINHAS 4
#define N_COLUNAS 1

int main()
{
    int  campo [N_LINHAS][N_COLUNAS] = {{100},
        {110},
        {0},
        {100}
    }
    , maior =0, soma=0, i, j;


    for(i = 0; i< N_LINHAS; i++)
    {
        for( j =0 ; j <  N_COLUNAS; j ++)
        {
            soma += campo[i][j];
        }
        if(soma > maior)
            maior = soma;
        soma =0 ;
    }


    for(j = 0; j<N_COLUNAS; j++)
    {
        for( i =0 ; i<  N_LINHAS; i ++)
        {
            soma += campo[i][j];
        }
        if(soma > maior)
            maior = soma;
        soma =0 ;
    }

    printf("%d", maior);
}
