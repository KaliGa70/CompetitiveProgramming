#include <iostream>
#include <conio.h>
#include <string.h>

using namespace::std;

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

int main () {_
    char cadena [100];

    cin.getline(cadena, 100,'\n');

    //cout << (strlen(cadena));

    if ((strlen(cadena)) > 10) {
        cout << cadena << nl;
    }

    getch();
    return 0;
}
