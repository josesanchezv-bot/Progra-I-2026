// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ingeniería Mecatrónica
// Fecha creación: 06/06/2026
#include <iostream>
#include <string>

using namespace std;

struct Producto
{
    string nombre;
    string codigo;
    float precio;
    int cantidad_en_inventario;
    string observaciones;
};

int masCaro(Producto productos[], int n);
int totalInventario(Producto productos[], int n);

int main()
{
    int n;

    cout << "Cantidad de productos: ";
    cin >> n;
    cin.ignore();

    Producto productos[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Nombre: ";
        getline(cin, productos[i].nombre);

        cout << "Codigo: ";
        getline(cin, productos[i].codigo);

        cout << "Precio: ";
        cin >> productos[i].precio;

        cout << "Cantidad: ";
        cin >> productos[i].cantidad_en_inventario;
        cin.ignore();

        if (productos[i].cantidad_en_inventario < 5)
        {
            productos[i].observaciones = "PRODUCTO CON BAJA CANTIDAD DE INVENTARIO";
        }
        else
        {
            productos[i].observaciones = "SIN OBSERVACIONES";
        }
    }

    int posicion = masCaro(productos, n);

    cout << endl;
    cout << "Producto mas caro" << endl;
    cout << productos[posicion].nombre << endl;
    cout << productos[posicion].precio << endl;

    cout << endl;
    cout << "Cantidad total en inventario: ";
    cout << totalInventario(productos, n) << endl;

    return 0;
}

int masCaro(Producto productos[], int n)
{
    int posicion = 0;

    for (int i = 1; i < n; i++)
    {
        if (productos[i].precio > productos[posicion].precio)
        {
            posicion = i;
        }
    }

    return posicion;
}

int totalInventario(Producto productos[], int n)
{
    int suma = 0;

    for (int i = 0; i < n; i++)
    {
        suma += productos[i].cantidad_en_inventario;
    }

    return suma;
}