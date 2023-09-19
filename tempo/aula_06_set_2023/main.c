#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* para o tipo e funcoes que marcam tempo */
#include "ordenacao.h"

#define MAX 1000000

void le_vetor (int v[], int n){
    
	for (int i=0; i<n; i++) {
		scanf("%d", &v[i]);
	};
}

void imprime_vetor (int v[], int n){
    /* coloque o codigo aqui */

	for (int i=0; i<n; i++) {
		printf("%d ", v[i]);	
	};
}

double converte_ms_to_s (double tempo) {
	return tempo/1000;
};

int main(){
    int n;
    int v[MAX];
    /* abaixo as variaveis que contarao tempo */
    clock_t inicio, fim; /* clock_t vem de time.h */
    double tempo, tempo_em_segundos;

    scanf ("%d", &n);
    le_vetor (v, n);

    /* descomente as linhas de impressao durante os testes        */
    /* quando for rodar com vetores grandes, desligue a impressão */
    //imprime_vetor (v, n);

    inicio = clock();
    /* 
       Coloque aqui o codigo para o qual voce quer medir tempo
       idealmente, chame uma funcao que faz o que voce quer 
       por exemplo:                          
       selection_sort_i (v, n);
    */

	//selection_sort_i (v, n);
	//selection_sort_r (v, n, 0);
	insertion_sort_i (v,n);


    fim = clock();

    /* tempo sera dado em milisegundos       */
    /* CLOCKS_PER_SEC eh um define em time.h */
    tempo = (double)(fim - inicio) * 1000.0 / CLOCKS_PER_SEC;
    tempo_em_segundos = converte_ms_to_s (tempo);
    printf("tempo em ms: %f\n", tempo_em_segundos);

    //imprime_vetor (v, n);
    printf("\n");

    return 0;
}

