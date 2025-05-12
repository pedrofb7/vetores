#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bib_vetores.h"

// fills a vector with random integers in especific range
void fill_vect_rand_int(int size, int vector[], int min, int max) {

    for(int i = 0; i < size; i++) {

        int random = min + rand() % (max - min);

        vector[i] = random;
            
    }
}

//generates a random integer in espedific range
int rand_int(int max, int min)
{

    int random_num;

    random_num = min + rand() % max;

    return random_num;
}

//fills a vector with a single especified integer value
void fill_vect_int(int size, int vector[], int n)
{

    for (int i = 0; i < size; i++) {

        vector[i] = n;

    }
}

//exibits the values of an integer vector
void exib_vect_int(int size, int vector[]) { 

    for (int i = 0; i < size; i++) {

        printf("%d ", vector[i]);

    }

}

void multipli_vect(int size, int vect1[], int vect2[]) {} 
