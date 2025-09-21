// Cadenas de caracteres

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace::std;

int main () {
    char palabra [] = "Andres";
    char palabra2 [] = {'A', 'n', 'd', 'r', 'e', 's'};
    char nombre [20];

    //cout << palabra << '\n';
    //cout << palabra2 << '\n';

    //Ingresar nombre mejor forma
    cin.getline(nombre, 20, '\n');

    cout << nombre << '\n';


    getch();
    return 0;
}
