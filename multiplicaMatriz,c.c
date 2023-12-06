#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#define M 3
#define N 2


int main ()
{
    srand(time(0));
    int i, j, matriz1[M][N], matriz2[N][M], matrizResult[2][2], soma=0;

    for( i = 0; i<M;i++)
    {
        for(j =0; j< N; j++)
        matriz1[i][j] = rand() %10;
    }

    int i, j, matriz1[M][N], matriz2[N][M], matrizResult[2][2];

    for( i = 0; i<N;i++)
    {
        for(j =0; j< M; j++)
        matriz1[i][j] = rand() %10;
    }


       for (i = 0; i < M; i++) {
        for (j = 0; j < M; j++) {
            for (k = 0; k < N; k++) {
                matrizResult[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}
