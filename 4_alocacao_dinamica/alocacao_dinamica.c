// ALOCAÇÃO DE MEMÓRIA DE FORMA DINÂMICA COM MALLOC

// Retorna um ponteiro para a região de memória alocada ou NULL (se não conseguiu alocar)
// Aloca blocos de memória byte por byte

// Exemplos
#include <stdio.h>
#include <stdlib.h>

int main(){

    int *x;
    x = malloc(sizeof(int)); 

    //Verificando se a alocação funcionou
    if(x != NULL){ //poderia ser if(x)
        printf("Alocacao ok.\n");
        //Agora, digamos que queremos atribuir um valor a variável x. x é do tipo ponteiro, então nós vamos alterar o valor do conteúdo apontado por x
        printf("x: %d\n", *x); //retorna o lixo de memória
        *x = 50;
        printf("x: %d\n", *x); 

    }else{
        printf("Alocacao falhou.\n");
    }

    return 0;
}