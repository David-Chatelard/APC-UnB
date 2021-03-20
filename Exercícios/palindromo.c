/**
 *	      @file: palindromo.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *	O código abaixo verifica se o inteiro digitado é ou não
 *	um número palíndromo.
 *
 *
 */

#include <stdio.h>
#include <string.h>

int main(){
	char valores[100];
	int i, cont = 0, len;
	printf("Digite um número inteiro: ");
	scanf("%s", valores);
	len = strlen(valores);
	for (i = 0;i < len; i++){
		if (valores[i] == valores[(len - 1) - i]){
			cont++;
		}
	}
	if (cont == len){
		printf("É um número palíndromo.\n");
	}
	else{
		printf("Não é um número palíndromo.\n");
	}

	return 0;
}
