void caricaVettore(int _v[], int _dim, int _min, int _max);
/**
 * Carica un vettore con valori random compresi tra un minimo e un massimo
 * passati come argomenti
 * @param int* Riferimento al vettore
 * @param int Dimensione del vettore
 * @param int Valore minimo del range
 * @param int Valore massimo del range
 */

void stampaVettore(int _v[], int _dim);
/**
 * visualizza un vettore su singola riga
 * @param int* Riferimento al vettore
 * @param int Dimensione del vettore
*/

float mediaVettore(int _v[], int _dim);
/**
 * calcola e restituisce la media del vettore
 * @param int* Riferimento al vettore
 * @param int Dimensione del vettore
 * @return valore medio calcolato
*/

int getValoreAt(int _v[], int _dim, int _index);
/**
 * Restituisce il valore alla posizione indicata
 * @param int* Riferimento al vettore
 * @param int Dimensione del vettore
 * @param int Indice scelto del vettore
 * @return valore contenuto nella cella scelta
*/

bool stampaSubArray(int _v[], int _dim, int _index1, int _index2);
/**
 * Stampa il sotto array identificato tra index1 e index2
 * @param int* Riferimento al vettore
 * @param int Dimensione del vettore
 * @param int Indice iniziale
 * @param int Indice finale
 * @return true se stampa è possibile, false se stampa non è possibile
*/
//----------------------------------------------------------

void caricaMatrice(int _rows, int _cols, int _m[_rows][_cols]);
/**
 * Stampa una matrice di interi
 * @param int Numero righe matrice
 * @param int Numero colonne matrice
 * @param int* Riferimento alla matrice dichiarata nel main
*/

void stampaMatrice(int _rows, int _cols, int _m[_rows][_cols]);
/**
 * Stampa a video una matrice di interi
 * @param int Numero righe matrice
 * @param int Numero colonne matrice
 * @param int* Riferimento alla matrice dichiarata nel main
*/

void ordinaVettore(int _v, int _dim, int _mode);
/**
 * Ordina un vettore in modo crescente o decescente a scelta dell'utente
 * @param int* riferimento al vettore
 * @param int Dimensione del vettore
 * @param int Modo di ordinamento del vettore 
*/

void mediaMatrice(int _rows, int _cols, int _m[_rows][_cols]);
/**
 * trova la media totale di una matrice
 * @param int righe
 * @param int colonne
 * @param int matrice
*/

void singolaSommaM(int _rows, int _cols, int _m[_rows][_cols]);
/**
 * Stampa della matrice con somma totale di ogni singola riga
 * @param int righe
 * @param int colonne
 * @param int matrice
*/