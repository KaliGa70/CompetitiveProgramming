//Pasar una palabra a MAYUSCULA - Funcion strupr()

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char palabra [] = "andres";

    strupr(palabra);

    cout << palabra << nl;

    return 0;
}