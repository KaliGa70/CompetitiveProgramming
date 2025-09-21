//Transformar una cadena a numeros - Funcion atoi() y atof()

// "123" -> 123 atoi()
// "123.12" -> 123.12 atof()

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char cad [] = "123";
    char cad2 [] = "123.12";
    int numero = 0;
    float numero1 = 0.0;

    numero = atoi(cad);
    numero1 = atof(cad2);

    cout << numero << nl;
    cout << numero1 << nl;

    return 0;
}