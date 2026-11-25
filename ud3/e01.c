#include <stdio.h>

typedef struct{
    int base;
    int altezza;
}shape;

int main(){
    shape x;

    x.altezza = 10;
    x.base = 5;

    if(x.altezza == x.base){
        printf("Ho in mano un quadrato e la sua area e': %d\n", x.altezza*x.base);
    }
    else{
        printf("Ho in mano un rettangolo e la sua area e': %d\n", x.altezza*x.base);
    }
    
    return 0;
}