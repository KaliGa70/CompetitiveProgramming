// Estructura basica en C++

#include <iostream>
#include <conio.h>

#define _ ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl '\n'

using namespace::std;

struct infoDireccion {
    char direccion [30];
    char ciudad [20];
    char provincia [20];
};

struct empleado {
    char nombre [20];
    struct infoDireccion dirEmpleado;
    double salario;
} empleado [2];

int main () {_
    for (int i = 0; i < 2; i -=- 1) {
        cin.getline(empleado[i].nombre, 20, nl);
        cin.getline(empleado[i].dirEmpleado.direccion, 30, nl);
        cin.getline(empleado[i].dirEmpleado.ciudad, 20, nl);
        cin.getline(empleado[i].dirEmpleado.provincia, 20, nl);
        cin >> empleado[i].salario;

        cin.ignore(); // Limpiar el buffer de entrada
    }

    for (int i = 0; i < 2; i -=- 1) {
        cout << "Nombre: " << empleado[i].nombre << nl;
        cout << "Direccion: " << empleado[i].dirEmpleado.direccion << nl;
        cout << "Ciudad: " << empleado[i].dirEmpleado.ciudad << nl;
        cout << "Provincia: " << empleado[i].dirEmpleado.provincia << nl;
        cout << "Salario: " << empleado[i].salario << nl;
    }

    return 0;
}