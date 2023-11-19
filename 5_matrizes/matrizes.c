// MATRIZES (ARRAYS BIDIMENSIONAIS) => linhas e colunas do mesmo tipo

// É possível acessar os elementos de uma matriz por meio de seus índices (2, um para linha e um para coluna)

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j;
    // criando uma matriz
    int matriz[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // mostrando a matriz
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

