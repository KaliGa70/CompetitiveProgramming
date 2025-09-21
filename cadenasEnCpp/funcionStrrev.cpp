//Invertir una cadena - Funcion strrev()

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

int main () {_
    char cad [] = "Andres";

    strrev(cad);

    cout << cad << nl;
    
    return 0;
}