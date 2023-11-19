// AULA 66, 67 e 68 
// Arquivo é uma coleção de bytes armazenados em um dispositivo de armazenamento secundário


// A Linguagem C usa um tipo especial de ponteiro para manipular arquivos:

// é o FILE *nome_ponteiro; 

// Esse ponteiro é quem controla o fluxo de leitura e escrita dentro de um arquivo.


// ### Arquivos texto e binário:
// A linguagem C trabalha com apenas dois tipos de arquivos:

// - **Arquivos texto**: podem ser editados no bloco de notas.
// - **Arquivos binários**: não podem ser editados no  bloco de notas.


// Em arquivos de TEXTO, cada dígito será convertido para seu caractere ASCII, ou seja, 8 bits por dígito.
// Em arquivos BINÁRIOS, os dados são gravados exatamente como estão na memória do computador. Não existe etapa de "conversão" dos dados.
    //Em geral, arquivos menores e com leitura e escrita mais rápidas


// FUNÇÕES PARA ABRIR E FECHAR UM ARQUIVO
// fopen() permite abrir um arquivo em um determinado modo de leitura ou escrita

// Se fopen não conseguir abrir um arquivo, ela irá retornar NULL

#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *fopen(char *nome, char *modo);
    FILE *f;
    f = fopen ("arquivo.text", "w");

    return 0;
}