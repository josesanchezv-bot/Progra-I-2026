// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 30/05/2026
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void actualizarProducto();

int main() {

    actualizarProducto();

    return 0;
}

void actualizarProducto() {

    vector<string> nombres;
    vector<float> precios;

    ifstream entrada("productos.txt");

    string nombre;
    float precio;

    while(entrada >> nombre >> precio) {

        nombres.push_back(nombre);
        precios.push_back(precio);
    }

    entrada.close();

    string buscar;
    float nuevoPrecio;
    bool encontrado = false;

    cout << "Producto a buscar: ";
    cin >> buscar;

    cout << "Nuevo precio: ";
    cin >> nuevoPrecio;

    for(int i = 0; i < nombres.size(); i++) {

        if(nombres[i] == buscar) {

            precios[i] = nuevoPrecio;
            encontrado = true;
        }
    }

    if(encontrado) {

        ofstream salida("productos.txt");

        for(int i = 0; i < nombres.size(); i++) {

            salida << nombres[i]
                   << " "
                   << precios[i]
                   << endl;
        }

        salida.close();

        cout << "Producto actualizado correctamente.";
    }
    else {

        cout << "El producto no existe.";
    }
}