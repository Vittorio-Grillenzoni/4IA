#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include "lib.h"

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
        printf("%d ", _v[i]);
    }
}

float mediaVettore(int _v[], int _dim){
    int totale;
    int i;
    totale = 0;
    for(i=0; i<_dim; i++)
        totale = totale + _v[i];
    
    return ((float)totale)/_dim;
}

int getValoreAt(int _v[], int _dim, int _index){
    if(_index >= 0 && _index <_dim)
        return _v[_index];
    else
        return -1;
}

bool stampaSubArray(int _v[], int _dim, int _index1, int _index2){
    if(_index1 < 0 || _index1 > _dim)
        return false;
    if(_index2 < 0 || _index2 > _dim)
        return false;
    if(_index1 == _index2)
        return false;
    if(_index1 > _index2)
        return false;
    for(int i=_index1; i<_index2; i++){
        printf("%d", _v[i]);
    }
}
//---------------------------------------------------------

void caricaMatrice(int _rows, int _cols, int _m[_rows][_cols]){
    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; i++){
            _m[i][j] = 1 + rand()%25;
        }
    }
}

void stampaMatrice(int _rows, int _cols, int _m[_rows][_cols]){
    int i,j;
    for(i=0; i<_rows; i++){
        for(j=0; j<_cols; i++){
            printf("%3d", _m[i][j]);
        }
        printf("\n");
    }
}