// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 12/02/2026
#include <iostream>

using namespace std;

int main()
{
    system ("cls");
    float precio = 0;
    float IVA = 0.13;
    float precio_IVA = 0;
    cout << "establecer el precio del producto" << endl;
    cin >> precio;
    precio_IVA = precio + (precio*IVA);
    cout << "tras aplicar el IVA el precio final sera de: " << precio_IVA;
    return 0;
}