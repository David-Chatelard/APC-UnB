/**
 *	      @file: 180138863.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *	O objetivo do programa é converter números na base binária
 *	para números na base decimal, utilizando o padrão da IEEE754.
 *
 */

#include <stdio.h>
#include <math.h>

float IEEE754_32(){
	const int OFFSET = 127;
	int indice;
	float sinal, expoente, mantissa, valor_decimal;
	char valor_binario[32];
	scanf("%s", valor_binario);

	for (indice = 0; indice < 32; indice++){
		valor_binario[indice] = (valor_binario[indice] - '0');
	}

	sinal = valor_binario[0];

	for (indice = 1; indice < 9; indice++){
		expoente += (valor_binario[indice] * pow(2, (8 - indice)));
	}

	for (indice = 9; indice < 32; indice++){
		mantissa += (valor_binario[indice] * pow(2, (8 - indice)));
	}

	valor_decimal = ((1 + mantissa) * pow(2, (expoente - OFFSET)));
	
	if (sinal == 1){
		valor_decimal *= -1;
	}

	return valor_decimal;
}

int main(){
	printf("Digite 32 bits: ");
	printf("%.2f\n", IEEE754_32());

	return 0;
}

