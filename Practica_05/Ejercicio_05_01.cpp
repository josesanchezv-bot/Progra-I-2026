// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 10/03/2026
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

float generarPrecio();
float calcularIVA(float subtotal);
float aplicarDescuento(float total);

int main() 
{
    srand(time(0));

    int n=0;
    float precio=0;
    float subtotal = 0;
    float iva=0;
    float total=0;
    float descuento=0;
    cout << "Ingrese la cantidad de productos vendidos: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        precio = generarPrecio();
        cout << "Producto " << i << " precio: " << precio << " Bs" << endl;
        subtotal += precio;
    }

    iva = calcularIVA(subtotal);
    total = subtotal + iva;
    descuento = aplicarDescuento(total);
    total = total - descuento;

    cout << "Subtotal de ventas: " << subtotal << " Bs"<<endl;
    cout << "IVA (13%): " << iva << " Bs"<<endl;
    cout << "Descuento aplicado: " << descuento << " Bs"<<endl;
    cout << "Total final de ventas: " << total << " Bs"<<endl;

    cout << "IVA a pagar al Servicio de Impuestos Nacionales: " << iva << " Bs";

    return 0;
}

float generarPrecio() 
{
    return rand() % (50-20+1)+20; 
}

float calcularIVA(float subtotal) 
{
    return subtotal * 0.13;
}

float aplicarDescuento(float total) 
{
    if (total > 2500) {
        return total * 0.05;
    }
    return 0;
}