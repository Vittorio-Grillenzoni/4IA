#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lib.c"

#define DIM 10
#define ROWS 5
#define COLS 5

int main(){
    int matrix[ROWS][COLS];

    chessMatrix(ROWS, COLS, matrix[ROWS][COLS]);
}