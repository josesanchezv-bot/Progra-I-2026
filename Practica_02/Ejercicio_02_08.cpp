// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 25/02/2026
#include <iostream>
using namespace std;

int main()
{
    system("cls");
    int n;
    float precio, subtotal = 0;
    float iva, total, descuento = 0, totalFinal;

    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Precio del producto " << i << ": ";
        cin >> precio;
        subtotal += precio;
    }

    // Calcular IVA
    iva = subtotal * 0.13;

    // Total con IVA
    total = subtotal + iva;

    // Aplicar descuento si pasa de 2500 Bs
    if (total > 2500) {
        descuento = total * 0.05;
    }

    totalFinal = total - descuento;

    cout << "\n------ RESULTADOS ------" << endl;
    cout << "Subtotal de ventas: " << subtotal << " Bs" << endl;
    cout << "IVA (13%): " << iva << " Bs" << endl;
    cout << "Descuento aplicado: " << descuento << " Bs" << endl;
    cout << "Total de ventas del dia: " << totalFinal << " Bs" << endl;
    cout << "Pago de IVA al SIN: " << iva << " Bs" << endl;

    return 0;
}