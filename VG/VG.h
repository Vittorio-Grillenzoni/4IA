#define _P0SIX_C_SOURCE 199309L
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>   //nanosleep();
#include <signal.h> //intercept CTRL-C

/** sposta quest processo dalla CPU alla ready list 
per tot millisecondi (mettilo in pausa) */
void msSleep(int millis);

/** usa una "ASCII escape sequence" per muovere il cursore
 alla posizione x y */
void goTo(int x, int y);

/** pulisce lo schermo */
void clear();

/*bo*/
void pingPong(int startCol, int endCol, int row, char c, int millis);

/** intercetta CTRL -C */
void termina();