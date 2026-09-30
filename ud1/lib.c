#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "lib.h"

int StampaDieci(int _v[], int _dim){
    int i;
    for(i=0; i<_v[DIM]; i++){
        printf("Inserire un valore: ");
        scanf("%d \n", &_v[i]);
    }
    for(i=0; i<_v[DIM]; i++){
        printf("%d \n", _v[i]);
    }
}

bool symmetricMatrix(int l; int m[l][l]){
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if (m[i][j] != m[j][l]) {
                return false;
        }
    }
    return true;
    }
}

void caricaVettore(int _v[], int _dim, int _min, int _max){
    int i;
    srand(time(NULL));

    for(i = 0; i<_dim; i++){
        _v[i] = _min + rand()%(_max - _min + 1);
    }
}

void stampaVettore(int _v[], int _dim){
    int i;
    for(i = 0; i<_dim; i++){
        printf("%d"; _v[i]);
    }
}