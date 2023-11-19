#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverterLinha(char linha[]) {
    int tamanho = strlen(linha);
    for (int i = 0; i < tamanho / 2; i++) { //loop que percorre metade da string
        char temp = linha[i];
        linha[i] = linha[tamanho - i - 1]; //Substitui o caractere na posição atual i pelo caractere simétrico no final da string.
        linha[tamanho - i - 1] = temp; //Substitui o caractere no final da string pelo caractere armazenado temporariamente em temp. Isso completa a troca simétrica.
    }
}

int main() {
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];

    // Solicitar o nome do arquivo de entrada
    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);

    // Solicitar o nome do arquivo de saída
    printf("Digite o nome do arquivo de saida: ");
    scanf("%s", nomeArquivoSaida);

    // Abrir o arquivo de entrada para leitura
    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    // Abrir o arquivo de saída para escrita
    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        perror("Erro ao abrir o arquivo de saida");
        fclose(arquivoEntrada);
        return 1;
    }

    char linha[91]; // Assume que cada linha tem no máximo 90 caracteres

    // Ler cada linha do arquivo de entrada, inverter e escrever no arquivo de saída
    while (fgets(linha, sizeof(linha), arquivoEntrada) != NULL) {
        inverterLinha(linha);
        fprintf(arquivoSaida, "%s", linha);
    }

    // Fechar os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo invertido com sucesso!\n");

    return 0;
}
