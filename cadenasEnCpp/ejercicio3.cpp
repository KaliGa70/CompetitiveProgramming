/* Pedir al usuario que digite 2 cadenas de
    caracteres, e indicar si ambas cadenas
    son iguales, en caso de no serlo, indicar
    cual es mayor alfabeticamente. */

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {
    char cadena1 [100], cadena2 [100];

    cout << "Digite la cadena uno: ";
    cin.getline(cadena1, 100, nl);

    cout << nl <<"Digite la cadena dos: ";
    cin.getline(cadena2, 100, nl);

    cout << nl;

    if (strcmp(cadena1, cadena2) == 0) {
        cout << "Ambas son iguales" << nl;
    } else {
        cout << "Ambas cadenas son distintas" << nl;
        if (strcmp(cadena1, cadena2) > 0) {
            cout << "La cadena uno " << cadena1 << ", es mayor alfabeticamente" << nl;
        } else {
            cout << "La cadena dos " << cadena2 << ", es mayor alfabeticamente" << nl;
        }
    }

    return 0;
}