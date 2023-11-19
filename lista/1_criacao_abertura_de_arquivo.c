#include <stdio.h>

int main() {

    // a) Criar/abrir um arquivo texto de nome "arq.txt"

    FILE *arquivo = fopen("arq.txt", "w+"); //"w+" é usado para abrir um arquivo para escrita e leitura. Se o arquivo não existir, ele será criado.

    if (arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.\n"); //Ao usar stderr você estamos enviando uma mensagem formatada para a saída de erro padrão. 
        return 1;
    }

    char caractere;

    // b) Permitir que o usuário entre com diversos caracteres no arquivo
    printf("Digite caracteres no arquivo. Digite '0' para encerrar:\n");
    while (1) {
        // Solicita ao usuário para digitar um caractere
        printf("Digite um caractere: ");
        
        // Lê o caractere digitado pelo usuário
        scanf(" %c", &caractere);

        // Verifica se o caractere é '0' para encerrar o loop
        if (caractere == '0') {
            break; // Sai do loop se o caractere for '0'
        }

        // Escreve o caractere no arquivo
        fputc(caractere, arquivo);
    }

    // c) Reiniciar o arquivo, fazendo o ponteiro apontar para seu início
    rewind(arquivo);

    // d) Ler o arquivo caractere por caractere e escrever na tela
    printf("\nConteudo do arquivo:\n");
    while ((caractere = fgetc(arquivo)) != EOF) {
        // Imprime cada caractere na tela
        printf("%c", caractere);
    }

    // Fechar o arquivo
    fclose(arquivo);

    return 0;
}