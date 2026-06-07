// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 06/06/2026
#include <iostream>
#include <string>

using namespace std;

struct Pelicula
{
    string titulo;
    string director;
    int duracion;
    int anio_estreno;
    string genero;
};

void mostrarGenero(Pelicula peliculas[], int n, string genero);
void mostrarDirector(Pelicula peliculas[], int n, string director);

int main()
{
    int n;

    cout << "Cantidad de peliculas: ";
    cin >> n;
    cin.ignore();

    Pelicula peliculas[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Titulo: ";
        getline(cin, peliculas[i].titulo);

        cout << "Director: ";
        getline(cin, peliculas[i].director);

        cout << "Duracion: ";
        cin >> peliculas[i].duracion;

        cout << "Anio de estreno: ";
        cin >> peliculas[i].anio_estreno;
        cin.ignore();

        cout << "Genero: ";
        getline(cin, peliculas[i].genero);
    }

    string generoBuscado;
    string directorBuscado;

    cout << "Genero a buscar: ";
    getline(cin, generoBuscado);

    mostrarGenero(peliculas, n, generoBuscado);

    cout << "Director a buscar: ";
    getline(cin, directorBuscado);

    mostrarDirector(peliculas, n, directorBuscado);

    return 0;
}

void mostrarGenero(Pelicula peliculas[], int n, string genero)
{
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (peliculas[i].genero == genero)
        {
            cout << peliculas[i].titulo << endl;
        }
    }
}

void mostrarDirector(Pelicula peliculas[], int n, string director)
{
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (peliculas[i].director == director)
        {
            cout << peliculas[i].titulo << endl;
        }
    }
}