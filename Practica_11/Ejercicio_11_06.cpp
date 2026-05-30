// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
using namespace std;


bool compararVectores(int v1[], int v2[], int n);

int main()
{
    int n;

    cout << "ingresar cantidad de elementos: ";
    cin >> n;

    int v1[n], v2[n];

    cout << "\nVector 1\n";
    for(int i = 0; i < n; i++)
        cin >> v1[i];

    cout << "\nVector 2\n";
    for(int i = 0; i < n; i++)
        cin >> v2[i];

    if(compararVectores(v1, v2, n))
        cout << "Los vectores son iguales";
    else
        cout << "Los vectores son diferentes";

    return 0;
}

bool compararVectores(int v1[], int v2[], int n)
{
    if(n == 0)
        return true;

    if(v1[n - 1] != v2[n - 1])
        return false;

    return compararVectores(v1, v2, n - 1);
}