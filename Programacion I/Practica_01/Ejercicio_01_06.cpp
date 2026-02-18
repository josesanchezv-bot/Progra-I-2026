// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 17/02/2026
#include <iostream>

using namespace std;

int main()
{
    int num =0;
    cout << "Colocar un numero entero para determinar si es par o impar"<<endl;
    cin >> num;
    if (num%2 ==0)
    {
        cout << "es un par";
    }
    else
    {
        cout << "es un impar";
    }
}