// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
using namespace std;

int mcd(int a, int b);

int main()
{
    int a, b;

    cout << "Ingrese dos numeros: ";
    cin >> a >> b;

    cout << "MCD = " << mcd(a, b);

    return 0;
}

int mcd(int a, int b)
{
    if(b == 0)
        return a;

    return mcd(b, a % b);
}