#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO_BUFFER 1024

int main() {
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    FILE *arquivoEntrada, *arquivoSaida;

    // Solicitar o nome do arquivo de entrada
    printf("Digite o nome do arquivo CSV de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    // Solicitar o nome do arquivo de saída
    printf("Digite o nome do arquivo de saida (TSV): ");
    scanf("%s", nomeArquivoSaida);

    // Abrir o arquivo de entrada para leitura
    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    // Abrir o arquivo de saída para escrita
    arquivoSaida = fopen(nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        perror("Erro ao abrir o arquivo de saida");
        fclose(arquivoEntrada);
        return 1;
    }

    char buffer[TAMANHO_BUFFER];

    // Ler cada linha do arquivo de entrada
    while (fgets(buffer, TAMANHO_BUFFER, arquivoEntrada) != NULL) {
        // Substituir vírgulas por tabulações
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (buffer[i] == ',') {
                buffer[i] = '\t';
            } else if (buffer[i] == '\t') {

                // Substituir tabulações internas por 4 espaços em branco
                for (int j = i; j < i + 4; j++) {
                    buffer[j] = ' ';
                }
            }
        }

        // Escrever a linha no arquivo de saída
        fprintf(arquivoSaida, "%s", buffer);
    }


    // while (fgets(buffer, TAMANHO_BUFFER, arquivoEntrada) != NULL): Este loop while lê uma linha do arquivo de entrada (arquivoEntrada) e armazena essa linha no array de caracteres buffer usando a função fgets. O loop continua até que a função fgets retorne NULL, indicando que não há mais linhas para ler.

    // for (int i = 0; buffer[i] != '\0'; i++): Este loop for percorre cada caractere da linha lida (armazenada em buffer) até encontrar o caractere nulo ('\0'), que marca o final da string.

    // if (buffer[i] == ','): Dentro do loop, há uma verificação condicional que verifica se o caractere atual é uma vírgula.

    // Se for uma vírgula, o caractere é substituído por uma tabulação ('\t'). Isso é feito para converter o formato CSV (Comma-Separated Values) para um formato TSV (Tab-Separated Values).
    // else if (buffer[i] == '\t'): Se o caractere não for uma vírgula, a condição verifica se é uma tabulação ('\t').

    // Se for uma tabulação, há um segundo loop for interno que substitui essa tabulação e as três tabulações seguintes por quatro espaços em branco. Isso é feito para garantir que qualquer tabulação interna seja substituída por quatro espaços em branco.


    // Fechar os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Conversão concluida com sucesso!\n");

    return 0;
}
