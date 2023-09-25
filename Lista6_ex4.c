#include<stdio.h>

 int main()
 {
     int soma, numero, i;
     printf("Digite um numero para verificar se ele eh perfeito");
     scanf("%d", &numero);

     soma = 0 ;

     for(i= 1  ; i< numero; i++)
     {
         if(numero%i == 0)
         {
             soma += i;
         }
     }
     if(soma == numero)
        {
            printf("numero perfeito");
        }
     else
        {
            printf("Numero não perfeito %d", soma);
        }

     return 0;
 }

