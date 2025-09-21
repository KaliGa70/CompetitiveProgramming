// Buesqueda seciencial

/*

    a [5] = {3, 4, 2, 1, 5}; dato = 4

*/

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    //int a [] = {3, 4, 2, 1, 5};
    char a [] = {'e', 'a', 'o', 'u', 'i'};
    int i = 0;
    char dato = 'o';
    char band = 'F';

    //Busqueda secuencial
    while ((band == 'F') && (i < 5)) {
        if (a [i] == dato) {
            band = 'V';
        }
        i -=- 1;
    }

    if (band == 'F') {
        cout << "La letra a buscar no existe en el arreglo" << nl;
    } else {
        cout << "La letra se encontro en el pos: " << i-1 << nl;
    }

    return 0;
}