/**
 *	      @file: num_impares.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int main(){
	int valor, cont;
	scanf("%d", &valor);
	if ((valor % 2) == 0){
		valor--;
	}
	for (cont = 1; cont <= valor; cont += 2){
		printf("%d\n", cont);
	}

	return 0;
}
