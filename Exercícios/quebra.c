/**
 *	      @file: quebra.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

typedef struct {
	char c[100000];
	int esq[100000], dir[100000];
} peca_t;

int main(){
	peca_t pecas;
	int n, i, antes, p = 1, prox, aux_i;
	char aux_c;

	scanf("%d", &n);
	while(getchar() != '\n');

	for (i = 0; i < n; i++){
		scanf("%d %c %d", &pecas.esq[i], &pecas.c[i], &pecas.dir[i]);
	}

	for (i = 0; i < n; i++){
		if (pecas.esq[i] == 0){
			aux_i = pecas.esq[0];
			pecas.esq[0] = pecas.esq[i];
			pecas.esq[i] = aux_i;
			aux_i = pecas.dir[0];
			pecas.dir[0] = pecas.dir[i];
			pecas.dir[i] = aux_i;
			aux_c = pecas.c[0];
			pecas.c[0] = pecas.c[i];
			pecas.c[i] = aux_c;
		}
		if (pecas.dir[i] == 1){
			aux_i = pecas.dir[n-1];
			pecas.dir[n-1] = pecas.dir[i];
			pecas.dir[i] = aux_i;
			aux_i = pecas.esq[n-1];
			pecas.esq[n-1] = pecas.esq[i];
			pecas.esq[i] = aux_i;
			aux_c = pecas.c[n-1];
			pecas.c[n-1] = pecas.c[i];
			pecas.c[i] = aux_c;
		}
	}

	while(p <= 200000){
		for (prox = 1; prox < (n-1); prox++){
			if (pecas.esq[prox] == p){
				for (antes = 1; antes < (n-1); antes++){
					if (pecas.dir[antes] == pecas.esq[prox]){
						aux_i = pecas.esq[antes+1];
						pecas.esq[antes+1] = pecas.esq[prox];
						pecas.esq[prox] = aux_i;
						aux_i = pecas.dir[antes+1];
						pecas.dir[antes+1] = pecas.dir[prox];
						pecas.dir[prox] = aux_i;
						aux_c = pecas.c[antes+1];
						pecas.c[antes+1] = pecas.c[prox];
						pecas.c[prox] = aux_c;
					}
				}
			}
		}
		p++;
	}


	for (i = 0; i < n; i++){
		printf("%c",pecas.c[i]);
	}
	printf("\n");

	return 0;
}
