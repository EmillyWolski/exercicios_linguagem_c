#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Uso: %s <arquivo_texto> <arquivo_indice> <numero_linha>\n", argv[0]);
        return 1;
    }

    char *nomeArquivoTexto = argv[1];
    char *nomeArquivoIndice = argv[2];
    int numeroLinhaDesejada = atoi(argv[3]);

    FILE *arquivoIndice = fopen(nomeArquivoIndice, "r");
    if (arquivoIndice == NULL) {
        perror("Erro ao abrir o arquivo de índice");
        return 1;
    }

    // Localizar o deslocamento da linha desejada no arquivo de índice
    int deslocamento = 0;
    int numeroLinhaAtual = 1;

    while (fscanf(arquivoIndice, "%d", &deslocamento) != EOF && numeroLinhaAtual < numeroLinhaDesejada) {
        // Avançar para a próxima linha no arquivo de índice
        fseek(arquivoIndice, 1, SEEK_CUR);  // Ignorar o caractere '\n'
        numeroLinhaAtual++;
    }

    fclose(arquivoIndice);

    // Abrir o arquivo original para leitura
    FILE *arquivoTexto = fopen(nomeArquivoTexto, "r");
    if (arquivoTexto == NULL) {
        perror("Erro ao abrir o arquivo de texto");
        return 1;
    }

    // Mover para a posição desejada no arquivo original
    fseek(arquivoTexto, deslocamento, SEEK_SET);

    // Ler a linha desejada
    char linha[1024];
    if (fgets(linha, sizeof(linha), arquivoTexto) != NULL) {
        printf("Linha %d: %s", numeroLinhaDesejada, linha);
    } else {
        fprintf(stderr, "Erro ao ler a linha do arquivo de texto\n");
    }

    // Fechar os arquivos
    fclose(arquivoTexto);

    return 0;
}
