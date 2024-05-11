
#include <iostream>
#include <iomanip>
using namespace std; 

void impresion_matriz(int ** matriz, int fila, int columna) {
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            if (j == 0) {
                cout << "a[" << i << "]" << "[" << j << "]" << "=" << setw(3);
            }
            else {
                cout << setw(3) << "a[" << i << "]" << "[" << j << "]" << "=" << setw(3);
            }
            cout << matriz[i][j] << setw(1);
        }
        cout << endl;
    }
    cout << endl; 
}

int main(int argc ,char  *argv[]) {
    int filas = atoi(argv[1]); 
    int columnas = atoi(argv[2]);
    int producto = 0; 

    int** matriz = new int *[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            producto = (i + 1) * (j + 1);
            matriz[i][j] = producto; 
        }
    }
    impresion_matriz(matriz, filas, columnas); 

    for (int i = 0; i < filas; i++) {
        delete matriz[i]; 
    }
    delete[] matriz; 
}
