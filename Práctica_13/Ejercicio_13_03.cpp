// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 06/06/2026
#include <iostream>
#include <string>

using namespace std;

struct Alumno
{
    int cedula;
    string nombre;
    string apellido;
    int edad;
    string profesion;
    string lugar_nacimiento;
    string direccion;
    int telefono;
};

void mostrar(Alumno alumnos[], int n);

int main()
{
    int n;

    cout << "Cantidad de alumnos: ";
    cin >> n;
    cin.ignore();

    Alumno alumnos[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Cedula: ";
        cin >> alumnos[i].cedula;
        cin.ignore();

        cout << "Nombre: ";
        getline(cin, alumnos[i].nombre);

        cout << "Apellido: ";
        getline(cin, alumnos[i].apellido);

        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cin.ignore();

        cout << "Profesion: ";
        getline(cin, alumnos[i].profesion);

        cout << "Lugar de nacimiento: ";
        getline(cin, alumnos[i].lugar_nacimiento);

        cout << "Direccion: ";
        getline(cin, alumnos[i].direccion);

        cout << "Telefono: ";
        cin >> alumnos[i].telefono;
        cin.ignore();
    }

    mostrar(alumnos, n);

    return 0;
}

void mostrar(Alumno alumnos[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Cedula: " << alumnos[i].cedula << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Apellido: " << alumnos[i].apellido << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Profesion: " << alumnos[i].profesion << endl;
        cout << "Lugar de nacimiento: " << alumnos[i].lugar_nacimiento << endl;
        cout << "Direccion: " << alumnos[i].direccion << endl;
        cout << "Telefono: " << alumnos[i].telefono << endl;
    }
}