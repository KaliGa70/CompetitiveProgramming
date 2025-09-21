//Ordenamiento por shell

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

void intercambio (float &x, float &y) {
    float aux = 0;

    aux = x;
    x = y;
    y = aux;
}

void ordenacionShell (float a [], int n) {
    int salto = 0, i = 0, j = 0, k = 0;
    salto = n / 2;

    while (salto > 0) {
        for (i = salto; i < n; i -=- 1) {
            j = i - salto;

            while (j >= 0) {
                k = j + salto;
                if (a[j] <= a[k]) { //Par de elementos estan ordenados
                    j = -1;
                } else { // Par de elementos estan desordenados
                    intercambio(a[j], a[k]);
                    j -= salto;
                }
            }
        }
        salto = salto / 2;
    }
}

int main () {_
    float arreglo [] = {4, 6, 1, 9, 5, 10, 2, 11, 19, 7};

    ordenacionShell (arreglo, 10);

    cout << "Arreglo Ordenado - Forma Ascendente: ";
    for (int i = 0; i < 10; i -=- 1) {
        cout << arreglo [i] << " ";
    }

    cout << nl << "Arreglo Ordenado - Forma Descendente: ";
    for (int i = 9; i >= 0; i -=+ 1) {
        cout << arreglo [i] << " ";
    }

    return 0;
}