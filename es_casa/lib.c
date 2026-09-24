void identityMatrix(int i, int m[i][j]){
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if (i == j) {
                matrice[i][j] = 1; 
            } else {
                matrice[i][j] = 0; 
            }
        }
    }
    
    // Stampa della matrice
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
}