// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 06/06/2026
#include <iostream>
#include <string>

using namespace std;

struct Empleado
{
    string nombre;
    string genero;
    float salario;
};

void buscar(Empleado empleados[], int n, int &menor, int &mayor);

int main()
{
    int n;

    cout << "Cantidad de empleados: ";
    cin >> n;
    cin.ignore();

    Empleado empleados[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nombre: ";
        getline(cin, empleados[i].nombre);

        cout << "Genero: ";
        getline(cin, empleados[i].genero);

        cout << "Salario: ";
        cin >> empleados[i].salario;
        cin.ignore();
    }

    int menor;
    int mayor;

    buscar(empleados, n, menor, mayor);

    cout << endl;
    cout << "Empleado con menor salario" << endl;
    cout << empleados[menor].nombre << endl;
    cout << empleados[menor].salario << endl;

    cout << endl;
    cout << "Empleado con mayor salario" << endl;
    cout << empleados[mayor].nombre << endl;
    cout << empleados[mayor].salario << endl;

    return 0;
}

void buscar(Empleado empleados[], int n, int &menor, int &mayor)
{
    menor = 0;
    mayor = 0;

    for (int i = 1; i < n; i++)
    {
        if (empleados[i].salario < empleados[menor].salario)
        {
            menor = i;
        }

        if (empleados[i].salario > empleados[mayor].salario)
        {
            mayor = i;
        }
    }
}