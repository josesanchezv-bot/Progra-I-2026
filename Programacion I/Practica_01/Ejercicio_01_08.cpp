// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 18/02/2026

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    cout << "introducir un numero ";
    cin >> num1;
    cout << "introducir un numero ";
    cin >> num2;
    cout << "introducir un numero ";
    cin >> num3;
    cout << "introducir un numero ";
    cin >> num4;
    if ((num4==num1)or(num4==num2)or(num4==num3))
    {
        cout << "hay una coincidencia";
    }
    else
    {
        cout << "no hay coincidencia";
    }
}
