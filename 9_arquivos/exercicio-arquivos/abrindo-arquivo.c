#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main() {
	FILE *file;
	char symbol;
	int i, j;
	
	// Abre o arquivo EGA.CPI em modo bin�rio
	file = fopen("EGA.CPI", "rb");
	
	if (file == NULL) {
		perror("Erro ao abrir o arquivo EGA.CPI");
		return 1;
	}
	
	// Desloca para a posi��o 48
	fseek(file, 48, SEEK_SET);
	
	// L� 16 s�mbolos
	for (i = 0; i < 16; i++) {
		fread(&symbol, sizeof(char), 1, file);
	
		// Avalia o s�mbolo bit a bit e imprime o resultado
		for (j = 7; j >= 0; j--) {
			if ((symbol >> j) & 1) {
				putchar(219); // Imprime o s�mbolo 219 (bloco cheio) para 1
		} 	else {
				putchar(32); // Imprime o s�mbolo 32 (espa�o) para 0
		}
	}
	
		// Adiciona uma quebra de linha ap�s cada s�mbolo
		putchar('\n');
	
		// Espera por uma tecla para continuar
		getch();
	}
	
	// Fecha o arquivo
	fclose(file);
	
	return 0;
}


