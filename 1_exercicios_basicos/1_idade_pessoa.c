#include <stdio.h>
#include <stdlib.h>

int main(){

    int ano_nascimento, ano_atual, idade_atual, idade_2030;

    printf("\n---- EXERCICIO 1: idade ----\n\n");
    
    printf("Informe seu ano de nascimento:\n");
    scanf("%d", &ano_nascimento);

    printf("\nInforme o ano atual:\n");
    scanf("%d", &ano_atual);

    idade_atual = ano_atual - ano_nascimento;
    idade_2030 = 2030 - ano_nascimento;

    printf("\nIdade atual: %d. Idade em 2030: %d", idade_atual, idade_2030);

    return 0;
}