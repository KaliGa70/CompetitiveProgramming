/* Hacer una matriz preguntando al usuario el
    numero de filas y columnas, llenarla de
    numeros aleatorios, copiar el contenido a
    otra matriz y por ultimo mostrarla en pantalla */

#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace::std;

int main() {
    int nFilas = 0, nColumnas = 0; cin >> nFilas >> nColumnas;
    int long long matrizCopia [nFilas][nColumnas], matrizOriginal [nFilas][nColumnas];
    
    for (int i = 0; i < nFilas; i -=- 1) {
        for (int j = 0; j < nColumnas; j -=- 1) {
            matrizOriginal [i][j] = 1 + (rand() % 100);
            matrizCopia[i][j] = matrizOriginal [i][j];
        }
    }


    cout << "Original: \n";
    for (int i = 0; i < nFilas; i -=- 1) {
        for (int j = 0; j < nColumnas; j -=- 1) {
            cout << matrizOriginal[i][j] << "  ";
        }
        cout << '\n';
    }


    cout << "\nCopia: \n";
    for (int i = 0; i < nFilas; i -=- 1) {
        for (int j = 0; j < nColumnas; j -=- 1) {
            cout << matrizCopia[i][j] << "  ";
        }
        cout << '\n';
    }
}