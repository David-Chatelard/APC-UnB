/**
 *	      @file: cor.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *
 *
 */

#include <stdio.h>

int main(){
	const int MAX = 1002;
	char folha[MAX][MAX];
	int n, linha, coluna, i;
	scanf("%d", &n);
	while (getchar() != '\n');
	for (linha = 1; linha <= n; linha++){
		for (coluna = 1; coluna <= n; coluna++){
			folha[linha][coluna] = getchar();
		}
		getchar();
	}

	for (i = 0; i <= n; i++)
		for (linha = 1; linha <= n; linha++){
			for (coluna = 1; coluna <= n; coluna++){
				if (folha[linha][coluna] == '0'+i){
					if (folha[linha+1][coluna] == '*'){
						if (('1'+i) >= '9'){
							folha[linha+1][coluna] = '9';
						}
						else{
							folha[linha+1][coluna] = '1'+i;
						}
					}
					if (folha[linha-1][coluna] == '*'){
						if (('1'+i) >= '9'){
							folha[linha-1][coluna] = '9';
						}
						else{
							folha[linha-1][coluna] = '1'+i;
						}
					}
					if (folha[linha][coluna+1] == '*'){
						if (('1'+i) >= '9'){
							folha[linha][coluna+1] = '9';
						}
						else{
							folha[linha][coluna+1] = '1'+i;
						}
					}
					if (folha[linha][coluna-1] == '*'){
						if (('1'+i) >= '9'){
							folha[linha][coluna-1] = '9';
						}
						else{
							folha[linha][coluna-1] = '1'+i;
						}
					}
				}
			}
		}

	for (linha = 1; linha <= n; linha++){
		for (coluna = 1; coluna <= n; coluna++){
			printf("%c", folha[linha][coluna]);
		}
		printf("\n");
	}


	return 0;
}
