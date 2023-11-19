#include <stdio.h>
#include <stdlib.h>

int main(){

    int *ponteiro; //ponteiro para o vetor
    int i, tamanho_vetor;

    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &tamanho_vetor);

    // Aloca memória
    ponteiro = (int *)malloc(tamanho_vetor * sizeof(int));

    if(ponteiro == NULL){
        printf("\nAlocacao falhou.");
        system("pause");
        exit(1);
    }

    // Solicitando os dados pára o vetor chamado "ponteiro"
    for(i = 0; i < tamanho_vetor; i++){
        printf("Digie o numero para o indice [%d]: \n", i);
        scanf("%d", &ponteiro[i]);
    }
    printf("\n");

    // Percorrendo e mostrando os elementos
    for(i = 0; i < tamanho_vetor; i++){
        printf("Valor da posicao [%d]: %d\n", i, ponteiro[i]);
    }

    printf("\n");
    system("pause");
    exit(1);

    return 0;
}