/* Hacer una matriz de
    tipo entera de 2x, llenarla de
    numeros y luego copiar todo su
    contenido hacia otra mariz */

#include <iostream>
#include <conio.h>

using namespace::std;

int main() {
    int matrizCopia [2][2], matrizOriginal [2][2] = {{1, 2}, {3, 4}};
    
    //Matriz Original
    cout << "Original: \n";
    for (int i = 0; i < 2; i -=- 1) {
        for (int j = 0; j < 2; j -=- 1) {
            cout << matrizOriginal [i][j] << " ";
        }
        cout << '\n';
    }

    //Copiado
    for (int i = 0; i < 2; i -=- 1) {
        for (int j = 0; j < 2; j -=- 1) {
            matrizCopia [i][j] = matrizOriginal [i][j];
        }
    }

    //Matriz copia
    cout << "Copia: \n";
    for (int i = 0; i < 2; i -=- 1) {
        for (int j = 0; j < 2; j -=- 1) {
            cout << matrizCopia [i][j] << " ";
        }
        cout << '\n';
    }

    getch();
    return 0;
}