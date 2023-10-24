 #include <stdio.h>
 #define N 9
 void inverteString(char* vetor )
 {
     int i, tamanho =0, auxiliar;

     while(vetor[tamanho]!='\0')
    {
        tamanho ++;
    }
    for(i =0; i< tamanho/2; i++)
    {
        auxiliar = vetor[i];
        vetor[i]= vetor[tamanho - i- 1];
        vetor[tamanho - i - 1] = auxiliar;
    }
 }

 int main()
 {
     int i;
     char vetor[N];

     scanf("%s", vetor);

     inverteString(vetor);

     for(i = 0; i< N; i++)
    {
        printf("%c", vetor[i]);
    }
    return 0;
 }
