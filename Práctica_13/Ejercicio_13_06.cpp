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
    int id;
    float sueldo;
    int antiguedad;
};

int contarMayores(Empleado empleados[], int n, float sueldo);
float promedioAntiguedad(Empleado empleados[], int n);

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

        cout << "ID: ";
        cin >> empleados[i].id;

        cout << "Sueldo: ";
        cin >> empleados[i].sueldo;

        cout << "Antiguedad: ";
        cin >> empleados[i].antiguedad;
        cin.ignore();
    }

    float valor;

    cout << "Ingrese sueldo de referencia: ";
    cin >> valor;

    cout << "Empleados con sueldo mayor: ";
    cout << contarMayores(empleados, n, valor) << endl;

    cout << "Promedio de antiguedad: ";
    cout << promedioAntiguedad(empleados, n) << endl;

    return 0;
}

int contarMayores(Empleado empleados[], int n, float sueldo)
{
    int contador = 0;

    for (int i = 0; i < n; i++)
    {
        if (empleados[i].sueldo > sueldo)
        {
            contador++;
        }
    }

    return contador;
}

float promedioAntiguedad(Empleado empleados[], int n)
{
    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma += empleados[i].antiguedad;
    }

    return (float)suma / n;
}