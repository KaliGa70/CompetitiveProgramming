/* Convertir dos cadenas de minusculas a 
    MAYUSCULAS. Compararlas, y decir si son
    iguales o no. */

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char palabra1 [] = "andres";
    char palabra2 [] = "andres";

    if (strcmp(strupr(palabra1), strupr(palabra2)) == 0) {
        cout << "Son iguales" << nl;
    } else {
        cout << "Son diferentes" << nl;
    }

    return 0;
}