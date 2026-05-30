// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde 
// Carnet: 9179098
// Carrera del estudiante: ING MECATRÓNICA 
// Fecha creación: 26/05/2026
#include <iostream>
#include <string>
using namespace std;

int potencia(int base, int exponente);

int main()
{
    system("cls");
    int base=0;
    int exponente=0;
    cout <<"ingresar base de potencia"<<endl;
    cin >> base;
    cout << "ingresar exponente de potencia"<<endl;
    cin >> exponente;
    cout << potencia(base,exponente);
}

 int potencia(int base, int exponente)
{
    if (exponente == 0)
    {
        return 1;
    }
    else
    {
        return base * potencia(base, exponente - 1);
    }
}