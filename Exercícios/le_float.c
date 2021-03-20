/**
 *	      @file: le_float.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

	float le_float(){
		float x;
		printf("Digite um número real: ");
		scanf("%f", &x);
		return x;
	}

int main(){
	float valor;
	valor = le_float();
	printf("Li %.5f\n", valor);

	return 0;
}
