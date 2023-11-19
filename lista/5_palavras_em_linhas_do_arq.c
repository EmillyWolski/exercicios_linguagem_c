#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nomeArquivo[100];
    char palavra[100];

    // Solicita ao usuário o nome do arquivo
    printf("--- O nome do arquivo deve ser informado com a extensao ---\n");
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Solicita ao usuário a palavra a ser procurada
    printf("Digite a palavra a ser procurada: ");
    scanf("%s", palavra);

    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }

    char linha[1000]; //linha é um array de caracteres que armazenará a linha lida do arquivo.
    int numeroLinha = 1;
    int encontrada = 0;

    // fgets lê cada linha do arquivo, sizeof(linha) indica o tamanho máximo da linha que pode ser lida para evitar estouro de buffer.
    while (fgets(linha, sizeof(linha), arquivo) != NULL) { //arquivo é o ponteiro para o arquivo de onde a linha será lida.
        // strstr verifica se a palavra ocorre na linha
        if (strstr(linha, palavra) != NULL) {
            printf("A palavra '%s' ocorre na linha %d: %s", palavra, numeroLinha, linha);
            encontrada = 1;
        }
        numeroLinha++;
    }

    // Se a palavra não foi encontrada em nenhuma linha
    if (!encontrada) {
        printf("A palavra '%s' não foi encontrada no arquivo.\n", palavra);
    }

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}