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

       /* De modo dinâmico seto as coordenadas do retângulo de intersecção nas  váriaveis das coordenadas que foram inicializadas fora do loop, assim ficando como intersecção*/
        if (novoXSE > xSE)
            xSE = novoXSE;
        if (novoYSE < ySE)
            ySE = novoYSE;
        if (novoXID < xID)
            xID = novoXID;
        if (novoYID > yID)
            yID = novoYID;

        /* Verifico se há intersecção, caso não,  encerro o programa. */
        if (xSE >= xID || ySE <= yID) {
            return 0;
        }
    }
        /*   retorna o valor da intersecção, se houver. */
    return (xID - xSE) * (ySE - yID);
}


unsigned int encontraParMaisProximo (int n_retangulos)
{
  int i, j,indice_i = 0, indice_j = 0;
  /*  Variaveis com ponto flutuante, note que inicializo menor distânca com o maximo, para que a variável receba qualquer valor menor possível*/
  float XSEi, YSEi, XIDi, YIDi, centroxi, centroyi, XSEj, YSEj, XIDj, YIDj, centroxj, centroyj,menorDistancia = FLT_MAX, distancia;
     /* Loop para percorrer todos os  retangulos na posição I */
    for (i = 0; i < n_retangulos; i++)
    {

        XSEi = pegaXSE(i);
        YSEi = pegaYSE(i);
        XIDi = pegaXID(i);
        YIDi = pegaYID(i);
        /*  Calcula o centro da retangulo na posição i */
        centroxi = (XSEi + XIDi) / 2.0;
        centroyi = (YSEi + YIDi) / 2.0;
    /* loop para percorrer todos os retangulos na posição J, e comparar com o da atual posição i, j é sempre inicializado um valor depois de i, para que assim o retangulo presente no valor I seja comparado com todos os outros que o sucedem */
        for (j = i + 1; j < n_retangulos; j++)
        {
            XSEj = pegaXSE(j);
            YSEj = pegaYSE(j);
            XIDj = pegaXID(j);
            YIDj = pegaYID(j);
            /* Calcula o centro dos retangulos na posição J*/
            centroxj = (XSEj + XIDj) / 2.0;
            centroyj = (YSEj + YIDj) / 2.0;
            /* calcula a distancia atual do centro do retangulo J com o centro do retangulo i*/
             distancia = sqrt(pow(centroxj - centroxi, 2) + pow(centroyj - centroyi, 2));
            /* Seta a menor distância e diz quais retangulos que possuem ela, sendo que i é o de menor indice e J o de maior*/
            if (distancia < menorDistancia)
            {
                menorDistancia = distancia;
                indice_i = i;
                indice_j = j;
            }
        }
    }
    /* retorna os valores convertidos para binários com os mais significativos sendo  a posição do menor retangulo  */
    return (indice_i << 16) | indice_j;
}








