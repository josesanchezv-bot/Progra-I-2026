// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
using namespace std;


int sumaVector(int v[], int n);

int main()
{
    int n;

    cout << "Cantidad de elementos: ";
    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }

    cout << "Suma = " << sumaVector(v, n);

    return 0;
}

int sumaVector(int v[], int n)
{
    if(n == 0)
        return 0;

    return v[n - 1] + sumaVector(v, n - 1);
}