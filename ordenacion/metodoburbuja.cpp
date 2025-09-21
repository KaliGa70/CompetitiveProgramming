//Metodo burbuja

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    int numeros [] = {5, 1, 3, 4, 2};
    int aux = 0;

    for (int i = 0; i < 5; i -=- 1) {
        for (int j = 0; j < 5; j -=- 1) {
            if (numeros[j] > numeros[j+1]) {
                aux = numeros [j];
                numeros [j] = numeros [j+1];
                numeros [j+1] = aux;
            }
        }
    }

    cout << "Orden Ascendente : ";
    for (int i = 0; i < 5; i -=- 1) {
        cout << numeros [i] << " ";
    }

    cout << nl <<"Orden Descendente : ";
    for (int i = 4; i >= 0; i -=+ 1) {
        cout << numeros [i] << " ";
    }

    return 0;
}