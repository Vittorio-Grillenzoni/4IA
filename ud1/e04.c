#include <stdio.h>
#include "lib.c"

#define DIM 10

int main(){
    int vett[DIM];

    caricaVettore(vett, DIM, 5, 25);
    stampaVettore(vett, DIM);
    printf("\n");
    
    return 0;
}