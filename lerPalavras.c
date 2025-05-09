#include <stdio.h>
#include <string.h>

void lerpalavras(char matriz[][20], int tamanho) {

    for(int i = 0; i < tamanho; i++) {

        
        scanf("%s", matriz[i]);
        


    }

} 


void exibirpalavras(char matriz[][20], int tamanho) {

    for(int i = 0; i < tamanho; i++) {

        
        printf("%s\n", matriz[i]);
        


    }

}

void reordenar () {

    for (int i = 0; i < tamanho; i++) {

        for(int j = 0; j < tamnho2 / 2; j++) {

            char temp = matriz[i][j]

            matriz[i][j] = matriz[i][tamanho2] 


        }

    }


}


int main() {

    char palavras[3][20];
    lerpalavras(palavras, 3);
    exibirpalavras(palavras, 3);


}