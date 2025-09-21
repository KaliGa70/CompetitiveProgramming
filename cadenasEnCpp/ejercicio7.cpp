/* Pedir su nombre al usuario en MATUSCULAS,
    si su nombre comienza por la letra A,
    convertir su nombre a minusculas, caso 
    contrario no convertirlo */

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char nombre [100]; cin.getline(nombre, 100, nl);

    if (strncmp(nombre, "A", 1) == 0) {
        cout << strlwr(nombre) << nl;
    } else {
        cout << nombre << nl;
    }

    return 0;
}