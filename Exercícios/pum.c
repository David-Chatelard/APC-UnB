/**
 *	      @file: pum.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int main(){
	int n, linha, valor = 1;
	scanf("%d", &n);
	for (linha = 1; linha <= n; linha++){
		for ( ; valor <= (n*7); valor++){
			if ((valor % 4) == 0){
				printf("PUM\n");
				valor++;
				break;
			}
			else{
				printf("%d ", valor);
			}
		}
	}

	return 0;
}
