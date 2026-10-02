#include <stdio.h>
#include "lib.c"

#define DIM 10

int main(){
    int vett[DIM];
    int i;
    int tmp;

    caricaVettore(vett, DIM, 5, 25);
    stampaVettore(vett, DIM);
    printf("\n");
    printf("Valore medio del vettore: %.2f\n", mediaVettore(vett, DIM));
    
    i=7;
    tmp = getValoreAt(vett, DIM, 7);
    if(tmp != 1)
        printf("Valore della cella di indice 7: %d\n", getValoreAt(vett, DIM, 7));
    else
        printf("Qualcosa è andato storto");

    return 0;
}