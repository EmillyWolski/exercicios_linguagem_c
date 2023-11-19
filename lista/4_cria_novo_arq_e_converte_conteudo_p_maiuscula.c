#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];

    // Solicita ao usuário o nome do arquivo de entrada
    printf("--- Todos os nomes de arquivos devem ser informados com extensao ---\n");
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    // Solicita ao usuário o nome do arquivo de saída
    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");

    if (arquivoEntrada == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoSaida == NULL) {
        fprintf(stderr, "Erro ao criar o arquivo de saída.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    int caractere;

    while ((caractere = fgetc(arquivoEntrada)) != EOF) {
        // Converte caracteres minúsculos para maiúsculos
        fputc(toupper(caractere), arquivoSaida);
    }

    // Fecha os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Conteudo do arquivo foi convertido com sucesso.\n");

    return 0;
}