// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 25/02/2026
#include <iostream>

using namespace std;

int main()
{
    system("cls");
    int n,suma=0;
    cout << "ingresar numero final para una sumatoria: "<< endl;
    cin >> n;
    cout << "sumatoria hasta: "<<n;
    for (size_t i = 0; i <= n; i++)
    {
        suma += i;
    }
    cout << "la sumatoria total hasta n es: "<< endl << suma;
    return 0;
}