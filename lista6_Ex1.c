#include<stdio.h>


int main ()
{
    int i, numero;
    float soma, quantidade;
    soma = 0;
    quantidade = 0;
    i = 0;

    while( i < 10)
        {
            printf("Digite um numero ");
            scanf("%d", &numero );
            if(numero <20 )
            {
                soma = numero + soma;
                quantidade ++;
            }
            i++;
        }
    printf("A media dos numeros menores que 20 eh %f ", soma/quantidade);




    return 0;
}
