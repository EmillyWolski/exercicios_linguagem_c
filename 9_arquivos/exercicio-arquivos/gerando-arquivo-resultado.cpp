#include <stdio.h>

int main() {
    FILE *entrada, *saida;
    char nome_arquivo_entrada[] = "notas.txt";
    char nome_arquivo_saida[] = "resultado.txt";
    char nome[50];
    int nota1, nota2, nota3;
    float media;

    entrada = fopen(nome_arquivo_entrada, "r");

    if (entrada == NULL) {
        perror("Erro ao abrir o arquivo notas.txt");
        return 1;
    }

    saida = fopen(nome_arquivo_saida, "w");

    if (saida == NULL) {
        perror("Erro ao criar o arquivo resultado.txt");
        fclose(entrada);
        return 1;
    }

    fprintf(saida, "Nome do aluno     Média:\n");

    while (fscanf(entrada, "%s %d %d %d", nome, &nota1, &nota2, &nota3) != EOF) {
        // Calcula a média das notas
        media = (nota1 + nota2 + nota3) / 3.0;

        // Escreve o nome do aluno e a média no arquivo de saída com colunas fixas
        fprintf(saida, "%-20s %.2f\n", nome, media);
    }

    fclose(entrada);
    fclose(saida);

    printf("Médias foram salvas em %s\n", nome_arquivo_saida);

    return 0;
}


