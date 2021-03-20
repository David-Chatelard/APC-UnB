/**
 *	      @file: soma_impares.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int main(){
	int num1, num2, aux, soma = 0, cont;
	scanf("%d", &num1);
	scanf(" %d", &num2);
	if (num2 > num1){
		aux = num2;
		num2 = num1;
		num1 = aux;
	}
	for (cont = (num2+1); cont < num1; cont++){
		if ((cont %2) != 0){
			soma += cont;
		}
	}
	printf("%d\n", soma);

	return 0;
}
