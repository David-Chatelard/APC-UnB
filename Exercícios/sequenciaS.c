/**
 *	      @file: sequenciaS.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int main(){
	double s = 0, contador;
	for (contador = 1; contador <= 100; contador++){
		s += (1/contador);
	}
	printf("%.2lf\n", s);

	return 0;
}
