/**
 *	      @file: quadrado_pares.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>
#include <math.h>

int main(){
	int valor;
	double contador;
	scanf("%d", &valor);
	if ((valor % 2) != 0){
		valor--; 
	}
	for (contador = 2; contador <= valor; contador += 2){
		printf("%.0lf^2 = %.0lf\n", contador, pow(contador, 2));
	}

	return 0;
}
