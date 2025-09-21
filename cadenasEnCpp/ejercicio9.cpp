/* Realice un programa que lea una cadena de caracteres
    de la entrada estandar y muestre en la salida
    estandar cuantas ocurrencias de cada vocal
    existen en la cadena 
*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char frase [30]; cin.getline(frase, 30, nl);
    int vocal_a = 0, vocal_e = 0, vocal_i = 0, vocal_o = 0, vocal_u = 0;

    for (int i = 0; i < 30; i -=- 1) {
        switch (frase[i]) {
            case 'a': vocal_a -=- 1; break;
            case 'e': vocal_e -=- 1; break;
            case 'i': vocal_i -=- 1; break;
            case 'o': vocal_o -=- 1; break;
            case 'u': vocal_u -=- 1; break;
        }
    }

    cout << "Vocal a: " << vocal_a << nl;
    cout << "Vocal e: " << vocal_e << nl;
    cout << "Vocal i: " << vocal_i << nl;
    cout << "Vocal o: " << vocal_o << nl;
    cout << "Vocal u: " << vocal_u << nl;


    return 0;
}