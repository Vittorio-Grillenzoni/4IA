#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib_verifica.c"

#define DIM 5
#define ROWS 5
#define COLS 5

int main(){
    int i;
    int vet[DIM];
    int m[ROWS][COLS];

    randomMatrix(ROWS, COLS, m);
    randomV(i, vet, DIM);
    return 0;
}