/* Pedir al usuario 2 cadenas de caracteres
    de numeros, uno entero y el otro real,
    convertirlos a sus respectivos valores y por
    ultimo sumarlos 
*/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char cad1 [100], cad2  [100];
    cin.getline(cad1, 100, nl);
    cin.getline(cad2, 100, nl);

    float suma = (stoi(cad1)) + (stof(cad2));

    cout << suma << nl;

    return 0;
}