/* Realice un programa que calcule la suma
    de dos matrices cuadradas de 3x3 */

#include <iostream>
#include <conio.h>

using namespace::std;

int main () {
    int matriz1 [3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}}, matriz2 [3][3] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}}, matriz3 [3][3];

    for (int i = 0; i < 3; i -=- 1) {
        for (int j = 0; j < 3; j -=- 1) {
            matriz3 [i][j] = (matriz1[i][j] + matriz2[i][j]);
        }
    }

    cout << "Suma entre 2 matrices: \n";
    for (int i = 0; i < 3; i -=- 1) {
        for (int j = 0; j < 3; j -=- 1) {
            cout << matriz3 [i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}