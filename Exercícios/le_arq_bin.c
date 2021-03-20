/**
 *	      @file: le_arq_bin.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

typedef struct{
	char nome[20], dieta[15];
	int tempo_vida, qi;
	float estatura, peso;
} __attribute__ ((packed)) alien_t;

int main(){
	alien_t alien[10];
	FILE *fp = fopen("codificado.bin", "rb");
	int i, n;

	if (fp == NULL){
		printf("Não foi possível abrir o arquivo.\n");
		return 0;
	}

	fread(&n, sizeof(n), 1, fp);
	printf("%d\n", n);

	for (i = 0; i < n; i++){
		fread(alien[i].nome, sizeof(alien[i].nome), 1, fp);
		fread(alien[i].dieta, sizeof(alien[i].dieta), 1, fp);
		fread(&alien[i].tempo_vida, sizeof(alien[i].tempo_vida), 1, fp);
		fread(&alien[i].qi, sizeof(alien[i].qi), 1, fp);
		fread(&alien[i].estatura, sizeof(alien[i].estatura), 1, fp);
		fread(&alien[i].peso, sizeof(alien[i].peso), 1, fp);
		printf("%s %s ", alien[i].nome, alien[i].dieta);
		printf("%d %d ", alien[i].tempo_vida, alien[i].qi);
		printf("%f %f ", alien[i].estatura, alien[i].peso);
		printf("\n\n");
	}

	fclose(fp);

	return 0;
}
