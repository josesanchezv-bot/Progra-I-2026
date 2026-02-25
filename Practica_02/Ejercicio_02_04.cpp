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
    int n=0;
    int suma=0;
    int factorial=1;
    cout << "ingresar numero final para una sumatoria de los factoriales: "<< endl;
    cin >> n;
    cout << "sumatoria de factoriales hasta: "<< n ;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i; //generación del factorial mientras avanza i
        suma += factorial;  //suma de todos los factoriales
     }
    cout << "la sumatoria total de factoriales es: "<< endl << suma;
    return 0;
}