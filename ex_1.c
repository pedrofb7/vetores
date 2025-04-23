#include <stdio.h>

void bubbleSort(float vet[], int tamanho) {

    for(int j; j < tamanho - 1 - j; j++) {
        for (int i = 0; i < tamanho - 1; i++) {

            if(vet[i] > vet[i + 1]) {

                float aux;
                aux = vet[i];
                vet[i] = vet[i + 1];
                vet[i + 1] = aux;


            }

        }
    }
}

void coletar_vetor(float vet[], int tamanho) {

    for(int i = 0; i <= tamanho - 1; i ++) {

        printf("Primeira posição: ");
        scanf("%f", &vet[i]);


    }


}

int main() {

    float notas[10];
    coletar_vetor(notas, 10);
    bubbleSort(notas, 10);

    

    for (int i= 0; i < 10; i++) {

        float nota = notas[i];

        printf("%.2f\n", nota);

    }

return 0;



}