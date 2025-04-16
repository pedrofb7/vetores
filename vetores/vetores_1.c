#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main () {

    int a [5],b[5];

    srand(time(NULL));
    

    for(int i = 0; i < 5; i ++) {

        int aleatório = 1 + rand() % 10;

        a[i] = aleatório;
        b[i] = aleatório;
        

    }

    printf("Vetor A = [%d, %d, %d, %d, %d]", a[0], a[1], a[2], a[3], a[4]);
    printf("Vetor B = [%d, %d, %d, %d, %d]", b[0], b[1], b[2], b[3], b[4]);
    printf("Soma = [%d, %d, %d, %d, %d]", a[0] + b[0], a[1] + b[1], a[2] + b[2], a[3] + b[3], a[4] + b[4]);

    return 0;

}