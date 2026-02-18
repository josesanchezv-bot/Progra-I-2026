// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 18/02/2026
#include <iostream>

using namespace std;
int main()
{
    int edad= 0;
    cout << "ingresar su edad por favor:"<<endl;
    cin >> edad;
    if ((edad>=18) and (edad<=25))
    {
        cout << "se encuentra en el rango de edad";
    }
    else
    {
        cout << "no se encuentra en el rango de edad";
    }
}