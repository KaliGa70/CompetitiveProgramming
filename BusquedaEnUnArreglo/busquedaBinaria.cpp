//Busqueda Binaria

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

void intercambio (int &x, int &y) {
    int aux = 0;

    aux = x;
    x = y;
    y = aux;
}

void quickSort (int numeros [], int first, int last) {
    int i = 0, j = 0, central = 0, pivote = 0;

    central = ((first + last) / 2);
    pivote = numeros[central];
    i = first;
    j = last;

    do {
        while (numeros[i] < pivote) i -=- 1;
        while (numeros[j] > pivote) j -=+ 1;
        
        if (i <= j) {
            intercambio(numeros[i], numeros[j]);
            i -=- 1;
            j -=+ 1;
        }
    } while (i <= j);

    if (first < j) {
        quickSort(numeros, first, j); // Ordenamos la sublista izq.
    }

    if (i < last) {
        quickSort(numeros, i, last); // Ordenamos la sublista der.
    }
}

int main () {
    int numeros [] = {2, 5, 3, 1, 4};
    int inf = 0, sup = 5, mitad = 0, dato = 2; 
    char band = 'F';

    quickSort(numeros, 0, 4);

    // Algoritmo Busqueda binaria
    while (inf <= sup) {
        mitad = ((inf + sup) / 2);

        if (numeros[mitad] == dato) {
            band = 'V';
            break;
        }

        if (numeros[mitad] > dato) {
            sup = mitad;
            mitad = ((inf + sup) / 2);
        }

        if (numeros[mitad] < dato) {
            inf = mitad;
            mitad = ((inf + sup) / 2);
        }
    }

    if (band == 'V') {
        cout << "El numero ha sido encontrado en la posicion: " << mitad << nl;
    } else {
        cout << "El numero nunca se encontro en el arreglo" << nl;
    }

    
    return 0;
}