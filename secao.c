#include <stdio.h>
#define TAM 100

int main() {
    int i, num, vetor[TAM], posicao, total = 0, media;
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        scanf("%d", &vetor[i]);
        total += vetor[i];
    }

    media = total / 2;
    total = 0;

    for (i = 0; i < num; i++) {
        total += vetor[i];
        if (total > media) {
            posicao = i;
            break;
        }
    }
    printf(" %d\n", posicao);

    return 0;
}

