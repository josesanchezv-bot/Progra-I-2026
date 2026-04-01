// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 31/03/2026
// Número de ejercicio: 1
#include <iostream>
using namespace std;

void IntercambiarValores(int &x, int &y);

int main() {
    system("cls");
    int x = 0;
    int y = 0;

    cout << "ingrsar primer valor"<<endl;
    cin >> x;
    cout << "ingrsar segundo valor"<<endl;
    cin >> y;
    cout << "Antes del intercambio:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    IntercambiarValores(x, y);

    cout << "Despues del intercambio:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

void IntercambiarValores(int &x, int &y) 
{
    int temp = x;
    x = y;
    y = temp;
}