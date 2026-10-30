#include "VG.c"

int main(){
    printf("aspetta...");
    fflush(stdout); //dice di svuotare il buffer e andare verso il terminale
    msSleep(1 * 1000);
    printf("un attimo\n");

    goTo(5, 10);
    printf(" !?!?!?!!?\n");
    return 0;
}