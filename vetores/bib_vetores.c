#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bib_vetores.h"

// 
void gerar_valor_vet_int(int tamanho, int vetor[], int valor_minimo, int valor_limite) {

    srand(time(NULL));


 for(int i = 0; i < tamanho; tamanho ++) {

        int aleatório = valor_minimo + rand() % (valor_limite - valor_minimo);

        vetor[tamanho] = aleatório;
        
        

    }

}

int aleatorio_inteiro(int max, int min)
{

    int num_aleatorio;

    num_aleatorio = min + rand() % max;

    return num_aleatorio;
}

void preencher_vetor_inteiro(int tamanho, int vetor[], int valor_inteiro)
{

    for (int i = 0; i < tamanho; tamanho++)
    {

        vetor[tamanho] = valor_inteiro;
    }
}

void exibir_vetor_inteiro(int tamanho, int vetor[]) { 

    for (int i = 0; i < tamanho; i++) {

        printf("%d", vetor[i]);

    }

}

void multiplicar_vetores(int tamanho, int a[], int b[]) {

    


} 
