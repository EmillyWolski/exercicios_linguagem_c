#include <stdio.h>

int main() {
	
    FILE *file;
    char nome_arquivo[] = "notas.txt";
    char nome[50];
    int nota1, nota2, nota3;
    float media;

    file = fopen(nome_arquivo, "rt");

    if (file == NULL) {
        perror("Erro ao abrir o arquivo notas.txt");
        return 1;
    }

    printf("Nome do aluno e media:\n");

    while (fscanf(file, "%s %d %d %d", nome, &nota1, &nota2, &nota3) != EOF){
    	
    	//calcula a media das notas
    	media = (nota1 + nota2 + nota3) / 3.0;
    	
    	//imprime o nome do aluno e a media
    	printf("%s: %2.f\n", nome, media);
	}
	
	fclose(file);
	
	return 0;
	
}


