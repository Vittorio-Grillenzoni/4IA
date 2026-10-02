int chessMatrix(int _rows, int _cols, int _m[_rows][_cols]){
    int i, j;
    for(i=0; i<_rows; i++){
        for(j=0; j<_cols; i++){
            printf("%3d", _m[i][j]);
        }
        printf("\n");
    }
}