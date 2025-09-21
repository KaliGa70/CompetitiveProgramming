// Comparar cadenas - Funcion strcmp()

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char palabra1 [] = "AHola";
    char palabra2 [] = "BHola";

    if (strcmp(palabra1, palabra2) == 0) {
        cout << "Son iguales" << nl;
    } else {
        cout << "No son iguales" << nl;
    }

    //Palabra1 esta antes alfabeticamente "Usando < se logra eso" y con "Usando > se ve si esta despues"
    if (strcmp(palabra1, palabra2) < 0) {
        cout << palabra1 << "Esta antes que palabra 2" << nl;
    }

    return 0;
}