/* Pedir al usuario una cadena de caracteres,
    almacenala en un arreglo y copiar todo
    su contenido hacia otro arreglo de 
    caracteres. 
*/

#include <iostream>
#include <conio.h>
#include <string.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie();
#define nl '\n'

using namespace::std;

int main () {
    char cadena1 [100];
    char cadena2 [100];

    cin.getline(cadena1, 100, nl);

    cout << "Cadena uno: " << cadena1 << nl;

    strcpy(cadena2, cadena1);

    cout << "Cadena dos: " << cadena2 << nl;
    
    return 0;
}