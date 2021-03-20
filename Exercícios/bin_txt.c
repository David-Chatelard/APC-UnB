/**
 *	      @file: bin_txt.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int segredo;
	char mensagem[101];
} __attribute__ ((packed)) mensagem_secreta;

void decifra(mensagem_secreta *registro){
	int i;
	for (i = 0; i < strlen((*registro).mensagem); i++){
		(*registro).mensagem[i] -= (*registro).segredo;
	}
}

int main(int argc, char **argv) {
	int i = 0;
	char nome_file[100];
	mensagem_secreta registro;
	FILE *frecebe;
	FILE *fcria;

	if (argc < 2){
		printf("Você não digitou argumentos suficientes.\n");
		return 1;
	}

	frecebe = fopen(argv[1], "rb");

	if (frecebe == NULL){
		printf("Não foi possível abrir o arquivo");
		return 1;
	}

	while (fread(&registro, sizeof(registro), 1, frecebe)){
		sprintf(nome_file, "%s-%d.txt", argv[1], i);
		fcria = fopen(nome_file, "wb");
		if (fcria == NULL){
			printf("Não foi possível criar o %dº arquivo.\n", (i+1));
		}
		decifra(&registro);
		fprintf(fcria, "%s\n", registro.mensagem);
		i++;
	}
	/* Validação de entradas:
	   - testar se os argumentos são suficientes
	   - testar se os argumentos são válidos */

	/* Leitura de quantidade indeterminada de registros do arquivo dado.
	 * (veja o que retorna a função fread) */

	/* Escrita de cada mensagem em arquivo texto apropriado.
	 * (veja a função sprintf) */

	fclose(frecebe);
	fclose(fcria);

    return 0;
}
