// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 31/03/2026
// Número de ejercicio: 4
#include <iostream>
using namespace std;

double CalcularPrecioTotal(double precioBase, double impuesto = 0.13) {
    return precioBase + (precioBase * impuesto);
}

int main() {
    double precio;

    cout << "Ingrese el precio base: ";
    cin >> precio;

    cout << "Precio total con IVA: " << CalcularPrecioTotal(precio) << endl;

    return 0;
}