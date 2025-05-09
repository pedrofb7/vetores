#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ler_matriz(int col, int matriz[][col], int line); 
int aleatorio_inteiro(int max, int min);

int main() {

    srand(time(NULL));

    int i = 0, j = 0;

    printf("selecione a linha e a coluna, (i) e (j)\n");
    scanf("%d", &i);
    scanf("%d", &j);


    int matriz[i][j];

    ler_matriz(j, matriz, i);
}

void ler_matriz(int col, int matriz[][col], int line) {

    for(int i = 0; i < line; i++) {

        for(int j = 0; j < col; j++) {


            matriz[i][j] = aleatorio_inteiro(0, 99);


        }
    }
}



int aleatorio_inteiro(int max, int min)
{

    int num_aleatorio;

    num_aleatorio = min + rand() % max;

    return num_aleatorio;
}
