// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 24/02/2026
#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int num,multi=0;
    cout <<"ingresar numero para mostrar su tabla de multiplicacion: ";
    cin >> num;
    for (int i = 0; i <= 10; i++)
    {
        multi= num*i; //ingreso de tabla de multiplicar
        cout << num << "x" << i << "=" << multi<<endl;
    }
    return 0;
}