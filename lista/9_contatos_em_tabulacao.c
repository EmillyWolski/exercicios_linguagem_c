#include <stdio.h>
#include <string.h>

int main() {
    FILE *arquivo;
    struct Contato {
        char nome[30];        // Tamanho máximo para o nome
        char telefone[15];    // Tamanho máximo para o telefone
    };
    struct Contato contato;
    char nomeArquivo[50];

    // Solicita ao usuário o nome do arquivo
    printf("Digite o nome do arquivo para o cadastro: ");
    scanf("%s", nomeArquivo);

    // Abre o arquivo para escrita
    arquivo = fopen(nomeArquivo, "w");

    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao criar o arquivo.\n");
        return 1;
    }

    // Solicita ao usuário nomes e telefones para cadastro
    while (1) {
        // Solicita o nome
        printf("Digite o nome: ");
        scanf("%s", contato.nome);

        // Solicita o telefone
        printf("Digite o telefone (ou 0 para finalizar): ");
        scanf("%s", contato.telefone);

        // Verifica se deve finalizar a entrada
        if (strcmp(contato.telefone, "0") == 0) {
            break;
        }

        // Escreve o contato no arquivo usando formato delimitado por tabulação
        fprintf(arquivo, "%s\t%s\n", contato.nome, contato.telefone);
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Cadastro concluído. O arquivo %s foi criado.\n", nomeArquivo);

    return 0;
}