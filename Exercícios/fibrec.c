/**
 *	      @file: fibrec.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *  Fibonacci recursiva
 *
 */

#include <stdio.h>
int fib(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	return fib(n-1) + fib(n-2);
}

int main(){
	int n;
	printf("Você quer saber o fibonacci de qual número? ");
	scanf("%d", &n);
	printf("O fibonacci de %d é %d\n", n, fib(n));

	return 0;
}
