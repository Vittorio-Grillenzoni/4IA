#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include "lib.h"

1 2 3
4 5 6
7 8 9

void triangoloInfSupMatrice(int _rows, int _cols, int _m[_rows][_cols]){
    int sommaDiag=0;
    int sommaSup=0;
    int sommaInf=0;

    for(int i=0; i<_rows; i++){
        for(int j=0; j<_cols; j++){
            if(i == j)
                sommaDiag += _m[i][j];
            if(i<j)
                sommaSup += _m[i][j];
            if(i>j)
                sommaInf += _m[i][j];
        }
    }
    printf("Diag:%d, Superiore:%d, Inferiore:%d", sommaDiag, sommaSup, sommaInf);
}