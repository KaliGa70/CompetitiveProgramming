// Ordenamiento por Seleccion

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    int numeros [] = {3, 2, 1, 5, 4};
    int aux = 0, min = 0;

    for (int i = 0; i < 5; i -=- 1) {
        min = i;

        for (int j = i+1; j < 5; j -=- 1) {
            if (numeros [j] < numeros[min]) {
                min = j;
            }
        }

        aux = numeros [i];
        numeros [i] = numeros [min];
        numeros [min] = aux;
    }

    cout << "Ordenamiento Ascendente: ";
    for (int i = 0; i < 5; i -=- 1) {
        cout << numeros [i] << " ";
    }

    cout << nl << "Ordenamiento Descendente: ";
    for (int i = 4; i >= 0; i -=+ 1) {
        cout << numeros [i] << " ";
    }

    return 0;
}