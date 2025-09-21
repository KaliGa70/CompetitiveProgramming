// Estructura basica en C++

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;
/* 
struct Persona {
    char nombre [20];
    int edad;
} 
    persona1 = {"Andres", 24},
    persona2 = {"Angel", 25}
;

int main () {_
    cout << "Nombre de la primer persona: " << persona1.nombre << nl << "Edad de la primer persona: " << persona1.edad << nl;
    cout << "Nombre de la segunda persona: " << persona2.nombre << nl << "Edad de la segunda persona: " << persona2.edad << nl;

    return 0;
} */

struct Persona {
    char nombre [20];
    int edad;
};

int main () {_

    Persona persona1[2];

    for (int i = 0; i < 2; i -=- 1) {
        cin.getline(persona1[i].nombre, 20, nl);
        cin >> persona1[i].edad;
        cin.ignore();
    }

    for (int i = 0; i < 2; i -=- 1) {
        cout << "Nombre: " << persona1[i].nombre << nl;
        cout << "Edad: " << persona1[i].edad << nl;
    }
    return 0;
}