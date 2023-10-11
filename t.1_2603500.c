/* Leonardo Scapin Dias */
#include <stdio.h>
#include "trabalho1.h"
#include <math.h>
#include <float.h>

int calculaInterseccao(int n_retangulos)  {
    int i, xSE, ySE,xID, yID, novoXSE, novoYSE,novoXID, novoYID;
    /* inicializo o primeiro  retangulo*/
     xSE = pegaXSE(0);
     ySE = pegaYSE(0);
     xID = pegaXID(0);
     yID = pegaYID(0);
    /* loop para verificar todos os outros retangulos*/
    for ( i = 1; i < n_retangulos; i++) {
        int novoXSE = pegaXSE(i);
        int novoYSE = pegaYSE(i);
        int novoXID = pegaXID(i);
        int novoYID = pegaYID(i);

       /* De modo din�mico seto as coordenadas do ret�ngulo de intersec��o nas  v�riaveis das coordenadas que foram inicializadas fora do loop, assim ficando como intersec��o*/
        if (novoXSE > xSE)
            xSE = novoXSE;
        if (novoYSE < ySE)
            ySE = novoYSE;
        if (novoXID < xID)
            xID = novoXID;
        if (novoYID > yID)
            yID = novoYID;

        /* Verifico se h� intersec��o, caso n�o,  encerro o programa. */
        if (xSE >= xID || ySE <= yID) {
            return 0;
        }
    }
        /*   retorna o valor da intersec��o, se houver. */
    return (xID - xSE) * (ySE - yID);
}


unsigned int encontraParMaisProximo (int n_retangulos)
{
  int i, j,indice_i = 0, indice_j = 0;
  /*  Variaveis com ponto flutuante, note que inicializo menor dist�nca com o maximo, para que a vari�vel receba qualquer valor menor poss�vel*/
  float XSEi, YSEi, XIDi, YIDi, centroxi, centroyi, XSEj, YSEj, XIDj, YIDj, centroxj, centroyj,menorDistancia = FLT_MAX, distancia;
     /* Loop para percorrer todos os  retangulos na posi��o I */
    for (i = 0; i < n_retangulos; i++)
    {

        XSEi = pegaXSE(i);
        YSEi = pegaYSE(i);
        XIDi = pegaXID(i);
        YIDi = pegaYID(i);
        /*  Calcula o centro da retangulo na posi��o i */
        centroxi = (XSEi + XIDi) / 2.0;
        centroyi = (YSEi + YIDi) / 2.0;
    /* loop para percorrer todos os retangulos na posi��o J, e comparar com o da atual posi��o i, j � sempre inicializado um valor depois de i, para que assim o retangulo presente no valor I seja comparado com todos os outros que o sucedem */
        for (j = i + 1; j < n_retangulos; j++)
        {
            XSEj = pegaXSE(j);
            YSEj = pegaYSE(j);
            XIDj = pegaXID(j);
            YIDj = pegaYID(j);
            /* Calcula o centro dos retangulos na posi��o J*/
            centroxj = (XSEj + XIDj) / 2.0;
            centroyj = (YSEj + YIDj) / 2.0;
            /* calcula a distancia atual do centro do retangulo J com o centro do retangulo i*/
             distancia = sqrt(pow(centroxj - centroxi, 2) + pow(centroyj - centroyi, 2));
            /* Seta a menor dist�ncia e diz quais retangulos que possuem ela, sendo que i � o de menor indice e J o de maior*/
            if (distancia < menorDistancia)
            {
                menorDistancia = distancia;
                indice_i = i;
                indice_j = j;
            }
        }
    }
    /* retorna os valores convertidos para bin�rios com os mais significativos sendo  a posi��o do menor retangulo  */
    return (indice_i << 16) | indice_j;
}








