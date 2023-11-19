// ALOCAÇÃO DE MEMÓRIA DE FORMA DINÂMICA COM MALLOC (ocorre em execução)

// Retorna um ponteiro para a região de memória alocada ou NULL (se não conseguiu alocar)
// Aloca blocos de memória byte por byte

// Exemplos
#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p; // ponteiro para o vetor
    int i, qtde_elementos;

    // recebendo a qtde de elementos
    printf("Digite a quantidade de elementos do vetor:\n");
    scanf("%d", &qtde_elementos);

    // alocando a memória para o vetor de acordo com a quantidade de elementos do vetor
    p = (int *)(malloc(qtde_elementos * sizeof(int)));

    // (int *) converte o retorno da função em um inteiro, p vira um vetor de inteiros

    // casp mão seja possível alocar memória suficiente, envia mensagem:

    if(p == NULL){
        printf("\nErro de alocacao de memoria.");
        system("pause");
        exit(1);
    }
    printf("\n");

    // recebendo os dados para o vetor p (que já tem seu tam. correto)
    for(i = 0; i < qtde_elementos; i++){
        printf("Digie o numero para o indice [%d]: ", i);
        scanf("%d", &p[i]);
    }
    printf("\n");

    // percorre o vetor mostrando os valores armazenados
    for(i = 0; i < qtde_elementos; i++){
        printf("Valor armazenado no elemento de indice [%d]: %d\n", i, p[i]);
    }
    printf("\n");

    // liberando a memória que foi alocada
    free(p);
    system("pause");
    
    return 0;
}