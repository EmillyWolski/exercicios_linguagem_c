#include <stdio.h>

int main(){

    int valor1, valor2, *ponteiro1, *ponteiro2;

    printf("---- Troca de valores ----\n");

    printf("\nInforme o valor 1:\n");
    scanf("%d", &valor1);

    printf("\nInforme o valor 2:\n");
    scanf("%d", &valor2);

    ponteiro1 = &valor2;
    ponteiro2 = &valor1;

    printf("\nValores trocados:\nValor 1 atual: %d\nValor 2 atual: %d", *ponteiro1, *ponteiro2);

    return 0;
}