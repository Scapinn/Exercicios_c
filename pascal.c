#include <stdio.h>
#include <stdlib.h>
int** geraTrianguloDePascal (int grau)
{
    int **pascal  , i, j;

    pascal = (int**) malloc(grau *  sizeof(int *));

    for(i= 0; i<grau; i++)
    {
        pascal[i]= (int *) malloc(grau * sizeof(int));
    }

    pascal[0][0] = 1;
    for(i=1 ; i<grau; i++)
    {
        pascal[0][i]=0;
    }

    for(i= 1; i< grau;  i++)
    {
        for(j=0; j< grau; j++)
        {
            if( j== 0)
            {
                pascal[i][j] = pascal[i-1][j];
            }

            else
            {
                pascal[i][j]= pascal[i-1][j] + pascal[i-1][j-1];
            }

        }
    }

    return pascal;

}


int main()
{
    int ** ponteiro, n =10, i,j;

    ponteiro = geraTrianguloDePascal(n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d  ", ponteiro[i][j]);
        }
        printf("\n");
    }

    for(i =0; i< n; i++)
    {
        free(ponteiro[i]);
    }

    free(ponteiro);
    return 0;
}
