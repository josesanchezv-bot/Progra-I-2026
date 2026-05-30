// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
using namespace std;

void ullman(int n);

int main()
{
    int n;

    cout << "Ingrese un numero entero mayor que 1: ";
    cin >> n;

    ullman(n);

    return 0;
}

void ullman(int n)
{
    cout << n << " ";

    if(n == 1)
        return;

    if(n % 2 == 0)
        ullman(n / 2);
    else
        ullman(3 * n + 1);
}