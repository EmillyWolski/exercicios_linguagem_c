#include <stdio.h>

int main(){

    int numero;
    printf("\n---- EXERCICIO 6: dia da semana ----\n\n");

    printf("Informe um numero entre 1 e 7:\n");
    scanf("%d", &numero);

    switch (numero){
    case 1:
        printf("Segunda-feira");
        break;
    case 2:
        printf("Terca-feira");
        break;
    case 3:
        printf("Quarta-feira");
        break;
    case 4:
        printf("Quinta-feira");
        break;
    case 5:
        printf("Sexta-feira");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
        printf("Informe um valor valido.");
        break;
    }

    return 0;
}