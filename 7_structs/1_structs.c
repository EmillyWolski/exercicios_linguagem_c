// Como criar novos tipos de dados com typedef struct

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct
typedef struct {
    
    int idade;
    char sexo;
    char nome[100];

} Pessoa;


int main(){

    Pessoa pessoa1;

    // Atribuindo valor às variáveis:
    pessoa1.idade = 21;
    pessoa1.sexo = 'F';
    
    // Vamos usar a strcpy() para copiar uma string
    // strcpy(variavelOndeVaiSerSalvaAInformacao, variavelDeOndeVouCopiarOTexto OU "oTextoQueQueremosSalvar") 

    strcpy(pessoa1.nome, "Maria");
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

    return 0;
}