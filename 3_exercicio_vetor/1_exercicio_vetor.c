#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, tamanho_vetor = 0, vetor[tamanho_vetor];
    printf("\n------ Dados em vetor ------\n");
    printf("\nInforme o tamanho do vetor:\n");
    scanf("%d", &tamanho_vetor);

    for(i = 0; i < tamanho_vetor; i++){
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nValores no vetor:\n");
    for(i = 0; i < tamanho_vetor; i++){
        printf("Posicao %d: %d\n", i, vetor[i]);
    }
    return 0;
}