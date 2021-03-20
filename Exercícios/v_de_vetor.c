/**
 *	      @file: v_de_vetor.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int le_tamanho_do_vetor(){
	int N;
	do{
		printf("Digite N (0 < N <= 100): ");
		scanf("%d", &N);
		while (getchar() != '\n');
		if ((N > 0) && (N <= 100)){
			return N;
		}
		else{
			printf("Número inválido.\n");
		}
	} while(1);
}

char uma_letra(){
	char letra;
	do{
		printf("Digite uma letra: ");
		scanf(" %c", &letra);
		while (getchar() != '\n');
		if (((letra >= 'a') && (letra <= 'z')) || ((letra >= 'A') && (letra <= 'Z'))){
			return letra;
		}
		else{
			printf("Letra inválida.\n");
		}
	} while(1);
}

void le_elementos(char *vetor, int N){
	int indice;
	printf("Digite %d caracteres: ", N);
	for (indice = 0; indice < N; indice++){
		vetor[indice] = getchar();
	}
	vetor[N] = '\0';
}

void mostra(char *vetor, int N){
	int indice;
	printf("\"");
	for (indice = 0; indice < N; indice++){
		printf("%c", vetor[indice]);
	}
	printf("\"\n");
}

void ordena(char *vetor, int N){
	int indice, i = N;
	char aux;
	for (i = 0; i < N; i++){
		for (indice = 0; indice < N - 1; indice++){
			if (vetor[indice] > vetor[indice + 1]){
				aux = vetor[indice + 1];
				vetor[indice + 1] = vetor[indice];
				vetor[indice] = aux;
			}
		}
	}
}
int indice_de(char *vetor, int N, char c){
	int indice;
	for (indice = 0; indice < N; indice++){
		if (vetor[indice] == c){
			return indice;
		}
	}
	return -1;
}

void busca_letra(char *vetor, int N){
	char c = uma_letra();
	int i = indice_de(vetor, N, c);

	if (i >= 0){
		printf("\nO caractere '%c' está na %da posição do vetor.\n", c, i);
	}
	else{
		printf("\nO caractere '%c' não está no vetor.\n", c);
	}
}

int main(){
	char vetor[100];
	int N = le_tamanho_do_vetor();

	le_elementos(vetor, N);
	printf("\nO vetor é: ");
	mostra(vetor, N);
	busca_letra(vetor, N);

	ordena(vetor, N);
	printf("\nO vetor ordenado é: ");
	mostra(vetor, N);
	busca_letra(vetor, N);

	return 0;
}
