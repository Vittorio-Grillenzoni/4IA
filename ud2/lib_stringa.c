#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include "lib_stringa.h"

void initStringa(int _dim, char _str[]){
    int i;
    for(i=0; i<_dim; i++)
        _str[i] = '\0';
}

int lunghezzaStringa(char _str[]){
    int len;
    len = 0;
    while(_str[len] != '\0')
        len++;
    
    return len;
}

void stampaContrario(char _s[]){
    int i;
    int len;

    len=lunghezzaStringa(_s);
    for(i=lunghezzaStringa(_s)-1; i>=0;i--){
        printf("%c", _s[i]);
    }
    printf("\n");

    /*for(i=0; i<len; i++){
        printf("%c", _s[len-i-1]);
    }
    */
}

int contaCarattere(char _str[], char _src){
    int i;      // indice per muovermi sulla stringa.
    int len;    // lunghezza effettiva della stringa.
    int cnt;    // contatore delle occorrenze realative alla lettera cercata.

    len = lunghezzaStringa(_str);
    cnt = 0;
    for(i=0; i<len; i++){
        if(_str[i] == _src) // confronto ogni cella della stringa con il carattere ricercato.
            cnt++;
    }

    return cnt;
}