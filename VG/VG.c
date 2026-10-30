#define _P0SIX_C_SOURCE 199309L
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>   //nanosleep();
#include <signal.h> //intercept CTRL-C
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