#include <stdio.h>

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];
    int deslocamento = 0;
    char caractere;

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

    // Ler cada caractere do arquivo de entrada
    while ((caractere = fgetc(arquivoEntrada)) != EOF) {
        // Escrever o deslocamento no arquivo de saída
        fprintf(arquivoSaida, "%d", deslocamento);

        // Escrever o caractere no arquivo de saída
        fputc(caractere, arquivoSaida);

        // Incrementar o deslocamento
        if (caractere == '\n') {
            deslocamento = 0;  // reiniciar o deslocamento no início de uma nova linha
        } else {
            deslocamento++;
        }
    }

    // Fechar os arquivos
    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Processamento concluido com sucesso!\n");

    return 0;
}
