// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 06/06/2026
#include <iostream>
#include <string>

using namespace std;

struct Libro
{
    string titulo;
    string autor;
    int anio_publicacion;
    bool disponible;
};

void mostrarLibro(Libro libro);

int main()
{
    Libro libro;
    int opcion;

    cout << "Titulo: ";
    getline(cin, libro.titulo);

    cout << "Autor: ";
    getline(cin, libro.autor);

    cout << "Anio de publicacion: ";
    cin >> libro.anio_publicacion;

    cout << "Disponible? (1=Si 0=No): ";
    cin >> opcion;

    if (opcion == 1)
    {
        libro.disponible = true;
    }
    else
    {
        libro.disponible = false;
    }

    mostrarLibro(libro);

    return 0;
}

void mostrarLibro(Libro libro)
{
    cout << endl;
    cout << "Titulo: " << libro.titulo << endl;
    cout << "Autor: " << libro.autor << endl;
    cout << "Anio: " << libro.anio_publicacion << endl;

    if (libro.disponible)
    {
        cout << "Disponible" << endl;
    }
    else
    {
        cout << "No disponible" << endl;
    }
}