// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica 
// Fecha creación: 31/03/2026
// Número de ejercicio: 2
#include <iostream>
using namespace std;

double CalcularVolumen(double radio, double altura = 10) {
    const double PI = 3.1416;
    return PI * radio * radio * altura;
}

int main() {
    double radio;
    cout << "Ingrese el radio: ";
    cin >> radio;

    cout << "Volumen del cilindro: " << CalcularVolumen(radio) << endl;

    return 0;
}