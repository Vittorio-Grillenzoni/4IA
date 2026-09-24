#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "lib.h"

int StampaDieci(int _v[], int _dim){
    int i;
    for(i=0; i<_v[_dim]; i++){
        printf("Inserire un valore: ");
        scanf("%d \n", &_v[i]);
    }
    for(i=0; i<_v[_dim]; i++){
        printf("%d \n", _v[i]);
    }
}

int stampaVettore(int _v[], int _dim){
    for(int i=0; i<_dim; i++){
        _v[i] = 1 + rand()%24;
        printf("%d ", _v[i]);
        
    }
    printf("\n");
}

int trovavaloreMassimo(int _v[], int _dim){
    int max;
    for(int i=0; i<_dim; i++){
        _v[i] = 1 + rand()%24;
    }
    for(int i=0; i<_dim; i++){
        if(_v[i]>max){
            max=_v[i];
        }
    }
    printf("%d \n", max);
}

int contaValore(int _v[], int _dim){
    int ri;
    int cnt=0;
    printf("Inserire un valore tra 1 e 25: ");
    scanf("%d", &ri);
    for(int i=0; i<_dim; i++){
        if(_v[i]==ri){
            cnt++;
        }
    }
    printf("Il numero di volte in cui si ripete questo numero è: %d", cnt);
}