#include <stdio.h>

int main(){

    int base, altura, area;

    printf("\n---- EXERCICIO 3: area de um triangulo ----\n\n");

    printf("Informe o valor da base:\n");
    scanf("%d", &base);

    printf("Informe o valor da altura:\n");
    scanf("%d", &altura);

    area = (base * altura) / 2;

    printf("\nAREA: %d", area);

    return 0;
}