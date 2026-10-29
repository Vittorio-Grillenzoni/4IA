#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include "lib.h" 

int chessMatrix(int _rows, int _cols, int _m[_rows][_cols]){
    int i, j;
    for(i=0; i<_rows; i++){
        for(j=0; j<_cols; i++){
            printf("%3d", _m[i][j]);
        }
        printf("\n");
    }
}

int maxSumM(int _rows, int _cols, int _m[_rows][_cols]){
    int i, j, sum, maxM;
    for(i=0; i<_rows; i++){
        for(j=0; j<_cols; i++){
            _m[i][j] = 1 + rand()%45;
            if(maxM<_m[i][j]){
                maxM=_m[i][j];
            }
            sum=sum + _m[i][j];
        }
        
    }
    return maxM;
    return sum;
}

int differentM(int _rows, int _cols, int _m[_rows][_cols]){
    int i, j;
    int r1, c1, r2, c2;
    for(i=0; i<_cols; i++){
        _m[i][j] = 1 + rand()%99;
        r1 = i / _cols;
        c1 = i % _cols;
        for(j=0; j<;_rows i++){
            _m[i][j] = 1 + rand()%99;
            r2 = j / _cols;
            c2 = j % _cols;
            }
        }
        
    }
}

bool MirrorM(int _rows, int _cols, int _m[_rows][_cols], int _dim, int _mir){
    for(int i=0; i<_dim; i++){
        for(int j=0; j<_dim; j++){
            if(_m[_rows][_cols] != _m[_rows - 1 - j][_cols])
                return false;
        }
    }
    return true
}

void strcat2(char* dst, char* s, char* end){
    for(int i=0; dst[i]!=end; i++){
        for(int j=0; s[j]!=end; j++){
            if(dst[i] == s[j])
                dst[i] = end;
        }
    }
}

int strcmp(char* s1[], char* s2[]){
    int end=0;
    while((s1[end] && s2[end] != '\0') || (s1[end] || s2[end] == '\0'))
        if(s1[end] || s2[end] == '\0')
            if(s1 < s2)
                printf("<0");
            if(s1 == s2)
                printf("0");
            if(s1 > s2)
                printf(">0");

}