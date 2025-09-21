// Copiar el contenido de una cadena a otra - funcion strcpy()

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char nombre [] = "Andres";
    char nombre2 [20];

    strcpy(nombre2, nombre);

    cout << nombre2 << nl;

    return 0;
}
