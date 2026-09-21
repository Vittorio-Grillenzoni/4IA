#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 10

int main(){
    int altezza[DIM];
    int i;
    int min;
    int totale;
    int media;
    int a;
    int cnt = 0;
    for(i=0; i<DIM; i++){
        altezza[i] = 150 + rand(41);
    }
    for(i=0; i<DIM; i++){
        min = altezza[i];
        if(altezza[i] < min){
            min = altezza[i];
        }
    }
    printf("%d", min);
    for(i=0; i<DIM; i++){
        totale = totale + altezza[i];
    }
    media = totale/DIM;
    printf("%d", media);
    printf("Inserire un valore: ");
    scanf("%d", &a);
    for(i=0; i<DIM; i++){
        if(altezza[i] == a){
            cnt++;
        }
    }
    printf("%d", cnt);
    for(i=0; i<DIM; i++){
        if(altezza[i] < media){
            printf("%d", altezza[i]);
        }
    }

    printf("\n");
    return(0);
}