//A;adir o concatenar una cadena con otra - Funcion strcat()

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char cad1 [] = "Esto es una cadena";
    char cad2 [] = " de ejemplo";
    char cad3 [30];

    strcpy(cad3, cad1); //cad2 = "Esto es una cadena"

    cout << cad3 << nl;

    strcat(cad3, cad2); //cad3 = "Esto es una cadena de texto"

    cout << cad3 << nl;

    return 0;
}