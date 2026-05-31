// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int cantidad;
    string nombre;

    ofstream archivoEscritura("nombres.txt");

    if (!archivoEscritura)
    {
        cout << "Error al crear el archivo." << endl;
        return 1;
    }

    cout << "¿Cuantos nombres desea ingresar?: ";
    cin >> cantidad;
    cin.ignore();

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Ingrese un nombre: ";
        getline(cin, nombre);

        archivoEscritura << nombre << endl;
    }

    archivoEscritura.close();

    ifstream archivoLectura("nombres.txt");

    if (!archivoLectura)
    {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    cout << "\nNombres guardados en el archivo:\n";

    while (getline(archivoLectura, nombre))
    {
        cout << nombre << endl;
    }

    archivoLectura.close();

    return 0;
}