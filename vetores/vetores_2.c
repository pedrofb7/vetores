#include <stdio.h>
#include "bib_vetores.h"

int main() {

    int i = 5;
    int a[i];
    gerar_valor_vet(i, a);

    printf("Vetor A = [%d, %d, %d, %d, %d]", a[0], a[1], a[2], a[3], a[4]);

    return 0;


}