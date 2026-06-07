// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 06/06/2026.
#include <iostream>
#include <string>

using namespace std;

struct Atleta
{
    string nombre;
    string pais;
    int edad;
    int mejor_tiempo;
};

int buscarMejor(Atleta atletas[], int n);

int main()
{
    int n;

    cout << "Cantidad de atletas: ";
    cin >> n;
    cin.ignore();

    Atleta atletas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nombre: ";
        getline(cin, atletas[i].nombre);

        cout << "Pais: ";
        getline(cin, atletas[i].pais);

        cout << "Edad: ";
        cin >> atletas[i].edad;

        cout << "Mejor tiempo: ";
        cin >> atletas[i].mejor_tiempo;
        cin.ignore();
    }

    int pos = buscarMejor(atletas, n);

    cout << endl;
    cout << "Atleta con mejor tiempo" << endl;
    cout << "Nombre: " << atletas[pos].nombre << endl;
    cout << "Pais: " << atletas[pos].pais << endl;

    return 0;
}

int buscarMejor(Atleta atletas[], int n)
{
    int pos = 0;

    for (int i = 1; i < n; i++)
    {
        if (atletas[i].mejor_tiempo < atletas[pos].mejor_tiempo)
        {
            pos = i;
        }
    }

    return pos;
}