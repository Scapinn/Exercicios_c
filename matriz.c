#include <stdio.h>
#define L 3
#define C 3
#include <stdio.h>

#define L 3 // Defini��o do n�mero de linhas
#define C 3 // Defini��o do n�mero de colunas

int main() {
    int matriz[L][C];
    int i, j = 0, contador = 1;

    while (contador <= L * C) {
        for (i = 0; i < L; i++) {
            matriz[i][j] = contador;
            contador++;
        }
        j++;

        if (contador <= L * C) {
            for (i = L - 1; i >= 0; i--) {
                matriz[i][j] = contador;
                contador++;
            }
            j++;
        }
    }

    // Impress�o da matriz
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}


