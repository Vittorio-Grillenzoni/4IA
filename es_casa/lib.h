void identityMatrix(int i, int m[i][j]);
/**
 * riempie una matrice quadrata di zeri tranne la diagonale di uni (crea la matrice detta unitaria o identità)
 * @param 
 * @param
 * @return
*/

int chessMatrix(int _rows, int _cols, int _m[_rows][_cols]);
/**
 * crea una matrice a scacchiera
 * @param int numero di righe
 * @param int numero colonne
 * @param int* matrice
 * @return
*/

int differentM(int _rows, int _cols, int _m[_rows][_cols]);
/**
 * crea una matrice a scacchiera
 * @param int numero di righe
 * @param int numero colonne
 * @param int* matrice
 * @return
*/

bool MirrorM(int _rows, int _cols, int _m[_rows][_cols], int _dim, int _mir);
/**
 * identifica se la matrice è specchiata
 * @param int numero di righe
 * @param int numero colonne
 * @param int* matrice
 * @param int dimensione della matrice
 * @param int indica se la matrice è specchiata
 * @return
*/

void strcat2(char* dst, char* s, char* end);
/**
 * @param char* distanza?
 * @param char* stringa
 * @param char* fine della stringa
*/

int strcmp(char* s1[], char* s2[]);
/**
 * @param char* Prima stringa
 * @param char* Seconda stringa
*/

bool substrAtPos(char *s, int pos, char *subStr);
/**
 * @param char* Prima stringa
 * @param int posizione
 * @param char* sottostringa
*/

int findsubStr(char *s, char *subStr);
/**
 * @param char* Stringa
 * @param char* sottostringa
*/

bool repeatedChars(char s[], char p);
/**
 * @param char* Stringa
 * @param char* Riferimento
*/
//-----------------------------------------

int removeChar(char s[], char del);
/**
 * @param char Stringa
 * @param char Cancella
 * @return Parola aggiornata
 */