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
float calcularVentas();
float calcularComision(float ventas);
float calcularSueldo(float sueldoBase, float comision);
int main() {

    srand(time(0));

    int n=0;
    float sueldoBase=0;
    float ventas=0;
    float comision=0;
    float sueldoTotal=0;
    cout << "Ingrese numero de vendedoras: ";
    cin >> n;
    for(int i=1; i<=n; i++) 
    {

        cout << "Vendedora " << i << endl;

        cout << "Ingrese sueldo basico segun antiguedad: ";
        cin >> sueldoBase;

        ventas = calcularVentas();
        comision = calcularComision(ventas);
        sueldoTotal = calcularSueldo(sueldoBase, comision);

        cout << "Total vendido: " << ventas << " Bs" << endl;
        cout << "Comision (10%): " << comision << " Bs" << endl;
        cout << "Sueldo total a pagar: " << sueldoTotal << " Bs" << endl;
    }

    return 0;
}

float generarPrecio() 
{
    return rand()%(100-20+1)+20; 
}

float calcularVentas() 
{
    float total = 0;
    float precio=0;

    for(int i=1; i<=10; i++) {
        precio = generarPrecio();
        cout << "   Producto " << i << " precio: " << precio << " Bs" << endl;
        total += precio;
    }

    return total;
}

float calcularComision(float ventas) 
{
    return ventas * 0.10;
}

float calcularSueldo(float sueldoBase, float comision) 
{
    return sueldoBase + comision;
}