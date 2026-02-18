// Materia: Programación I, Paralelo 4
// Autor: José Armando Sánchez Velarde
// Carnet: 9179098
// Carrera del estudiante: Ing. Mecatrónica
// Fecha creación: 16/02/2026
#include <iostream>
#include <cmath>
//sacar hipotenusa por medio de catetos
using namespace std;

int main()
{
    float cateto1=0, r1,r2;
    float cateto2=0;
    float hipotenusa=0;
    cout << "calculo de hipotenusa por medio de catetos"<<endl;
    cout << "ingresar primer cateto"<< endl;
    cin >> cateto1;
    cout << "ingresar segundo cateto"<<endl;
    cin >> cateto2;
    r1=cateto1*cateto1;
    r2=cateto2*cateto2;
    hipotenusa=sqrt(r1+r2);
    cout << "La hipotenusa resultante de los catetos es: " << hipotenusa<<endl;
    return 0;
}