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