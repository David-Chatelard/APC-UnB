/**
 *	      @file: cifra_decifra.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *	O código cifra ou decifra mensagens de acordo com um 
 * 	valor que o usuário quiser.
 *
 */

#include <stdio.h>

void cifra(int x){
	char letra;
	printf("Digite a mensagem para ser cifrada: ");
	while(1){
		letra = getchar();
		if ((letra == '\n') || (letra == ' ')){
			while (getchar() != '\n');
			break;
		}
		if ((letra >= 'a') && (letra <= 'z')){
			if ((letra + x) > 'z'){
				letra = ((letra + x) - 26);
			}
			else{
				letra += x;
			}
		}
		else if ((letra >= 'A') && (letra <= 'Z')){
			if ((letra + x) > 'Z'){
				letra = ((letra + x) - 26);
			}
			else{
				letra += x;
			}
		}
		printf("%c", letra);
	}
	printf("\n");
}

void decifra(int x){
	char letra;
	printf("Digite a mensagem para ser decifrada: ");
	while(1){
		letra = getchar();
		if ((letra == '\n') || (letra == ' ')){
			while (getchar() != '\n');
			break;
		}
		if ((letra >= 'a') && (letra <= 'z')){
			if ((letra - x) < 'a'){
				letra = ((letra - x) + 26);
			}
			else{
				letra -= x;
			}
		}
		else if ((letra >= 'A') && (letra <= 'Z')){
			if ((letra - x) < 'A'){
				letra = ((letra - x) + 26);
			}
			else{
				letra -= x;
			}
		}
		printf("%c", letra);
	}
	printf("\n");
}

int main(){
	int x;
	printf("Digite um valor inteiro para usar na cifra: ");
	scanf("%d", &x);
	while (getchar() != '\n');
	cifra(x);

	printf("Digite um valor inteiro para usar na decifra: ");
	scanf("%d", &x);
	while (getchar() != '\n');
	decifra(x);
	/*Maneira mais inteligente: cifra(26-x);*/

	return 0;
}
