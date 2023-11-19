#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAMANHO_NOME 41 // 40 caracteres para o nome da cidade + 1 para o caractere nulo

int main() {
    setlocale(LC_NUMERIC, "en_US.UTF-8"); // Configuração para tratar números com ponto como separador de milhares

    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    FILE *arquivoEntrada, *arquivoSaida;

    // Solicitar o nome do arquivo de entrada
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    // Solicitar o nome do arquivo de saída
    printf("Digite o nome do arquivo de saida: ");
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

    char nomeCidade[TAMANHO_NOME];
    double habitantes, maxHabitantes = 0;
    char cidadeMaisPopulosa[TAMANHO_NOME];

    // Ler cada linha do arquivo de entrada
    while (fscanf(arquivoEntrada, "%40s %lf", nomeCidade, &habitantes) == 2) {
        // Verificar se o número de habitantes é maior que o máximo atual
        if (habitantes > maxHabitantes) {
            maxHabitantes = habitantes;
            strcpy(cidadeMaisPopulosa, nomeCidade);
        }
    }

    // Escrever no arquivo de saída a cidade mais populosa e o número de habitantes
    fprintf(arquivoSaida, "Cidade mais populosa: %s, Habitantes: %lf\n", cidadeMaisPopulosa, maxHabitantes);

    // Fechar os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Processamento concluido com sucesso!\n");

    return 0;
}
