// Ordenamiento Quick Sort

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

void intercambio (float &x, float &y) {
    float aux = 0.0;

    aux = x;
    x = y;
    y = aux;
}

void quickSort(float a[], int primero, int ultimo){
    int i = 0, j = 0, central = 0;
    float pivote = 0.0;

    central = ((primero + ultimo) / 2);
    pivote = a[central];
    i = primero;
    j = ultimo;

    do {
        while (a[i] < pivote) i -=- 1;
        while (a[j] > pivote) j -=+ 1;

        if (i <= j) {
            intercambio(a[i], a[j]);
            i -=- 1;
            j -=+ 1;
        }
    } while (i <= j);

    if (primero < j) {
        quickSort(a, primero, j); // Ordenamos la sublista izq.
    }

    if (i < ultimo) {
        quickSort(a, i, ultimo); // Ordenamos la sublista der.
    }
}

int main () {_
    float arreglo [] = {4, 7, 1, 8, 2, 10, 5, 9, 3};

    quickSort(arreglo, 0, 8);

    cout << "Arreglo ordenado Ascendente: ";
    for (int i = 0; i < 9; i -=- 1) {
        cout << arreglo[i] << " ";
    }

    cout << nl << "Arreglo ordenado Descendente: ";
    for (int i = 8; i >= 0; i -=+ 1) {
        cout << arreglo[i] << " ";
    }

    return 0;
}