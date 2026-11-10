#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include "lib_verifica.h"

void randomMatrix(int _rows, int _cols, int m[_rows][_cols]){
    srand(time(NULL));
    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; j++){
            m[i][j] = 1 + rand()%8;
        }
    }

    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; j++){
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }
    
}

void randomV(int _l, int _v[_l], int _dim){
    srand(time(NULL));
    for(int i=0; i<_dim; i++){
        _v[i] = 1 + rand()%8;
        printf("%d",_v[i]);
    }
}

void MatrixEx(int _rows, int _cols, int m[_rows][_cols]){
    int tmp;
    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; j++){
            m[i][j] = 1 + rand()%8;
        }
    }
    
}
