/**
 *	      @file: fatfacil.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int fat(int n){
	if ((n == 0) || (n == 1)){
		return 1;
	}
	return n*fat(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", fat(n));

	return 0;
}
