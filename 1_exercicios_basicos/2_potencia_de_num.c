#include <stdio.h>
#include <math.h>

int main(){

    int num1, num2, resultado;

    printf("\n---- EXERCICIO 2: potencia entre dois numeros ----\n\n");
    
    printf("Informe o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Informe o segundo numero:\n");
    scanf("%d", &num2);

    resultado = pow(num1, num2); // pow(base, expoente)
    printf("\nResultado: %d", resultado);

    return 0;
}