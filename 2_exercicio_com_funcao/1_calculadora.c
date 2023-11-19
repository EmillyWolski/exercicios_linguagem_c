#include <stdio.h>

//Funções
void solicita_valores(int *valor1, int *valor2) {
    printf("\nInforme o primeiro valor:\n");
    scanf("%d", valor1);

    printf("Informe o segundo valor:\n");
    scanf("%d", valor2);
}


int somar(int valor1, int valor2) {
    return valor1 + valor2;
}

int subtrair(int valor1, int valor2) {
    return valor1 - valor2;
}

int multiplicar(int valor1, int valor2) {
    return valor1 * valor2;
}

int dividir(int valor1, int valor2) {
    return valor1 / valor2;
}


//Programa principal
int main(){

    int operacao, op_soma, op_subtracao, op_multiplicacao, op_divisao, resultado, valor1, valor2;

    printf("\n---- Calculadora | 4 operacoes basicas ----\n\n");

    printf("Informe um a operacao que deseja realizar entre dois numeros:\n");
    printf("1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        solicita_valores(&valor1, &valor2);
        resultado = somar(valor1, valor2);
        printf("Resultado: %d", resultado);
        break;
    case 2:
        solicita_valores(&valor1, &valor2);
        resultado = subtrair(valor1, valor2);
        printf("Resultado: %d", resultado);
        break;
    case 3:
        solicita_valores(&valor1, &valor2);
        resultado = multiplicar(valor1, valor2);
        printf("Resultado: %d", resultado);
        break;
    case 4:
        solicita_valores(&valor1, &valor2);
        resultado = dividir(valor1, valor2);
        printf("Resultado: %d", resultado);
        break;
    default:
        //printf("\nOpcao invalida.");
        break;
    }

    return 0;
}