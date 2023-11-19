#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Municipio {
    char uf[3];
    // Adicione mais campos se necessário
};

int contarMunicipios(FILE *arquivo, const char *ufAlvo) {
    char linha[1000];
    struct Municipio municipio;
    int contadorMunicipios = 0;

    while (fgets(linha, sizeof(linha), arquivo) != NULL) { //fgets lê uma linha do arquivo e armazena em linha.
        char *token = strtok(linha, ","); //divide a linha usando a vírgula como delimitador, retornando o primeiro token (substring).
        if (token != NULL) {
            strncpy(municipio.uf, token, sizeof(municipio.uf) - 1); //strncpy é usado para copiar o token (UF) para o campo uf da estrutura Municipio.
            municipio.uf[sizeof(municipio.uf) - 1] = '\0';

            if (strcmp(municipio.uf, ufAlvo) == 0) {
                contadorMunicipios++;
            }
        }
    }

    return contadorMunicipios;
}

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    char ufAlvo[3];

    printf("Digite o nome do arquivo de municípios: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite a UF desejada: ");
    scanf("%s", ufAlvo);

    int numMunicipios = contarMunicipios(arquivo, ufAlvo);
    printf("UF: %s\nNúmero de Municípios: %d\n", ufAlvo, numMunicipios);

    fclose(arquivo);

    return 0;
}