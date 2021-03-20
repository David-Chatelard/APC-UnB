/**
 *	      @file: cria_arq_bin.c
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
	alien_t alien1 = {"Alie num", "car ne", 80, 30, 1.8, 50.6};
	alien_t alien2 = {"Aliendois", "frango cru", 70, 450, 1.5, 60.7};
	alien_t alien3 = {"Alientres", "peixe", 60, 130, 1.7, 55.4};
	int n = 3;
	FILE *fmensagem = fopen("mensagem.bin", "wb");

	if (fmensagem == NULL){
		printf("Não foi possível criar o arquivo.\n");
		return 0;
	}

	fwrite(&n, sizeof(n), 1, fmensagem);
	
	fwrite(alien1.nome, sizeof(alien1.nome), 1, fmensagem);
	fwrite(alien1.dieta, sizeof(alien1.dieta), 1, fmensagem);
	fwrite(&alien1.tempo_vida, sizeof(alien1.tempo_vida), 1, fmensagem);
	fwrite(&alien1.qi, sizeof(alien1.qi), 1, fmensagem);
	fwrite(&alien1.estatura, sizeof(alien1.estatura), 1, fmensagem);
	fwrite(&alien1.peso, sizeof(alien1.peso), 1, fmensagem);
	fwrite(alien2.nome, sizeof(alien2.nome), 1, fmensagem);
	fwrite(alien2.dieta, sizeof(alien2.dieta), 1, fmensagem);
	fwrite(&alien2.tempo_vida, sizeof(alien2.tempo_vida), 1, fmensagem);
	fwrite(&alien2.qi, sizeof(alien2.qi), 1, fmensagem);
	fwrite(&alien2.estatura, sizeof(alien2.estatura), 1, fmensagem);
	fwrite(&alien2.peso, sizeof(alien2.peso), 1, fmensagem);
	fwrite(alien3.nome, sizeof(alien3.nome), 1, fmensagem);
	fwrite(alien3.dieta, sizeof(alien3.dieta), 1, fmensagem);
	fwrite(&alien3.tempo_vida, sizeof(alien3.tempo_vida), 1, fmensagem);
	fwrite(&alien3.qi, sizeof(alien3.qi), 1, fmensagem);
	fwrite(&alien3.estatura, sizeof(alien3.estatura), 1, fmensagem);
	fwrite(&alien3.peso, sizeof(alien3.peso), 1, fmensagem);
	
	fclose(fmensagem);

	return 0;
}
