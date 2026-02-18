// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 18/02/2026
#include <iostream>

using namespace std;

int main()
{
    int mes=0;
    cout<<"ingresar numero de mes";
    cin >> mes;

    if (mes==1)
    {
        cout << "Usted ha elegido enero";
    }
    if (mes==2)
    {
        cout << "Usted ha elegido febrero";
    }
    if (mes==3)
    {
        cout << "Usted ha elegido marzo";
    }
    if (mes==4)
    {
        cout << "Usted ha elegido abril";
    }
    if (mes==5)
    {
        cout << "Usted ha elegido mayo";
    }
    if (mes==6)
    {
        cout << "Usted ha elegido junio";
    }
    if (mes==7)
    {
        cout << "Usted ha elegido julio";
    }
    if (mes==8)
    {
        cout << "Usted ha elegido agosto";
    }
    if (mes==9)
    {
        cout << "Usted ha elegido septiembre";
    }
    if (mes==10)
    {
        cout << "Usted ha elegido octubre";
    }
    if (mes==11)
    {
        cout << "Usted ha elegido noviembre";
    }
    if (mes==12)
    {
        cout << "Usted ha elegido noviembre";
    }
    if ((mes<1)or(mes>12)) 
    {
        cout << "no existe el mes numero "<< mes;
    }
    return 0;
}