#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_BUFFER 1024

int main(int argc, char *argv[]) {
    // Verificar se há argumentos suficientes
    if (argc != 3) {
        fprintf(stderr, "\nUso: %s <string> <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    char *stringProcurada = argv[1];
    char *nomeArquivo = argv[2];

    FILE *arquivo = fopen(nomeArquivo, "r");

    // Verificar se o arquivo pode ser aberto
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char buffer[TAMANHO_BUFFER];
    int numeroLinha = 1;

    // Ler cada linha do arquivo
    while (fgets(buffer, TAMANHO_BUFFER, arquivo) != NULL) {
        // Verificar se a string ocorre na linha
        if (strstr(buffer, stringProcurada) != NULL) {
            printf("Linha %d: %s", numeroLinha, buffer);
        }

        numeroLinha++;
    }

    // Fechar o arquivo
    fclose(arquivo);

    return 0;
}
