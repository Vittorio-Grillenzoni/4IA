void identityMatrix(int i, int m[i][j]){
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if (i == j) {
                m[i][j] = 1; 
            } else {
                m[i][j] = 0; 
            }
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
