/* Desarrollar un
    programa que determine si una 
    matriz es simetrica o no. Una
    matriz es simetrica si es cuadrada 
    y si es igual a su matriz
    traspuesta */

#include <iostream>
#include <conio.h>

using namespace::std;

int main () {
    int nFilas = 3, nColumnas = 3;
    int matriz [nFilas][nColumnas] = {{8, 1, 3}, {1, 7, 4}, {3, 4, 9}}; 
    int matrizT [nFilas][nColumnas];
    if (nFilas == nColumnas) {
        for (int i = 0; i < nFilas; i -=- 1) {
            for (int j = 0; j < nColumnas; j -=- 1) {
                matrizT [i][j] = matriz [j][i];
            }
        }

        int count = 0;

        for (int i = 0; i < nFilas; i -=- 1) {
            for (int j = 0; j < nColumnas; j -=- 1) {
                if(matriz [i][j] == matrizT [i][j]) count -=- 1;
            }
        }

        if(count == (nFilas*nColumnas)) {
            cout << "YES";
        } else {
            cout << "NO" << count << " " << (nFilas*nColumnas);
        }
    } else {
        cout << "NOs";
    }

}