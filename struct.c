#include <stdio.h>
#include <stdlib.h>
typedef struct
{
int largura;
int altura;
unsigned char** dados;
} GSImage;

GSImage* criaGSImage (int largura, int altura)
{
    int** image,i;

    image = (int **) malloc(altura * sizeof(int*));

    for(i=0; i< altura; i++)
    {
        image[i]= (int*)  malloc(largura * sizeof(int));
    }

    return image;
}
