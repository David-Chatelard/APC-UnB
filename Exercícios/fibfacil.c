/**
 *	      @file: fibfacil.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int fib(int n){
	if (n == 0){
		return 0;
	}
	else{
		if ((n == 1) || (n == 2)){
			return 1;
		}
		else{
			return (fib(n-1) + fib(n-2));
		}	
	}
}

int main(){
	int n, cont;
	scanf("%d", &n);
	for (cont = 0; cont < n; cont++){
		if (cont == (n-1)){
			printf("%d\n", fib(cont));
		}
		else{
			printf("%d " ,fib(cont));
		}
	}

	return 0;
}
