#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

int main(){
    int valori[DIM];
    int i;
    for(i=0; i<DIM; i++){
        printf("Inserire un valore: ");
        scanf("%d", &valori[i]);
    }
    for(i=0; i<DIM; i++){
        printf("%d ", valori[i]);
    }
    printf("\n");
    return(0);
}