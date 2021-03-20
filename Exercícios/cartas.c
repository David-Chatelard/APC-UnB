/**
 *	      @file: cartas.c
 *	    @author: David Fanchic Chatelard 180138863
 *	@disciplina: Algoritmos e Programacao de Computadores
 *	Exercício 7 de estrutura de dados->vetores.
 *	Do github do Guilherme.
 *
 *
 */

#include <stdio.h>

int main(){
	const int CARTAS_TOTAL = 90, NUM_JOG = 5, CARTAS_JOG = 6;
	char time1_num[NUM_JOG][CARTAS_JOG], time1_naipe[NUM_JOG][CARTAS_JOG], time2_num[NUM_JOG][CARTAS_JOG], time2_naipe[NUM_JOG][CARTAS_JOG], time3_num[NUM_JOG][CARTAS_JOG], time3_naipe[NUM_JOG][CARTAS_JOG];
	int i, j, cont1_time1 = 0, cont2_time1 = 0, cont3_time1 = 0, cont4_time1 = 0, cont5_time1 = 0, cont1_time2 = 0, cont2_time2 = 0, cont3_time2 = 0, cont4_time2 = 0, cont5_time2 = 0, cont1_time3 = 0, cont2_time3 = 0, cont3_time3 = 0, cont4_time3 = 0, cont5_time3 = 0;

	for (i = 0; i < CARTAS_TOTAL; i++){
		if ((i % 3) == 0){/*Aqui é para o time 1*/
			if ((i % 15) == 0){/*Aqui é para o jogador 1*/
				scanf("%c", &time1_num[0][cont1_time1]);
				scanf("%c", &time1_naipe[0][cont1_time1]);
				cont1_time1++;
			}
			else if (((i - 3) % 15 ) == 0){/*Aqui é para o jogador 2*/
				scanf("%c", &time1_num[1][cont2_time1]);
				scanf("%c", &time1_naipe[1][cont2_time1]);
				cont2_time1++;
			}
			else if (((i - 6) % 15) == 0){/*Aqui é para o jogador 3*/
				scanf("%c", &time1_num[2][cont3_time1]);
				scanf("%c", &time1_naipe[2][cont3_time1]);
				cont3_time1++;
			}
			else if (((i - 9) % 15) == 0){/*Aqui é para o jogador 4*/
				scanf("%c", &time1_num[3][cont4_time1]);
				scanf("%c", &time1_naipe[3][cont4_time1]);
				cont4_time1++;
			}
			else if (((i - 12) % 15) == 0){/*Aqui é para o jogador 5*/
				scanf("%c", &time1_num[4][cont5_time1]);
				scanf("%c", &time1_naipe[4][cont5_time1]);
				cont5_time1++;
			}
		}
		else if (((i - 1) % 3) == 0){/*Aqui é para o time 2*/
			if (((i - 1) % 15) == 0){/*Aqui é para o jogador 1*/
				scanf("%c", &time2_num[0][cont1_time2]);
				scanf("%c", &time2_naipe[0][cont1_time2]);
				cont1_time2++;
			}
			else if ((((i - 1) - 3) % 15 ) == 0){/*Aqui é para o jogador 2*/
				scanf("%c", &time2_num[1][cont2_time2]);
				scanf("%c", &time2_naipe[1][cont2_time2]);
				cont2_time2++;
			}
			else if ((((i - 1) - 6) % 15) == 0){/*Aqui é para o jogador 3*/
				scanf("%c", &time2_num[2][cont3_time2]);
				scanf("%c", &time2_naipe[2][cont3_time2]);
				cont3_time2++;
			}
			else if ((((i - 1) - 9) % 15) == 0){/*Aqui é para o jogador 4*/
				scanf("%c", &time2_num[3][cont4_time2]);
				scanf("%c", &time2_naipe[3][cont4_time2]);
				cont4_time2++;
			}
			else if ((((i - 1) - 12) % 15) == 0){/*Aqui é para o jogador 5*/
				scanf("%c", &time2_num[4][cont5_time2]);
				scanf("%c", &time2_naipe[4][cont5_time2]);
				cont5_time2++;
			}
		}
		else if (((i - 2) % 3) == 0){/*Aqui é para o time 3*/
			if (((i - 2) % 15) == 0){/*Aqui é para o jogador 1*/
				scanf("%c", &time3_num[0][cont1_time3]);
				scanf("%c", &time3_naipe[0][cont1_time3]);
				cont1_time3++;
			}
			else if ((((i - 2) - 3) % 15 ) == 0){/*Aqui é para o jogador 2*/
				scanf("%c", &time3_num[1][cont2_time3]);
				scanf("%c", &time3_naipe[1][cont2_time3]);
				cont2_time3++;
			}
			else if ((((i - 2) - 6) % 15) == 0){/*Aqui é para o jogador 3*/
				scanf("%c", &time3_num[2][cont3_time3]);
				scanf("%c", &time3_naipe[2][cont3_time3]);
				cont3_time3++;
			}
			else if ((((i - 2) - 9) % 15) == 0){/*Aqui é para o jogador 4*/
				scanf("%c", &time3_num[3][cont4_time3]);
				scanf("%c", &time3_naipe[3][cont4_time3]);
				cont4_time3++;
			}
			else if ((((i - 2) - 12) % 15) == 0){/*Aqui é para o jogador 5*/
				scanf("%c", &time3_num[4][cont5_time3]);
				scanf("%c", &time3_naipe[4][cont5_time3]);
				cont5_time3++;
			}
		}
		getchar();
	}
	printf("Time 1\n");
	for (i = 0; i < NUM_JOG; i++){
		printf("J%d: ", i+1);
		for (j = 0; j < CARTAS_JOG; j += 2){
			printf("%c%c ", time1_num[i][j], time1_naipe[i][j]);
		}
		for (j = 1; j < CARTAS_JOG; j += 2){
			printf("%c%c ", time1_num[i][j], time1_naipe[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Time 2\n");
	for (i = 0; i < NUM_JOG; i++){
		printf("J%d: ", i+1);
		for (j = 0; j < CARTAS_JOG; j += 2){
			printf("%c%c ", time2_num[i][j], time2_naipe[i][j]);
		}
		for (j = 1; j < CARTAS_JOG; j += 2){
			printf("%c%c ", time2_num[i][j], time2_naipe[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Time 3\n");
	for (i = 0; i < NUM_JOG; i++){
		printf("J%d: ", i+1);
		for (j = 0; j < CARTAS_JOG; j += 2){
			printf("%c%c ", time3_num[i][j], time3_naipe[i][j]);
		}
		for (j = 1; j < CARTAS_JOG; j += 2){
			printf("%c%c ", time3_num[i][j], time3_naipe[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}

/*1 1 1  2 2 2  3 3 3  4 4  4   5  5  5
0 1 2    3 4 5  6 7 8  9 10 11  12 13 14*/