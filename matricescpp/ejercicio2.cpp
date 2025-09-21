/* 2. Realiza un programa que defina una matriz
    de 3x3 y escriba un ciclo para que 
    muestre la diagonal principal de la matriz */

    /*
        00 01 02
        10 11 12
        20 21 22
    */

#include <iostream>
#include <conio.h>

using namespace::std;

int main() {
    int matriz [3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0; i < 3; i -=- 1) {
        for(int j = 0; j < 3; j -=- 1) {
            if (i == j) {
                cout << matriz [i][j];
            } else {
                cout << " ";
            }
        }
        cout << '\n';
    }

    getch();
    return 0; 
}