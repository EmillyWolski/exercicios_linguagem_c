#include <stdio.h>

int main(){

    int numero, i;

    printf("\n---- EXERCICIO 5: contagem regressiva ----\n\n");

    printf("Informe um valor inteiro positivo:\n");
    scanf("%d", &numero);

    for(i = 0; i < numero; i++){
        printf("%d ", numero - i);
    }

    return 0;
}