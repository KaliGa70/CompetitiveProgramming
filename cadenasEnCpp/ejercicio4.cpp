/* Crear una cadena que tenga la siguiente frase
    "Hola que tal", luego crear otra
    cadena para preguntarle al usuario su nombre,
    por ultimo a;adir el nombre al final de
    la primera cadena y mostrar el mensaje
    completo "Hola que tal (NombreDelUsuario)". */

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char frase [] = "Hola que tal ";
    char nombre [50];

    cout << "Digita tu nombre: ";
    cin.getline(nombre, 50, nl);

    cout << strcat(frase, nombre) << nl;

    return 0;
}