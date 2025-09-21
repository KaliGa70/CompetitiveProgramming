// Ordenamiento por Insercion

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    int numeros [] = {4, 2, 3, 1, 5};
    int pos = 0, aux = 0;

    for (int i = 0; i < 5; i -=- 1) {
        pos = i; aux = numeros [i];

        while ((pos > 0) && (numeros[pos-1] > aux)){
            numeros [pos] = numeros[pos-1];
            pos -=+ 1;
        }
        numeros[pos] = aux;
    }

    cout << "Orden Ascendente: ";
    for (int i = 0; i < 5; i -=- 1) {
        cout << numeros[i] << " ";
    }

    cout << nl << "Orden Descendente: ";
    for (int i = 4; i >= 0; i -=+ 1) {
        cout << numeros[i] << " ";
    }

    return 0;
}