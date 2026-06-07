// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 06/06/2026
#include <iostream>
#include <string>

using namespace std;

struct Atleta
{
    string nombre;
    string departamento;
    string deporte;
    int medallas;
};

void mostrarMedallero(Atleta atletas[], int n);

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

        cout << "Departamento: ";
        getline(cin, atletas[i].departamento);

        cout << "Deporte: ";
        getline(cin, atletas[i].deporte);

        cout << "Cantidad de medallas: ";
        cin >> atletas[i].medallas;
        cin.ignore();
    }

    mostrarMedallero(atletas, n);

    return 0;
}

void mostrarMedallero(Atleta atletas[], int n)
{
    string departamentos[50];
    int medallas[50];
    int cantidad = 0;

    for (int i = 0; i < n; i++)
    {
        int posicion = -1;

        for (int j = 0; j < cantidad; j++)
        {
            if (departamentos[j] == atletas[i].departamento)
            {
                posicion = j;
            }
        }

        if (posicion == -1)
        {
            departamentos[cantidad] = atletas[i].departamento;
            medallas[cantidad] = atletas[i].medallas;
            cantidad++;
        }
        else
        {
            medallas[posicion] += atletas[i].medallas;
        }
    }

    cout << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << departamentos[i] << " : " << medallas[i] << endl;
    }
}