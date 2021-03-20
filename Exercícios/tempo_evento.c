/**
 *	      @file: tempo_evento(certo).c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int main(){
	int dia_i, dia_f, hora_i, hora_f, min_i, min_f, seg_i, seg_f, seg1, seg2, dia_t, hora_t, min_t, seg_t1, seg_t2;
	scanf("Dia %d", &dia_i);
	while (getchar() != '\n');
	scanf(" %d : %d : %d", &hora_i, &min_i, &seg_i);
	while (getchar() != '\n');
	scanf("Dia %d", &dia_f);
	while (getchar() != '\n');
	scanf(" %d : %d : %d", &hora_f, &min_f, &seg_f);
	while (getchar() != '\n');

	seg1 = (seg_i+(min_i*60)+(hora_i*3600)+(dia_i*3600*24));
	seg2 = (seg_f+(min_f*60)+(hora_f*3600)+(dia_f*3600*24));
	seg_t1 = (seg2 - seg1);
	dia_t = ((seg_t1)/(3600*24));
	hora_t = ((seg_t1 - (dia_t*3600*24))/(3600));
	min_t = ((seg_t1 - (dia_t*3600*24) - (hora_t*3600))/(60));
	seg_t2 = (seg_t1 - (dia_t*3600*24) - (hora_t*3600) - (min_t*60));

	printf("%d dia(s)\n", dia_t);
	printf("%d hora(s)\n", hora_t);
	printf("%d minuto(s)\n", min_t);
	printf("%d segundo(s)\n", seg_t2);

	return 0;
}
