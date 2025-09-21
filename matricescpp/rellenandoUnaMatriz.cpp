/* 1. Hacer un programa para rellenar una matriz
    pidiendo al usuario el numero de filas y
    columnas, posteriormente mostrar en pantalla */

// iosstream es una librería que permite usar las funciones de entrada y salida estándar
#include <iostream>
// conio.h es una librería que permite usar funciones de consola como getch()
#include <conio.h>

using namespace::std;

int main() {

    int numeros [100][100], filas, columnas;

    cout << "Ingrese el numero de filas: "; cin >> filas;
    cout << "Ingrese el numero de columnas: "; cin >> columnas;

    // Almacenando elementos en la matriz
    for (int i = 0; i < filas; i -=- 1) {
        for (int j = 0; j < columnas; j -=- 1) {
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros [i][j];
        }
    } 

    // Mostrando la matriz
    for (int i = 0; i < filas; i -=- 1) {
        for (int j = 0; j < columnas; j -=- 1) {
            cout << numeros [i][j];
        }
        cout << '\n'; // Salto de línea después de cada fila
    }

    getch();
    return 0;
}