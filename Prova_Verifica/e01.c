/*
stampaVettore(...) stampa il vettore su singola riga.
trovavaloreMassimo(...) trova e comunica il valore massimo presente nel vettore. Il valore viene stampato nella chiamata funzione.
Richiedi all'utente un valore compreso tra 1 e 25, richiama la funzione contaValore(...) passandole il valore inserito, 
la funzione restituisce quante volte compare quel valore nel vettore, stampa il valore restituito nel main con una printf.
richiedi all'utente un valore da ricercare src ed un valore sostitutivo sost richiama la funzione ricercaSostituisci(...) passandole anche i valore di src e sost. 
La funzione ricerca il valore src nel vettore e lo sostituisce con sost, restituisce al main quante sostituzioni ha eseguito. Stampa di nuovo il vettore, 
richiama la funzione di stampa o nel main program oppure dentro alla funzione ricercaSostituisci, stampa nel main il valore di ritorno della funzione (quante sostituzioni ha effettuato).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.c"

#define DIM 15

int main(){
    int v[DIM];
    int f1;
    int f2;
    int f3;
    int scelta;
    int cnt = 0;
    do{
        printf("-- MENU --\n");
        printf("1 -> Stampa il vettore su singola riga\n");
        printf("2 -> Trova e comunica il valore massimo presente nel vettore\n");
        printf("3 -> Restituisce quante volte compare quel valore nel vettore\n");
        printf("0 -> Termina Programma!\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        switch(scelta){
            case 1:{
                stampaVettore(v, DIM);
                break;
            }
            case 2:{
                trovavaloreMassimo(v, DIM);
                break;
            }
            case 3:{
                contaValore(v, DIM);
                break;
            }
            default:{
                if(scelta != 0){
                    printf("Scelta non valida!\n");
                    printf("\n\n");
                }
                break;
            }
        }
    }while(scelta != 0);
    return(0);

    return(0);
}