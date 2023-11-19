#include <stdio.h>

int main() {
    char nomeArquivo[100];

    // Solicita ao usuário o nome do arquivo
    printf("Digite o nome do arquivo com a extenção: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo para leitura
    FILE *arquivo = fopen(nomeArquivo, "r");

    // Verifica se o arquivo foi aberto corretamente
    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }

    int contLinhas = 0;
    char caractere;

    // Conta o número de linhas no arquivo
    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            contLinhas++;
        }
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Exibe o número de linhas
    printf("O arquivo possui %d linha(s).\n", contLinhas);

    return 0;
}