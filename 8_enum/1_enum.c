// ENUM é uma forma de criarmos uma coleção de elementos para que nossos dados fiquem mais legíveis

// É um tipo de dado definido pelo usuário que define uma variável que vai receber apenas um conjunto restrito de valores. Na realidade, um enum é um conjunto de valores inteiros representados por identificadores.

// ENUM
enum mes {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};


// EXEMPLO DE FUNÇÃO

// enum mes nome_da_funcao(enum mes m){
//     printf("Funcao ENUM teste. Valor: %d\n", m);
//     return m;
// }


#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao;

    printf("\nDigite um numero do mes:\n");
    scanf("%d", &opcao);

    switch (opcao){

    case Janeiro:
        printf("\nJaneiro.");
        break;
    case Fevereiro:
        printf("\nFevereiro.");
        break;
    case Marco:
        printf("\nMarco.");
        break;
    case Abril:
        printf("\nAbril.");
        break;
    case Maio:
        printf("\nMaio.");
        break;
    case Junho:
        printf("\nJunho.");
        break;
    case Julho:
        printf("\nJulho.");
        break;
    case Agosto:
        printf("\nAgosto.");
        break;
    case Setembro:
        printf("\nSetembro.");
        break;
    case Outubro:
        printf("\nOutrubro.");
        break;
    case Novembro:
        printf("\nNovembro.");
        break;
    case Dezembro:
        printf("\nDezembro.");
        break;
    default:
        printf("\nopcao invalida.");
        break;
    }

    //printf("Em MAIN: %d\n", nome_da_funcao(Janeiro));
    return 0;
}

// Versão 2

#include <stdio.h>
#include <stdlib.h>

// ENUM
enum mes {Janeiro = 1, Fevereiro, Marco, Abril, Maio, Junho, Julho, Agosto, Setembro, Outubro, Novembro, Dezembro};
const char *nomes_meses[] = {"", "Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

int main() {
    int opcao;

    printf("\nDigite um numero do mes:\n");
    scanf("%d", &opcao);

    if (opcao >= Janeiro && opcao <= Dezembro) {
        printf("\n%s.\n", nomes_meses[opcao]);
    } else {
        printf("\nopcao invalida.\n");
    }

    return 0;
}
