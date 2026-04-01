// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 31/03/2026
// Número de ejercicio: 7
#include <iostream>
using namespace std;

void agregarNota(double &sumaTotal, int &cantidadNotas, double nuevaNota) {
    sumaTotal += nuevaNota;
    cantidadNotas++;
}

int main() {
    double suma = 0, nota;
    int cantidad = 0, N;

    cout << "Cuantas notas desea ingresar: ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Ingrese nota " << i + 1 << ": ";
        cin >> nota;
        agregarNota(suma, cantidad, nota);
    }

    cout << "Promedio: " << (suma / cantidad) << endl;

    return 0;
}