#include <stdio.h>
#define N 8
int main()
{
    char gabarito[81], respostas[81];
    int i,acertos=0;
    scanf("%s", respostas);

    scanf("%s", gabarito);

    for(i=0; i< N; i++)
    {
        if(gabarito[i]== respostas[i])
        acertos++;
    }
    printf("%d", acertos);
}
