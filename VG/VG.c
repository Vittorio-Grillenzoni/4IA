#include "VG.h"


void msSleep(int millis){
    struct timespec delay;

    delay.tv_sec = millis/1000;
    delay.tv_nsec = (millis % 1000) * 1000000L;

    nanosleep(&delay, NULL); // call nanosleep();
}

void goTo(int x, int y){
    printf("\033[%d;%dH", y+1, x+1);
    fflush(stdout);
}

void clear(){
    printf("\033[2J\033[H");
    fflush(stdout);
}

void pingPong(int startCol, int endCol, int row, char c, int millis){
    int col = startCol;
    while(true){
        goTo(col, row);
        printf("%c", c);
        fflush(stdout);

        msSleep(millis);
        col++;
    }
}

void termina(){
    //showcursor();
    printf("adieu...\n");
    exit(0);
}