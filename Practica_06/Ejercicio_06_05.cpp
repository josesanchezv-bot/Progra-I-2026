// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: ING Mecatrónica  
// Fecha creación: 31/03/2026
// Número de ejercicio: 5

#include <iostream>
using namespace std;

// Cuadrado
double calcularArea(double lado) {
    return lado * lado;
}

// Rectángulo
double calcularArea(double base, double altura) {
    return base * altura;
}

// Círculo
float calcularArea(float radio, float PI) {
    return PI * radio * radio;
}

int main() {
    cout << "Area cuadrado: " << calcularArea(4.0) << endl;
    cout << "Area rectangulo: " << calcularArea(4.0, 5.0) << endl;
    cout << "Area circulo: " << calcularArea(3.0f, 3.1416f) << endl;

    return 0;
}