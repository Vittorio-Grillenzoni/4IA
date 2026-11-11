#include <stdio.h>
#include "lib_stringa.c"

#define DIM 20

int main(){
    char parola[DIM];
    char junk;
    int i;

    printf("Inserisci una parola: ");
    scanf("%s", parola);
    junk=getchar();

    printf("\n");
    printf("Parola al contrario: ");
    stampaContrario(parola);

    printf("\n\n");
    printf("Lettera 'a' presente: %d\n", contaCarattere(parola, 'a'));
    printf("Lettera 'z' presente: %d\n", contaCarattere(parola, 'z'));

    return 0;
}