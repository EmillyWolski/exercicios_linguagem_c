// PONTEIRO
// É uma variável que só armazena endereço de memória

#include <stdio.h>

int main(){

    int num = 10;
    int *p; // ponteiro para uma região de memória que guarda um valor inteiro
    p = &num; //p está recebendo o endereço de memória de num

    printf("Valor de num: %d\n", num);
    printf("Endereco de num: %p\n", &num); //%p mostra o endereco em conjunto com &

    printf("\nValor de p: %p\n", p);
    printf("Endereco de p: %p\n", &p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
}