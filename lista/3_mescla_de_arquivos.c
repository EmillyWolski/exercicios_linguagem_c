#include <stdio.h>

int main() {
    char nomeArquivo1[100], nomeArquivo2[100], nomeArquivo3[100];

    // Solicita ao usuário o nome dos dois arquivos
    printf("--- Todos os nomes de arquivos devem ser informados com extencao ---\n");
    printf("Digite o nome do primeiro arquivo: ");
    scanf("%s", nomeArquivo1);

    printf("Digite o nome do segundo arquivo: ");
    scanf("%s", nomeArquivo2);

    // Abre os dois arquivos para leitura
    FILE *arquivo1 = fopen(nomeArquivo1, "r");
    FILE *arquivo2 = fopen(nomeArquivo2, "r");

    // Verifica se os arquivos foram abertos corretamente
    if (arquivo1 == NULL || arquivo2 == NULL) {
        fprintf(stderr, "Erro ao abrir um dos arquivos.\n");
        return 1;
    }

    // Cria o nome do terceiro arquivo
    printf("Digite o nome do terceiro arquivo: ");
    scanf("%s", nomeArquivo3);

    // Abre o terceiro arquivo para escrita
    FILE *arquivo3 = fopen(nomeArquivo3, "w");

    // Verifica se o terceiro arquivo foi aberto corretamente
    if (arquivo3 == NULL) {
        fprintf(stderr, "Erro ao criar o terceiro arquivo.\n");
        return 1;
    }

    int caractere;

    // Copia o conteúdo do primeiro arquivo para o terceiro
    while ((caractere = fgetc(arquivo1)) != EOF) {
        fputc(caractere, arquivo3);
    }

    // Adiciona uma nova linha entre os conteúdos
    fputc('\n', arquivo3);

    // Copia o conteúdo do segundo arquivo para o terceiro
    while ((caractere = fgetc(arquivo2)) != EOF) {
        fputc(caractere, arquivo3);
    }

    // Fecha os arquivos
    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    printf("Conteudo dos arquivos foi concatenado com sucesso.\n");

    return 0;
}