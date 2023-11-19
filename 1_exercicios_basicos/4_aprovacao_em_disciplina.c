#include <stdio.h>

int main(){

    char disciplina[50];
    int nota;

    printf("\n---- EXERCICIO 4: aprovacao em disciplina ----\n\n");

    printf("Informe o nome da disciplina:\n");
    gets(disciplina);

    printf("\nInforme a nota em %s:\n", disciplina);
    scanf("%d", &nota);

    if(nota >= 6){
        printf("\nAluno(a) aprovado(a)!");
    }else{
        printf("\nAluno(a) reprovado(a).");
    }
    return 0;
}