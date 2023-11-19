#include <stdio.h>
#include <stdlib.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;

    // Solicitar o nome do arquivo
    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    // Abrir o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    double total = 0.0;  // Variável para armazenar o total da compra
    char produto[100];
    double preco;

    // Ler cada linha do arquivo e calcular o total da compra
    // Lê dados de um arquivo de acordo com um formato específico (string para o nome do produto e float(double) para o valor)
    // O loop while continua enquanto fscanf não atingir o final do arquivo (!= EOF). O valor EOF (End of File) é uma constante que indica o fim do arquivo.

    while (fscanf(arquivo, "%s %lf", produto, &preco) != EOF) {
        printf("Produto: %s, Preco: R$%.2lf\n", produto, preco); 
        total += preco; 
        //adicionando o preço do produto atual à variável total
    }

    // Fechar o arquivo
    fclose(arquivo);

    // Exibir o total da compra
    printf("\nTotal da compra: R$%.2lf\n", total);

    return 0;
}

