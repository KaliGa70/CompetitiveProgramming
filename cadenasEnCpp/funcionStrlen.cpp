// Longitud de un acadena de caracteres - funcion strlen()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace::std;

int main () {
    char palabra [] = "Hola";
    int longitud = 0;

    longitud = strlen(palabra);

    cout << longitud << '\n';

    getch();
    return 0;
}